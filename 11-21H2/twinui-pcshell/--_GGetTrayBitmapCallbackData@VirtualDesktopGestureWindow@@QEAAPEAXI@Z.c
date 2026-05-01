/*
 * XREFs of ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x18054FA28
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z @ 0x180556BA0 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ @ 0x18054F4E8 (--1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ.c)
 */

VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *__fastcall VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'(
        VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *this)
{
  VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::~GetTrayBitmapCallbackData(this);
  operator delete(this);
  return this;
}
