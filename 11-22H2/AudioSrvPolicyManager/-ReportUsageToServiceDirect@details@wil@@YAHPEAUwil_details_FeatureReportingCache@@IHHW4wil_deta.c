/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x180037500
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003741C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@QE.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180036B58 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18003A8D8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18003B938 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8)
{
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  unsigned int v16; // edx
  char *v18; // [rsp+20h] [rbp-48h]
  char v19[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h]
  _BYTE v21[32]; // [rsp+48h] [rbp-20h] BYREF

  v11 = wil_details_FeatureReporting_RecordUsageInCache(v21, a1, a5);
  v12 = *(_QWORD *)(v11 + 16);
  *(_OWORD *)v19 = *(_OWORD *)v11;
  v20 = v12;
  wil::details::RecordFeatureUsageCallback(v13, a5, v14, a1, v19);
  v15 = 0;
  if ( a3 )
  {
    v16 = a5 | 0x80000000;
    if ( !a4 )
      v16 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x27ACC8A, v16, 0, 0, v18);
  }
  if ( g_wil_details_realtimeFeatureUsageHook )
    g_wil_details_realtimeFeatureUsageHook(0x27ACC8Au, a5, a8);
  LOBYTE(v15) = (_DWORD)v20 == 0;
  return v15;
}
