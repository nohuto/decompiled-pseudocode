/*
 * XREFs of ??_EHotkeyHandler@@UEAAPEAXI@Z @ 0x180675A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1HotkeyHandler@@UEAA@XZ @ 0x180675948 (--1HotkeyHandler@@UEAA@XZ.c)
 */

HotkeyHandler *__fastcall HotkeyHandler::`vector deleting destructor'(HotkeyHandler *this, char a2)
{
  HotkeyHandler::~HotkeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
