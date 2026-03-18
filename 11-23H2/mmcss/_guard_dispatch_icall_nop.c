/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1C0003D40
 * Callers:
 *     CiSchedulerWait @ 0x1C0001680 (CiSchedulerWait.c)
 *     CiProcessNotification @ 0x1C00027C0 (CiProcessNotification.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0003490 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C000350C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C00035F8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1C0003D60 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1C0004EE4 (WPP_SF_D.c)
 *     WPP_SF_ @ 0x1C0004F34 (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x1C0004F64 (WPP_SF_Sd.c)
 *     WPP_SF_Z @ 0x1C0004FF0 (WPP_SF_Z.c)
 *     WPP_SF_Zd @ 0x1C0005074 (WPP_SF_Zd.c)
 *     WPP_SF_Zq @ 0x1C0005108 (WPP_SF_Zq.c)
 *     WPP_SF_d @ 0x1C0005184 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C00051CC (WPP_SF_dd.c)
 *     WPP_SF_q @ 0x1C0005228 (WPP_SF_q.c)
 *     WPP_SF_P @ 0x1C00052B8 (WPP_SF_P.c)
 *     WPP_SF_S @ 0x1C0005308 (WPP_SF_S.c)
 *     WPP_SF_dI @ 0x1C0005388 (WPP_SF_dI.c)
 *     WPP_SF_qqd @ 0x1C00055A8 (WPP_SF_qqd.c)
 *     WPP_SF_L @ 0x1C0005618 (WPP_SF_L.c)
 *     CiDispatchCreate @ 0x1C000B420 (CiDispatchCreate.c)
 *     WppLoadTracingSupport @ 0x1C000CF40 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C000D090 (WppInitKm.c)
 *     WppCleanupKm @ 0x1C000D9C0 (WppCleanupKm.c)
 *     WppTraceCallback @ 0x1C000DA50 (WppTraceCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
