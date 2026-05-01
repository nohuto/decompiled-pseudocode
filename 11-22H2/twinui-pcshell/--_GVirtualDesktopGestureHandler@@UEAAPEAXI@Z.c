/*
 * XREFs of ??_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z @ 0x1801482E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopGestureHandler@@UEAA@XZ @ 0x1801458A4 (--1VirtualDesktopGestureHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopGestureHandler *__fastcall VirtualDesktopGestureHandler::`scalar deleting destructor'(
        VirtualDesktopGestureHandler *this,
        char a2)
{
  VirtualDesktopGestureHandler::~VirtualDesktopGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1A0uLL);
  return this;
}
