/*
 * XREFs of ??_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z @ 0x18003E980
 * Callers:
 *     <none>
 * Callees:
 *     ??1ViewEventArgsForShowAsStandalone@@UEAA@XZ @ 0x18003E9BC (--1ViewEventArgsForShowAsStandalone@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ViewEventArgsForShowAsStandalone *__fastcall ViewEventArgsForShowAsStandalone::`scalar deleting destructor'(
        ViewEventArgsForShowAsStandalone *this,
        char a2)
{
  ViewEventArgsForShowAsStandalone::~ViewEventArgsForShowAsStandalone(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA0uLL);
  return this;
}
