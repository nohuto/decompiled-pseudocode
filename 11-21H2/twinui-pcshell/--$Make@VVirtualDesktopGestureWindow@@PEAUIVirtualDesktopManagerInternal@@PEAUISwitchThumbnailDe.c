/*
 * XREFs of ??$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopGestureWindow@@@12@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x18054E708
 * Callers:
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z @ 0x180552180 (-Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEE10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0VirtualDesktopGestureWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEBUtagRECT@@PEAUHMONITOR__@@@Z @ 0x18054EFEC (--0VirtualDesktopGestureWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDev.c)
 */

// Hidden C++ exception states: #wind=3
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
  v11 = (VirtualDesktopGestureWindow *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v13 = VirtualDesktopGestureWindow::VirtualDesktopGestureWindow(v11, *a2, *a3, *a4, *a5, a6, *a7);
    if ( *(_QWORD *)a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)(*(_QWORD *)a1 + 16LL));
    *(_QWORD *)a1 = v13;
    v12 = 0LL;
  }
  if ( v12 )
    operator delete(v12);
  return a1;
}
