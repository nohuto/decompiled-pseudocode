/*
 * XREFs of ??_ETabletModeInputHandler@@EEAAPEAXI@Z @ 0x1805204A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TabletModeInputHandler@@EEAA@XZ @ 0x18052045C (--1TabletModeInputHandler@@EEAA@XZ.c)
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
