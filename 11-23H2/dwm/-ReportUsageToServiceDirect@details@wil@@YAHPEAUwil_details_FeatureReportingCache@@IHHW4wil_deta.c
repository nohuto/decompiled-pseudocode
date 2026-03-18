/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x140007DE4
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140007D00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAAX_NW4Report.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x140002DAC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x140005070 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x140008268 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140008630 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v15; // ebx
  char v17[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  _BYTE v19[32]; // [rsp+48h] [rbp-20h] BYREF

  v10 = wil_details_FeatureReporting_RecordUsageInCache(v19, a1, a5);
  v11 = *(_QWORD *)(v10 + 16);
  *(_OWORD *)v17 = *(_OWORD *)v10;
  v18 = v11;
  wil::details::RecordFeatureUsageCallback(v12, a5, v13, a1, v17);
  v15 = 0;
  if ( a3 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x36E633E);
  if ( !(_DWORD)v18 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v14) = a8;
      g_wil_details_realtimeFeatureUsageHook(57566014LL, a5, v14);
    }
    return 1;
  }
  return v15;
}
