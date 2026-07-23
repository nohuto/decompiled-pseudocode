/*
 * XREFs of sub_140A6AE00 @ 0x140A6AE00
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A6BE04 @ 0x140A6BE04 (sub_140A6BE04.c)
 * Callees:
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 */

void sub_140A6AE00()
{
  _BYTE v0[4]; // [rsp+30h] [rbp-30h] BYREF
  int v1; // [rsp+34h] [rbp-2Ch] BYREF
  int v2; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v3[4]; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  v3[0] = -502711874;
  v3[1] = 1102983892;
  v3[2] = 2139705505;
  v3[3] = 697881733;
  if ( !byte_140C1F589 )
  {
    v0[0] = -1;
    v1 = 1;
    if ( (int)HalGetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", (int)v3, (__int64)v0, &v1, (__int64)&v2) >= 0
      && v1 == 1 )
    {
      v0[0] &= 0xEEu;
      HalSetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", (int)v3, (__int64)v0, 1, v2);
    }
  }
}
