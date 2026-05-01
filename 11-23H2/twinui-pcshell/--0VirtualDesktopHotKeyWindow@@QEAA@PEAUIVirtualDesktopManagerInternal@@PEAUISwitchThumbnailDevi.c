/*
 * XREFs of ??0VirtualDesktopHotKeyWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEBUtagRECT@@PEAUHMONITOR__@@@Z @ 0x180618BF0
 * Callers:
 *     ??$Make@VVirtualDesktopHotKeyWindow@@PEAUIVirtualDesktopManagerPrivate@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopHotKeyWindow@@@12@$$QEAPEAUIVirtualDesktopManagerPrivate@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x1806165F4 (--$Make@VVirtualDesktopHotKeyWindow@@PEAUIVirtualDesktopManagerPrivate@@PEAUISwitchThumbnailDevi.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDeviceManager@@@Z @ 0x180139DB0 (--4-$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDevi.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18013A84C (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0VirtualDesktopGestureWindow@@QEAA@XZ @ 0x180618AD4 (--0VirtualDesktopGestureWindow@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
VirtualDesktopHotKeyWindow *__fastcall VirtualDesktopHotKeyWindow::VirtualDesktopHotKeyWindow(
        VirtualDesktopHotKeyWindow *this,
        struct IVirtualDesktopManagerInternal *a2,
        struct ISwitchThumbnailDeviceManager *a3,
        struct IApplicationViewCollection *a4,
        struct IImmersiveSettingsCache *a5,
        const struct tagRECT *a6,
        HMONITOR a7)
{
  LONG top; // ecx
  LONG right; // edx
  LONG bottom; // r8d
  int v14; // eax
  _DWORD v16[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  VirtualDesktopGestureWindow::VirtualDesktopGestureWindow(this);
  *(_QWORD *)this = &VirtualDesktopHotKeyWindow::`vftable'{for `CWRLImpWndProc<VirtualDesktopGestureWindow>'};
  *((_QWORD *)this + 2) = &VirtualDesktopHotKeyWindow::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)this + 4, (__int64)a2);
  Microsoft::WRL::ComPtr<ISwitchThumbnailDeviceManager>::operator=((__int64 *)this + 5, (__int64)a3);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((__int64 *)this + 6, (__int64)a4);
  top = a6->top;
  right = a6->right;
  bottom = a6->bottom;
  *((_DWORD *)this + 46) = a6->left;
  *((_DWORD *)this + 47) = top;
  *((_DWORD *)this + 48) = right;
  *((_DWORD *)this + 49) = bottom;
  *((_QWORD *)this + 25) = a7;
  v14 = (*(__int64 (__fastcall **)(struct IImmersiveSettingsCache *, __int64, _DWORD *))(*(_QWORD *)a5 + 32LL))(
          a5,
          8LL,
          v16);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v14);
  *((_BYTE *)this + 222) = v16[0] == 0;
  return this;
}
