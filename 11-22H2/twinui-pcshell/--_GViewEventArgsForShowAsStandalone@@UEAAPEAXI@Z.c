/*
 * XREFs of ??_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z @ 0x1804BD610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ViewEventArgsForShowAsStandalone@@UEAA@XZ @ 0x1804BCBDC (--1ViewEventArgsForShowAsStandalone@@UEAA@XZ.c)
 */

ViewEventArgsForShowAsStandalone *__fastcall ViewEventArgsForShowAsStandalone::`scalar deleting destructor'(
        ViewEventArgsForShowAsStandalone *this,
        char a2)
{
  ViewEventArgsForShowAsStandalone::~ViewEventArgsForShowAsStandalone(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
