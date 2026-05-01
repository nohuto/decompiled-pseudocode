/*
 * XREFs of ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18013A84C
 * Callers:
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180139210 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@PEAUIUnknown@@@Z @ 0x1801393B0 (-Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopMan.c)
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1801394CC (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180139680 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x180139E00 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopGestureHandler@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopGestureHandler@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18013C8CC (--$MakeAndInitialize@VVirtualDesktopGestureHandler@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@D.c)
 *     ?RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18055FA20 (-RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInte.c)
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18056068C (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1805657C0 (--$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Deta.c)
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180566090 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUI.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x180571550 (--$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirt.c)
 *     ??0VirtualDesktopHotKeyWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEBUtagRECT@@PEAUHMONITOR__@@@Z @ 0x180618BF0 (--0VirtualDesktopHotKeyWindow@@QEAA@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDevi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=(__int64 *a1, __int64 a2)
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
