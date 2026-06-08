/*
 * XREFs of IsMonitorMWaitSupported @ 0x1C0025EBC
 * Callers:
 *     InitMonitorMWaitSupport @ 0x1C0025E00 (InitMonitorMWaitSupport.c)
 *     InitDriver @ 0x1C00485AC (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004200 (GetCpuIdInfo.c)
 */

bool IsMonitorMWaitSupported()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v1 = 0LL;
  GetCpuIdInfo(1u, &v1);
  if ( (BYTE8(v1) & 8) == 0 )
    return 0;
  GetCpuIdInfo(0, &v2);
  return (unsigned int)v2 >= 5;
}
