/*
 * XREFs of HampUsageInfoRegistryQuery @ 0x18001E0C0
 * Callers:
 *     HamQueryPackageUsageInfo @ 0x180007900 (HamQueryPackageUsageInfo.c)
 *     HamQueryApplicationUsageInfo @ 0x18001D5D0 (HamQueryApplicationUsageInfo.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x180007CE0 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

__int64 __fastcall HampUsageInfoRegistryQuery(HKEY a1, const WCHAR *a2, __m128i *a3)
{
  LSTATUS v4; // eax
  signed int v5; // ebx
  LSTATUS v6; // eax
  LSTATUS v7; // eax
  struct _HAM_LAST_USAGE_REG_INFO near **v8; // rdi
  unsigned int v9; // esi
  LSTATUS Value; // eax
  __m128i v11; // xmm1
  HKEY v13; // [rsp+30h] [rbp-40h] BYREF
  HKEY phkResult; // [rsp+38h] [rbp-38h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-30h] BYREF
  __m128i si128; // [rsp+48h] [rbp-28h] BYREF
  __m128i v17; // [rsp+58h] [rbp-18h]

  hKey = 0LL;
  phkResult = 0LL;
  v13 = 0LL;
  v4 = RegOpenKeyExW(a1, a2, 0, 1u, &hKey);
  v5 = v4;
  if ( v4 > 0 )
    v5 = (unsigned __int16)v4 | 0xC0070000;
  if ( v5 >= 0 )
  {
    v6 = RegOpenKeyExW(hKey, L"V1", 0, 1u, &phkResult);
    v5 = v6;
    if ( v6 > 0 )
      v5 = (unsigned __int16)v6 | 0xC0070000;
    if ( v5 >= 0 )
    {
      v7 = RegOpenKeyExW(phkResult, L"LU", 0, 0x20019u, &v13);
      v5 = v7;
      if ( v7 > 0 )
        v5 = (unsigned __int16)v7 | 0xC0070000;
      if ( v5 >= 0 )
      {
        v8 = &LastUsageRegInfo;
        si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        v9 = 0;
        v17 = si128;
        while ( 1 )
        {
          Value = HampSystemQueryValue(
                    v13,
                    (const unsigned __int16 *)*v8,
                    &si128.m128i_u8[*((unsigned int *)v8 + 3)],
                    (unsigned int *)v8 + 4);
          v5 = Value;
          if ( ((Value + 0x80000000) & 0x80000000) == 0 && Value != -1073283070 )
            break;
          ++v9;
          v8 += 3;
          if ( v9 >= 4 )
          {
            v5 = 0;
            v11 = v17;
            *a3 = si128;
            a3[1] = v11;
            break;
          }
        }
      }
    }
  }
  if ( v13 )
    RegCloseKey(v13);
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}
