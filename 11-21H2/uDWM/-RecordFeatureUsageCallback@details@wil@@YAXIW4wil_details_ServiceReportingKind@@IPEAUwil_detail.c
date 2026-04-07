/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800411C0
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800627E8 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18003EF10 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x180040F88 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180041268 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        struct wil_details_FeatureReportingCache *a4,
        _DWORD *a5)
{
  unsigned int v7; // r8d

  if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1u);
  if ( *a5 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, a1, a4);
  v7 = a5[1];
  if ( v7 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a1, a5[2], v7, 0LL);
  if ( !a5[4] )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
}
