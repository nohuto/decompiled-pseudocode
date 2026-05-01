/*
 * XREFs of ?InternalRelease@?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180173F8C
 * Callers:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1800C6334 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?SubscribeToServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D51E0 (-SubscribeToServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D52C0 (-SubscribeToServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D5CD0 (-SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x180172D2C (--1TabletModePositioner@@UEAA@XZ.c)
 *     ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x180175280 (--1CPerMonitorDesktopVisibilityService@@UEAA@XZ.c)
 *     ??1CFullScreenManager@@UEAA@XZ @ 0x180177224 (--1CFullScreenManager@@UEAA@XZ.c)
 *     ?UnsubscribeFromServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18017BB00 (-UnsubscribeFromServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x180180110 (-UnsubscribeFromServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x180321BC4 (--1-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x180322D90 (-SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z.c)
 *     ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180323070 (-SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAY.c)
 *     _lambda_7bcbf056061a51ef99db996275205d7a_::operator() @ 0x180367F84 (_lambda_7bcbf056061a51ef99db996275205d7a_--operator().c)
 *     _lambda_62276dcc8956575ffb6d344da47e5bef_::operator() @ 0x180393560 (_lambda_62276dcc8956575ffb6d344da47e5bef_--operator().c)
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x18050C44C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
