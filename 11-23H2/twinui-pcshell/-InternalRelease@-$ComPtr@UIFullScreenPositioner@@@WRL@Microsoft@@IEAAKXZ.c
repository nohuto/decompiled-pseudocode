/*
 * XREFs of ?InternalRelease@?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7F64
 * Callers:
 *     ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F6730 (-SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x1801AA2A0 (--1TabletModePositioner@@UEAA@XZ.c)
 *     ?UnsubscribeFromServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801ABFF0 (-UnsubscribeFromServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801AC0E0 (-SubscribeToServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x1801AEEC4 (--1CPerMonitorDesktopVisibilityService@@UEAA@XZ.c)
 *     ??1CFullScreenManager@@UEAA@XZ @ 0x1801B1A44 (--1CFullScreenManager@@UEAA@XZ.c)
 *     ?SubscribeToServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B5630 (-SubscribeToServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BD5A0 (-UnsubscribeFromServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_c306e9f60182553b56e58ad695426938_::operator() @ 0x1801F1854 (_lambda_c306e9f60182553b56e58ad695426938_--operator().c)
 *     ??1?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x1803EF1E8 (--1-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x1803F04A0 (-SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z.c)
 *     ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x1803F0720 (-SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAY.c)
 *     _lambda_7bcbf056061a51ef99db996275205d7a_::operator() @ 0x18043DF08 (_lambda_7bcbf056061a51ef99db996275205d7a_--operator().c)
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1805C497C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease(__int64 *a1)
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
