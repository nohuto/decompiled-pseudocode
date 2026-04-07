/*
 * XREFs of ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18001453C
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800144CC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18001F1E0 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     wil_details_RecordCachedUsage @ 0x18005EA50 (wil_details_RecordCachedUsage.c)
 *     ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x18009CC90 (-RecordSRUMFeatureUsage@details@wil@@YAXIII@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsage(wil::details *this)
{
  if ( g_wil_details_internalRecordFeatureUsage )
  {
    g_wil_details_internalRecordFeatureUsage(this);
  }
  else if ( g_wil_details_apiRecordFeatureUsage )
  {
    g_wil_details_apiRecordFeatureUsage(this);
  }
}
