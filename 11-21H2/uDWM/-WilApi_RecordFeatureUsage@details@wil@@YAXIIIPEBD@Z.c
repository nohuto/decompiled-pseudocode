/*
 * XREFs of ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18003EF10
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18003EEA0 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800411C0 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x18006254C (-wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z.c)
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800627E8 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?RecordSRUMFeatureUsage@details@wil@@YAXIII@Z @ 0x180095210 (-RecordSRUMFeatureUsage@details@wil@@YAXIII@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsage(
        wil::details *this,
        unsigned int a2,
        unsigned int a3,
        const char *a4)
{
  if ( g_wil_details_internalRecordFeatureUsage )
  {
    g_wil_details_internalRecordFeatureUsage((unsigned int)this, a2, a3, a4);
  }
  else if ( g_wil_details_apiRecordFeatureUsage )
  {
    g_wil_details_apiRecordFeatureUsage((unsigned int)this, a2, a3, a4);
  }
}
