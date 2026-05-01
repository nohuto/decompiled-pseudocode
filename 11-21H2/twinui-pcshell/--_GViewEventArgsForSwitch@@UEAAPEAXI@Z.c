/*
 * XREFs of ??_GViewEventArgsForSwitch@@UEAAPEAXI@Z @ 0x1803DFCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1ViewEventArgsForSwitch@@UEAA@XZ @ 0x1803DF2B4 (--1ViewEventArgsForSwitch@@UEAA@XZ.c)
 */

ViewEventArgsForSwitch *__fastcall ViewEventArgsForSwitch::`scalar deleting destructor'(
        ViewEventArgsForSwitch *this,
        char a2)
{
  ViewEventArgsForSwitch::~ViewEventArgsForSwitch(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
