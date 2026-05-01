/*
 * XREFs of ??_EVirtualDesktopGestureWindow@@UEAAPEAXI@Z @ 0x18054FA54
 * Callers:
 *     ??_EVirtualDesktopGestureWindow@@WBA@EAAPEAXI@Z @ 0x18020CE90 (--_EVirtualDesktopGestureWindow@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x18054F5A0 (--1VirtualDesktopGestureWindow@@UEAA@XZ.c)
 */

VirtualDesktopGestureWindow *__fastcall VirtualDesktopGestureWindow::`vector deleting destructor'(
        VirtualDesktopGestureWindow *this,
        char a2)
{
  VirtualDesktopGestureWindow::~VirtualDesktopGestureWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
