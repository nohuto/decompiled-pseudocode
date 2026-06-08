/*
 * XREFs of IsNonwrappingACountMCountSupported @ 0x1C0025CCC
 * Callers:
 *     InitDriver @ 0x1C00485AC (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004200 (GetCpuIdInfo.c)
 */

bool IsNonwrappingACountMCountSupported()
{
  int v0; // edx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  GetCpuIdInfo(1u, &v2);
  v0 = BYTE1(v2) & 0xF;
  if ( v0 == 15 )
    return 0;
  if ( v0 == 6 )
    return (unsigned __int128)(v2 & 0xF0 | ((unsigned int)v2 >> 8) & 0xF00) >= 0x2A0;
  return 1;
}
