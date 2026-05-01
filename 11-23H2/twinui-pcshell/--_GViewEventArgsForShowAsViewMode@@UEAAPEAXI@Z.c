/*
 * XREFs of ??_GViewEventArgsForShowAsViewMode@@UEAAPEAXI@Z @ 0x1802D75B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ViewEventArgsForShowAsViewMode@@UEAA@XZ @ 0x1802D755A (--1ViewEventArgsForShowAsViewMode@@UEAA@XZ.c)
 */

ViewEventArgsForShowAsViewMode *__fastcall ViewEventArgsForShowAsViewMode::`scalar deleting destructor'(
        ViewEventArgsForShowAsViewMode *this,
        char a2)
{
  ViewEventArgsForShowAsViewMode::~ViewEventArgsForShowAsViewMode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
