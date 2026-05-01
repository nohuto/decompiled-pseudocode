/*
 * XREFs of ??_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z @ 0x180128FF4
 * Callers:
 *     ??_EDesktopBlueLightReductionManager@@WCI@EAAPEAXI@Z @ 0x180292D90 (--_EDesktopBlueLightReductionManager@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DesktopBlueLightReductionManager@@UEAA@XZ @ 0x180129290 (--1DesktopBlueLightReductionManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

DesktopBlueLightReductionManager *__fastcall DesktopBlueLightReductionManager::`scalar deleting destructor'(
        DesktopBlueLightReductionManager *this,
        char a2)
{
  DesktopBlueLightReductionManager::~DesktopBlueLightReductionManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xD8uLL);
  return this;
}
