/*
 * XREFs of ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z @ 0x180500128
 * Callers:
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x180501508 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@_lambda_b9b70e6c986f29daea1bfe6e23588cc6_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@Z @ 0x18053D8B8 (--$-RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@@_lambda_b9b70e6c986f29daea1bfe6e23588cc6_@@QE.c)
 *     ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_55150664767eca596a859a77bb97c172_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAI2@Z @ 0x18053D994 (--$-RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_55150664767eca596a859a77bb97c.c)
 *     ??$?RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAPEAU1@@_lambda_9399efa3dcb6c98f5ff250874809262d_@@QEBA?AV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@AEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@1@Z @ 0x18053DAC4 (--$-RAEAPEAUIObjectArray@@AEAPEAUIVirtualDesktop@@AEAPEAU1@@_lambda_9399efa3dcb6c98f5ff250874809.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x18054D708 (-RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDeskto.c)
 *     ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x1805939D0 (-GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IObjectArray>::operator=(__int64 *a1, __int64 a2)
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
