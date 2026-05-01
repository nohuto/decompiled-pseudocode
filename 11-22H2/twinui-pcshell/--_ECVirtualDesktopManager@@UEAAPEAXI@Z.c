/*
 * XREFs of ??_ECVirtualDesktopManager@@UEAAPEAXI@Z @ 0x180600830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualDesktopManager@@UEAA@XZ @ 0x180600320 (--1CVirtualDesktopManager@@UEAA@XZ.c)
 */

CVirtualDesktopManager *__fastcall CVirtualDesktopManager::`vector deleting destructor'(
        CVirtualDesktopManager *this,
        char a2)
{
  CVirtualDesktopManager::~CVirtualDesktopManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
