/*
 * XREFs of ??_GViewEventArgsForShowAsViewMode@@UEAAPEAXI@Z @ 0x18022D460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1ViewEventArgsForShowAsViewMode@@UEAA@XZ @ 0x18022D416 (--1ViewEventArgsForShowAsViewMode@@UEAA@XZ.c)
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
