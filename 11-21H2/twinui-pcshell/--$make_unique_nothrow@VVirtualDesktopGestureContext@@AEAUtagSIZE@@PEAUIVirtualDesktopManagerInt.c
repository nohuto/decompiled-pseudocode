/*
 * XREFs of ??$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@wil@@YA?AV?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@AEAUtagSIZE@@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18054E980
 * Callers:
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x1805538B4 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopGestureContext@@QEAA@UtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x18054EF18 (--0VirtualDesktopGestureContext@@QEAA@UtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchT.c)
 */

VirtualDesktopGestureContext **__fastcall wil::make_unique_nothrow<VirtualDesktopGestureContext,tagSIZE &,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,IImmersiveMonitorManager *>(
        VirtualDesktopGestureContext **a1,
        struct tagSIZE *a2,
        struct IVirtualDesktopManagerInternal **a3,
        struct ISwitchThumbnailDeviceManager **a4,
        struct IApplicationViewCollection **a5,
        struct IImmersiveSettingsCache **a6,
        struct IImmersiveMonitorManager **a7)
{
  VirtualDesktopGestureContext *v11; // rdi
  VirtualDesktopGestureContext *v12; // rax

  v11 = (VirtualDesktopGestureContext *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = 0LL;
  if ( v11 )
    v12 = VirtualDesktopGestureContext::VirtualDesktopGestureContext(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
