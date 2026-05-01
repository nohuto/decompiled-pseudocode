/*
 * XREFs of ??_ETabletModeViewManager@@UEAAPEAXI@Z @ 0x180177068
 * Callers:
 *     ??_ETabletModeViewManager@@WBI@EAAPEAXI@Z @ 0x18020B510 (--_ETabletModeViewManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabletModeViewManager@@UEAA@XZ @ 0x1801770A4 (--1TabletModeViewManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

TabletModeViewManager *__fastcall TabletModeViewManager::`vector deleting destructor'(
        TabletModeViewManager *this,
        char a2)
{
  TabletModeViewManager::~TabletModeViewManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xC0uLL);
  return this;
}
