/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1807387DC
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x180738758 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x180390A3C (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1803A5000 (wil_details_FeatureReporting_RecordUsageInCache.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 v5; // rax
  unsigned int v6; // edi
  _BYTE v8[24]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+48h] [rbp-30h] BYREF
  __int64 v10; // [rsp+58h] [rbp-20h]

  v3 = a2;
  v4 = a3;
  v5 = wil_details_FeatureReporting_RecordUsageInCache(
         (__int64)v8,
         (volatile signed __int32 *)&Feature_AslPiiFilter_EmailAddresses__private_reporting,
         a3,
         SHIDWORD(a2));
  v6 = 0;
  v9 = *(_OWORD *)v5;
  v10 = *(_QWORD *)(v5 + 16);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(55991892LL, v4, 1LL, &Feature_AslPiiFilter_EmailAddresses__private_reporting, &v9);
  if ( (v3 & 0x400) != 0 && v4 != 254 )
    wil_RtlStagingConfig_RecordFeatureUsage(55991892, v4, (v3 >> 11) & 1);
  LOBYTE(v6) = (_DWORD)v10 == 0;
  return v6;
}
