/*
 * XREFs of IsRaplSupported @ 0x1C00200E0
 * Callers:
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001FF10 (InitEnergyCountersOnCurrentProcessor.c)
 *     InitDriver @ 0x1C0020BC0 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000C4C0 (GetCpuIdInfo.c)
 */

bool IsRaplSupported()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  GetCpuIdInfo(0x80000000, &v1);
  if ( (unsigned int)v1 < 7 )
    return 0;
  GetCpuIdInfo(0x80000007, &v2);
  return (WORD6(v2) & 0x4000) != 0;
}
