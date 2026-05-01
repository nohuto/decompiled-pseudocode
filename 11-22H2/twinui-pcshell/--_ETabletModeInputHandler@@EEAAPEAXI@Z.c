/*
 * XREFs of ??_ETabletModeInputHandler@@EEAAPEAXI@Z @ 0x1805D8E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TabletModeInputHandler@@EEAA@XZ @ 0x1805D8E24 (--1TabletModeInputHandler@@EEAA@XZ.c)
 */

TabletModeInputHandler *__fastcall TabletModeInputHandler::`vector deleting destructor'(
        TabletModeInputHandler *this,
        char a2)
{
  TabletModeInputHandler::~TabletModeInputHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
