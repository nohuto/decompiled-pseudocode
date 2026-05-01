/*
 * XREFs of ?DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@PEAUIVirtualDesktopSwitcherInvoker@@@Z @ 0x1800FDF70
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UIVirtualDesktopSwitcherInvoker@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktopSwitcherInvoker@@@Z @ 0x1800FDFF0 (--4-$com_ptr_t@UIVirtualDesktopSwitcherInvoker@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x1800FE0AC (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x1800FE170 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDeviceManager@@@Z @ 0x1800FE650 (--4-$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDevi.c)
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
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 32, a3);
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=((char *)this + 40, a4);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((char *)this + 48, a5);
  wil::com_ptr_t<IVirtualDesktopSwitcherInvoker,wil::err_returncode_policy>::operator=((char *)this + 56, a6);
  return 0LL;
}
