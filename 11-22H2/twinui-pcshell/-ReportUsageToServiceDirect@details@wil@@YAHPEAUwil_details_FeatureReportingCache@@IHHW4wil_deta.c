/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800D1F90
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BamoWMOnDesktop@@@details@wil@@QEAA_NXZ @ 0x1800D2C6C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BamoWMOnDesktop@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D37B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails@@@detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D3D44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HEIW4wil_VariantReportingKind@@_K@Z @ 0x1803DB44C (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATU.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800D1440 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x1800D226C (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1802CEAF6 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1803A5000 (wil_details_FeatureReporting_RecordUsageInCache.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int8 a8)
{
  __int64 v12; // rax
  unsigned int v13; // edx
  const char *v15; // [rsp+20h] [rbp-48h]
  unsigned int v16[4]; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+40h] [rbp-28h]
  _BYTE v18[24]; // [rsp+48h] [rbp-20h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache(v18, a1, a5, a6);
  v17 = *(_QWORD *)(v12 + 16);
  *(_OWORD *)v16 = *(_OWORD *)v12;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( v16[0] )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(&wil::details::g_enabledStateManager, a2, a1);
  if ( v16[1] )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v16[2], v16[1], 0, v15);
  if ( !(_DWORD)v17 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( a3 )
  {
    v13 = a5 | 0x80000000;
    if ( !a4 )
      v13 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v13, 0, 0, v15);
  }
  if ( (_DWORD)v17 )
    return 0LL;
  if ( g_wil_details_realtimeFeatureUsageHook )
    g_wil_details_realtimeFeatureUsageHook(a2, a5, a8);
  return 1LL;
}
