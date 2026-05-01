/*
 * XREFs of ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x18013A3B0
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x1801395EC (-RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180139680 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180139CB0 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIAppl.c)
 *     ?DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@PEAUIVirtualDesktopSwitcherInvoker@@@Z @ 0x180139D40 (-DelayInitialize@VirtualDesktopGestureHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIAppl.c)
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x180139E00 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 *     ?Initialize@SnapServiceProvider@@UEAAJAEBUSnapServiceProviderInitParams@@@Z @ 0x18013A190 (-Initialize@SnapServiceProvider@@UEAAJAEBUSnapServiceProviderInitParams@@@Z.c)
 *     ?RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@@Z @ 0x18013A1DC (-RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistControlle.c)
 *     ?SetMonitorManager@CAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x18013A340 (-SetMonitorManager@CAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z.c)
 *     ?SetMonitorManager@CPPIAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x18013A360 (-SetMonitorManager@CPPIAllUpViewService@@UEAAXPEAUIImmersiveMonitorManager@@@Z.c)
 *     ?SetMonitorManager@MultitaskingViewGestureHandler@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x18013A380 (-SetMonitorManager@MultitaskingViewGestureHandler@@UEAAXPEAUIImmersiveMonitorManager@@@Z.c)
 *     ?SetMonitorManager@TabletModeViewManagerProxy@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x18013A3A0 (-SetMonitorManager@TabletModeViewManagerProxy@@UEAAXPEAUIImmersiveMonitorManager@@@Z.c)
 *     ?SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@@Z @ 0x180567F10 (-SetMonitorFilter@SwitchItemFilteredCollection@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiv.c)
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x180608E00 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManag_ea_180608E00.c)
 *     ?SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@PEAUISwitchThumbnailDeviceManager@@PEAUIImmersiveSettingsCache@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4VirtualDesktopSwitchType@@@Z @ 0x180617490 (-SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDi.c)
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18066758C (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplic_ea_18066758C.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076D520 (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=(__int64 *a1, __int64 a2)
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
