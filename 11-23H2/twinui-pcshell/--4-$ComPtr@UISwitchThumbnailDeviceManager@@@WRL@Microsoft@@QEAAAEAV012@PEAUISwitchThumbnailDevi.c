/*
 * XREFs of ??4?$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDeviceManager@@@Z @ 0x180139DB0
 * Callers:
 *     ?DelayInitialize@CVirtualDesktopManager@@UEAAXPEAUISwitchThumbnailDeviceManager@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIMultitaskingViewServiceProvider@@@Z @ 0x180139B50 (-DelayInitialize@CVirtualDesktopManager@@UEAAXPEAUISwitchThumbnailDeviceManager@@PEAUIVirtualDes.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180139CB0 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIAppl.c)
 *     ?DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@PEAUIVirtualDesktopSwitcherInvoker@@@Z @ 0x180139D40 (-DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIAppl.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrame@@QEAAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@@Z @ 0x18056EAD4 (-RuntimeClassInitialize@CMultitaskingViewFrame@@QEAAJW4MultitaskingViewControlFlags@@AEBUMultita.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x180608E00 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManag_ea_180608E00.c)
 *     ?SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@PEAUISwitchThumbnailDeviceManager@@PEAUIImmersiveSettingsCache@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4VirtualDesktopSwitchType@@@Z @ 0x180617490 (-SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDi.c)
 *     ??0VirtualDesktopHotKeyWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEBUtagRECT@@PEAUHMONITOR__@@@Z @ 0x180618BF0 (--0VirtualDesktopHotKeyWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDevi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISwitchThumbnailDeviceManager>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  }
  return a1;
}
