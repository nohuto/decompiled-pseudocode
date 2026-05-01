/*
 * XREFs of ?DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@PEAUIVirtualDesktopSwitcherInvoker@@@Z @ 0x180139D40
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDeviceManager@@@Z @ 0x180139DB0 (--4-$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDevi.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x18013A2E4 (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x18013A3B0 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$com_ptr_t@UIVirtualDesktopSwitcherInvoker@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktopSwitcherInvoker@@@Z @ 0x18013AF70 (--4-$com_ptr_t@UIVirtualDesktopSwitcherInvoker@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 */

__int64 __fastcall VirtualDesktopGestureHandler::DelayInitialize(
        VirtualDesktopGestureHandler *this,
        struct ISwitchThumbnailDeviceManager *a2,
        struct IApplicationViewCollection *a3,
        struct IImmersiveSettingsCache *a4,
        struct IImmersiveMonitorManager *a5,
        struct IVirtualDesktopSwitcherInvoker *a6)
{
  Microsoft::WRL::ComPtr<ISwitchThumbnailDeviceManager>::operator=((char *)this + 24, a2);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 32);
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=((char *)this + 40, a4);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((char *)this + 48, a5);
  wil::com_ptr_t<IVirtualDesktopSwitcherInvoker,wil::err_returncode_policy>::operator=((char *)this + 56, a6);
  return 0LL;
}
