/*
 * XREFs of ??_ECVirtualDesktopApplicationViewEventListener@@UEAAPEAXI@Z @ 0x18017A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopApplicationViewEventListener@@UEAA@XZ @ 0x18017A8FC (--1CVirtualDesktopApplicationViewEventListener@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
