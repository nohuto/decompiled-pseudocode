/*
 * XREFs of ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1804FEDB8
 * Callers:
 *     ??_ETabletModePositionerManager@@WBI@EAAPEAXI@Z @ 0x18020AD50 (--_ETabletModePositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TabletModePositionerManager@@UEAA@XZ @ 0x1804FEAF8 (--1TabletModePositionerManager@@UEAA@XZ.c)
 */

TabletModePositionerManager *__fastcall TabletModePositionerManager::`scalar deleting destructor'(
        TabletModePositionerManager *this,
        char a2)
{
  TabletModePositionerManager::~TabletModePositionerManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
