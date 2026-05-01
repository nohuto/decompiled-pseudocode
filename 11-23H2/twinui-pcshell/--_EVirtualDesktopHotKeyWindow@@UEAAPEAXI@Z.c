/*
 * XREFs of ??_EVirtualDesktopHotKeyWindow@@UEAAPEAXI@Z @ 0x180618F48
 * Callers:
 *     ??_EVirtualDesktopHotKeyWindow@@WBA@EAAPEAXI@Z @ 0x1802A9660 (--_EVirtualDesktopHotKeyWindow@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x18060AD50 (--1VirtualDesktopGestureWindow@@UEAA@XZ.c)
 */

VirtualDesktopHotKeyWindow *__fastcall VirtualDesktopHotKeyWindow::`vector deleting destructor'(
        VirtualDesktopHotKeyWindow *this,
        char a2)
{
  *(_QWORD *)this = &VirtualDesktopHotKeyWindow::`vftable'{for `CWRLImpWndProc<VirtualDesktopGestureWindow>'};
  *((_QWORD *)this + 2) = &VirtualDesktopHotKeyWindow::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
  VirtualDesktopGestureWindow::~VirtualDesktopGestureWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
