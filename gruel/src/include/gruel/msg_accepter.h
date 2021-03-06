/* -*- c++ -*- */
/*
 * Copyright 2009 Free Software Foundation, Inc.
 * 
 * This file is part of GNU Radio
 * 
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#ifndef INCLUDED_GRUEL_MSG_ACCEPTER_H
#define INCLUDED_GRUEL_MSG_ACCEPTER_H

#include <gruel/api.h>
#include <gruel/pmt.h>
#include <boost/shared_ptr.hpp>

namespace gruel {

  /*!
   * \brief Virtual base class that accepts messages
   */
  class GRUEL_API msg_accepter
  {
  public:
    msg_accepter() {};
    virtual ~msg_accepter();

    /*!
     * \brief send \p msg to \p msg_accepter
     *
     * Sending a message is an asynchronous operation.  The \p post
     * call will not wait for the message either to arrive at the
     * destination or to be received.
     */
    virtual void post(pmt::pmt_t msg) = 0;
  };

  typedef boost::shared_ptr<msg_accepter> msg_accepter_sptr;

} /* namespace gruel */

#endif /* INCLUDED_GRUEL_MSG_ACCEPTER_H */
