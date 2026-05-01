/*
 * XREFs of ??_GTabletModePositioner@@UEAAPEAXI@Z @ 0x180172CF0
 * Callers:
 *     ??_ETabletModePositioner@@WBI@EAAPEAXI@Z @ 0x18020AE10 (--_ETabletModePositioner@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x180172D2C (--1TabletModePositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

TabletModePositioner *__fastcall TabletModePositioner::`scalar deleting destructor'(
        TabletModePositioner *this,
        char a2)
{
  TabletModePositioner::~TabletModePositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x210uLL);
  return this;
}
