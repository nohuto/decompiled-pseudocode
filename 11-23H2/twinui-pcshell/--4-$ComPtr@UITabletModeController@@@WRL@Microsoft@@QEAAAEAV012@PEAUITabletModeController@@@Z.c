/*
 * XREFs of ??4?$ComPtr@UITabletModeController@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeController@@@Z @ 0x18013A294
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180139680 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x180139E00 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 *     ?RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@@Z @ 0x18013A1DC (-RuntimeClassInitialize@HotkeyHandler@@QEAAJPEAUIPriviledgedPositioner@@PEAUISnapAssistControlle.c)
 *     ?RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18055FA20 (-RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInte.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ITabletModeController>::operator=(__int64 *a1, __int64 a2)
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
