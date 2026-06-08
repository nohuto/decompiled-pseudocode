/*
 * XREFs of IsHwpIdleOptimizationSupported @ 0x1C002D200
 * Callers:
 *     GetHwpPerfControlHandler @ 0x1C002CF80 (GetHwpPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00036D0 (GetCpuIdInfo.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00067B4 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

char IsHwpIdleOptimizationSupported()
{
  char v0; // bl
  int v2; // [rsp+30h] [rbp-48h]
  __int128 v3; // [rsp+40h] [rbp-38h] BYREF
  __int128 v4; // [rsp+50h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = 0;
  v4 = 0LL;
  GetCpuIdInfo(0, &v3);
  if ( (unsigned int)v3 >= 6 )
  {
    GetCpuIdInfo(6u, &v4);
    if ( (v4 & 0x100080) == 0x100080 )
    {
      v0 = 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_HwpAllowQosIdleOptimizations__private_reporting,
        0xF4D9ADu,
        0LL,
        0LL,
        (__int64)&Feature_HwpAllowFastMsrOptimizations_logged_traits,
        1u,
        v2);
    }
  }
  return v0;
}
