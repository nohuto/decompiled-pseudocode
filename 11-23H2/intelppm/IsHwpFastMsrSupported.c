/*
 * XREFs of IsHwpFastMsrSupported @ 0x1C002E450
 * Callers:
 *     GetHwpPerfControlHandler @ 0x1C002E1D0 (GetHwpPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     Feature_HwpAllowFastMsrOptimizations__private_ReportDeviceUsage @ 0x1C0003928 (Feature_HwpAllowFastMsrOptimizations__private_ReportDeviceUsage.c)
 *     GetCpuIdInfo @ 0x1C0004200 (GetCpuIdInfo.c)
 */

char IsHwpFastMsrSupported()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  GetCpuIdInfo(0, &v2);
  if ( (unsigned int)v2 >= 6 )
  {
    GetCpuIdInfo(6u, &v3);
    if ( (v3 & 0x40080) == 0x40080 )
    {
      Feature_HwpAllowFastMsrOptimizations__private_ReportDeviceUsage();
      return 1;
    }
  }
  return v0;
}
