/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800D7B90
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D7B00 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlNotifyFeatureUsage @ 0x1800B11D0 (RtlNotifyFeatureUsage.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1800D79B4 (wil_details_FeatureReporting_RecordUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v7; // rax
  unsigned int v8; // ebx
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  v7 = wil_details_FeatureReporting_RecordUsageInCache((__int64)&v11, a2, a5);
  v8 = 0;
  v12 = *(_OWORD *)v7;
  v13 = *((_QWORD *)v7 + 2);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(
      29933563LL,
      a5,
      1LL,
      &Feature_TreatDosDevicePathsAsNormalFiles__private_reporting,
      &v12);
  if ( a3 && a5 != 254 )
  {
    FeatureUsageReport.ReportingOptions = 0;
    FeatureUsageReport.FeatureId = 29933563;
    FeatureUsageReport.ReportingKind = a5;
    if ( a4 )
      FeatureUsageReport.ReportingOptions |= 1u;
    RtlNotifyFeatureUsage(&FeatureUsageReport);
  }
  LOBYTE(v8) = (_DWORD)v13 == 0;
  return v8;
}
