/*
 * XREFs of ??_ECVirtualDesktopApplicationViewEventListener@@UEAAPEAXI@Z @ 0x1801B7760
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopApplicationViewEventListener@@UEAA@XZ @ 0x1801B779C (--1CVirtualDesktopApplicationViewEventListener@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CVirtualDesktopApplicationViewEventListener *__fastcall CVirtualDesktopApplicationViewEventListener::`vector deleting destructor'(
        CVirtualDesktopApplicationViewEventListener *this,
        char a2)
{
  CVirtualDesktopApplicationViewEventListener::~CVirtualDesktopApplicationViewEventListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
