/*
 * XREFs of ??_EHotkeyHandler@@UEAAPEAXI@Z @ 0x1805A9190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1HotkeyHandler@@UEAA@XZ @ 0x1805A903C (--1HotkeyHandler@@UEAA@XZ.c)
 */

HotkeyHandler *__fastcall HotkeyHandler::`vector deleting destructor'(HotkeyHandler *this, char a2)
{
  HotkeyHandler::~HotkeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
