/*
 * XREFs of ??_EVirtualDesktopGroupedViewsEventListener@@UEAAPEAXI@Z @ 0x18055B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x18055AEEC (--1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ.c)
 */

VirtualDesktopGroupedViewsEventListener *__fastcall VirtualDesktopGroupedViewsEventListener::`vector deleting destructor'(
        VirtualDesktopGroupedViewsEventListener *this,
        char a2)
{
  VirtualDesktopGroupedViewsEventListener::~VirtualDesktopGroupedViewsEventListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
