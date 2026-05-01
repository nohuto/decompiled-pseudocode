/*
 * XREFs of ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180074D98
 * Callers:
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180026874 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180074CF0 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIImmersiveMonitor@@HHPEAUIApplicationVi.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1803EDA44 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803EE150 (-SetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAUIApplicationViewTitlebarConfigurati.c)
 *     ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804AE2BC (-_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805A63AC (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1805A7BDC (-CreateApplicationViewOperation@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewOperation@@.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805BAFE0 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
  return a1;
}
