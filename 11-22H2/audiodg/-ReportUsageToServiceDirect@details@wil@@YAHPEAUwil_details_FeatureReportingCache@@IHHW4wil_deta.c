/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x14002AB64
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x14002AA80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@detail.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x14002A9A8 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x14002AF48 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x140059E40 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned int v17; // ebx
  unsigned int v18; // edx
  char *v20; // [rsp+20h] [rbp-48h]
  char v21[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h]
  _BYTE v23[32]; // [rsp+48h] [rbp-20h] BYREF

  v11 = wil_details_FeatureReporting_RecordUsageInCache(v23, a1, a5);
  v12 = *(_QWORD *)(v11 + 16);
  *(_OWORD *)v21 = *(_OWORD *)v11;
  v22 = v12;
  wil::details::RecordFeatureUsageCallback(v13, a5, v14, a1, v21);
  v17 = 0;
  if ( a3 )
  {
    v18 = a5 | 0x80000000;
    if ( !a4 )
      v18 = a5;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x32A4DC6, v18, 0, v16, v20);
  }
  if ( !(_DWORD)v22 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v15) = a8;
      g_wil_details_realtimeFeatureUsageHook(53104070LL, a5, v15);
    }
    return 1;
  }
  return v17;
}
