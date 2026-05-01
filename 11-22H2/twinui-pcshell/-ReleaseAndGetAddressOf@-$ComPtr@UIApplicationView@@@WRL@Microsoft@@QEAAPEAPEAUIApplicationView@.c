/*
 * XREFs of ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x18006B5F8
 * Callers:
 *     ?ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIApplicationView@@@Z @ 0x180041BF0 (-ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800770B4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(__int64 a1)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(a1);
  return a1;
}
