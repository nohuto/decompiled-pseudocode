/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180079654
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800795AC (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18002A720 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180078D60 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18007A710 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // ebx
  unsigned int v17; // edx
  char *v19; // [rsp+20h] [rbp-48h]
  char v20[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h]
  __int64 v22; // [rsp+48h] [rbp-20h] BYREF

  v12 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v22, a1, a5, 0);
  v13 = *(_QWORD *)(v12 + 16);
  *(_OWORD *)v20 = *(_OWORD *)v12;
  v21 = v13;
  wil::details::RecordFeatureUsageCallback(a2, a5, v14, a1, v20);
  v16 = 0;
  if ( a3 )
  {
    v17 = a5 | 0x80000000;
    if ( !a4 )
      v17 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v17, 0, 0, v19);
  }
  if ( !(_DWORD)v21 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v15) = a8;
      g_wil_details_realtimeFeatureUsageHook(a2, a5, v15);
    }
    return 1;
  }
  return v16;
}
