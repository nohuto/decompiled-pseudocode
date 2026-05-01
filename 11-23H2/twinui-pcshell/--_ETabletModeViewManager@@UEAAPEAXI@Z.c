/*
 * XREFs of ??_ETabletModeViewManager@@UEAAPEAXI@Z @ 0x1801B18C0
 * Callers:
 *     ??_ETabletModeViewManager@@WBI@EAAPEAXI@Z @ 0x1802A7450 (--_ETabletModeViewManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabletModeViewManager@@UEAA@XZ @ 0x1801B18FC (--1TabletModeViewManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
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
