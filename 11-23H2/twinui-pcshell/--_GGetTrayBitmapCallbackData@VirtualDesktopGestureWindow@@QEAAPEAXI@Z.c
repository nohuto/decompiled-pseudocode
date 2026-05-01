/*
 * XREFs of ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x18060B0E8
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18060C114 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z @ 0x180612E80 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x18061910C (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ @ 0x18060AC84 (--1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ.c)
 */

VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *__fastcall VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'(
        VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *this)
{
  VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::~GetTrayBitmapCallbackData(this);
  operator delete(this);
  return this;
}
