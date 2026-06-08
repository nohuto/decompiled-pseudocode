/*
 * XREFs of IsHwpSupported @ 0x1C0002824
 * Callers:
 *     InitDriver @ 0x1C00485AC (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004200 (GetCpuIdInfo.c)
 */

bool IsHwpSupported()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  GetCpuIdInfo(0LL, &v2);
  if ( (unsigned int)v2 >= 6 )
  {
    GetCpuIdInfo(6LL, &v3);
    return (v3 & 0x80u) != 0LL;
  }
  return v0;
}
