/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18001F1E0
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MicaDefaultBackdrop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001C88C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MicaDefaultBackdrop@@@details@wil@@QEAAX_.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F12C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18001453C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18004CB84 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18004CCB8 (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18005F0D8 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8)
{
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  _BYTE v15[24]; // [rsp+48h] [rbp-20h] BYREF

  v11 = wil_details_FeatureReporting_RecordUsageInCache(v15, a1, a5);
  v12 = *(_OWORD *)v11;
  v13 = *(_QWORD *)(v11 + 16);
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( (_DWORD)v12 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, a2, a1);
  if ( DWORD1(v12) )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2);
  if ( !(_DWORD)v13 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( a3 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2);
  if ( (_DWORD)v13 )
    return 0LL;
  if ( g_wil_details_realtimeFeatureUsageHook )
    g_wil_details_realtimeFeatureUsageHook(a2, a5, a8);
  return 1LL;
}
