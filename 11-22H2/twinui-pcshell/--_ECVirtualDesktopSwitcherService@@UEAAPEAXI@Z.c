/*
 * XREFs of ??_ECVirtualDesktopSwitcherService@@UEAAPEAXI@Z @ 0x180148180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopSwitcherService@@UEAA@XZ @ 0x180147F7C (--1CVirtualDesktopSwitcherService@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CVirtualDesktopSwitcherService *__fastcall CVirtualDesktopSwitcherService::`vector deleting destructor'(
        CVirtualDesktopSwitcherService *this,
        char a2)
{
  CVirtualDesktopSwitcherService::~CVirtualDesktopSwitcherService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x48uLL);
  return this;
}
