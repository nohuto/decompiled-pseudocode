/*
 * XREFs of IsNonwrappingACountMCountSupported @ 0x1C002B938
 * Callers:
 *     InitDriver @ 0x1C0047234 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00036D0 (GetCpuIdInfo.c)
 */

bool IsNonwrappingACountMCountSupported()
{
  int v0; // r8d
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  GetCpuIdInfo(1u, &v2);
  v0 = BYTE1(v2) & 0xF;
  return v0 != 15 && (v0 != 6 || (unsigned __int128)(v2 & 0xF0 | ((unsigned int)v2 >> 8) & 0xF00) >= 0x2A0);
}
