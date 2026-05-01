/*
 * XREFs of ??$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopGestureWindow@@@12@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x180609EE8
 * Callers:
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x18060E180 (-Initialize@VirtualDesktopGestureContext@@QEAAJK@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0VirtualDesktopGestureWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEBUtagRECT@@PEAUHMONITOR__@@@Z @ 0x18060A7D4 (--0VirtualDesktopGestureWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDev.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::Make<VirtualDesktopGestureWindow,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,Geometry::CRect &,HMONITOR__ * &>(
        __int64 a1,
        struct IVirtualDesktopManagerInternal **a2,
        struct ISwitchThumbnailDeviceManager **a3,
        struct IApplicationViewCollection **a4,
        struct IImmersiveSettingsCache **a5,
        struct tagRECT *a6,
        HMONITOR *a7)
{
  VirtualDesktopGestureWindow *v11; // rax
  VirtualDesktopGestureWindow *v12; // rcx
  VirtualDesktopGestureWindow *v13; // rdi

  *(_QWORD *)a1 = 0LL;
  v11 = (VirtualDesktopGestureWindow *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v13 = VirtualDesktopGestureWindow::VirtualDesktopGestureWindow(v11, *a2, *a3, *a4, *a5, a6, *a7);
    if ( *(_QWORD *)a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 16LL))(*(_QWORD *)a1 + 16LL);
    *(_QWORD *)a1 = v13;
    v12 = 0LL;
  }
  if ( v12 )
    operator delete(v12);
  return a1;
}
