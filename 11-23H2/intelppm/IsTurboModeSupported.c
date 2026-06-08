/*
 * XREFs of IsTurboModeSupported @ 0x1C00036F4
 * Callers:
 *     SetGV3PerfState @ 0x1C0004D30 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C0004DF0 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C0007C50 (SetTurboDisablePolicy.c)
 *     InitDriver @ 0x1C00485AC (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004200 (GetCpuIdInfo.c)
 */

bool IsTurboModeSupported()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  GetCpuIdInfo(0LL, &v1);
  if ( (unsigned int)v1 < 6 )
    return 0;
  GetCpuIdInfo(6LL, &v2);
  return (v2 & 2) != 0;
}
