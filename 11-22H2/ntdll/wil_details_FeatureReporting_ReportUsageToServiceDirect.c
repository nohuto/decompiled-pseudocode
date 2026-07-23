/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800D7C4C
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D7BB4 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlNotifyFeatureUsage @ 0x1800AECC0 (RtlNotifyFeatureUsage.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1800D7A54 (wil_details_FeatureReporting_RecordUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        ULONG a2,
        int a3,
        int a4,
        unsigned int a5)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  v9 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v13, a1, a5);
  v10 = 0;
  v14 = *(_OWORD *)v9;
  v15 = *(_QWORD *)(v9 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, a5, 1LL, a1, &v14);
  if ( a3 && a5 != 254 )
  {
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = a2;
    FeatureUsageReport.ReportingKind = a5;
    if ( a4 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v10) = (_DWORD)v15 == 0;
  return v10;
}
