/*
 * XREFs of ??_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z @ 0x1801BE4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopSoftLandingHandler@@UEAA@XZ @ 0x180142AD8 (--1CVirtualDesktopSoftLandingHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CVirtualDesktopSoftLandingHandler *__fastcall CVirtualDesktopSoftLandingHandler::`vector deleting destructor'(
        CVirtualDesktopSoftLandingHandler *this,
        char a2)
{
  CVirtualDesktopSoftLandingHandler::~CVirtualDesktopSoftLandingHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xC8uLL);
  return this;
}
