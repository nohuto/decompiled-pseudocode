/*
 * XREFs of ??_EVirtualDesktopGestureWindow@@UEAAPEAXI@Z @ 0x18060B114
 * Callers:
 *     ??_EVirtualDesktopGestureWindow@@WBA@EAAPEAXI@Z @ 0x1802A8FA0 (--_EVirtualDesktopGestureWindow@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x18060AD50 (--1VirtualDesktopGestureWindow@@UEAA@XZ.c)
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
