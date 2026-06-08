/*
 * XREFs of IsProcGV3Capable @ 0x1C0005E3C
 * Callers:
 *     ValidatePStateCapability @ 0x1C00332C0 (ValidatePStateCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00036D0 (GetCpuIdInfo.c)
 */

bool IsProcGV3Capable()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  GetCpuIdInfo(1u, &v1);
  return (BYTE8(v1) & 0x80) != 0;
}
