/*
 * XREFs of ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x180551DC8
 * Callers:
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x180550300 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z @ 0x180551658 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x1805526C8 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopGestureWindow::GetScaleFactor(VirtualDesktopGestureWindow *this)
{
  HWND ShellWindow; // rax

  ShellWindow = GetShellWindow();
  return (unsigned int)GetDpiForWindow(ShellWindow) / 0x60;
}
