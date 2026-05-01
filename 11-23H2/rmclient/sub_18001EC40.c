/*
 * XREFs of sub_18001EC40 @ 0x18001EC40
 * Callers:
 *     HamQueryPackageUsageInfo @ 0x180007090 (HamQueryPackageUsageInfo.c)
 *     HamQueryApplicationUsageInfo @ 0x18001E060 (HamQueryApplicationUsageInfo.c)
 * Callees:
 *     sub_180007470 @ 0x180007470 (sub_180007470.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18001EC40(HKEY a1, const WCHAR *a2, __m128i *a3)
{
  LSTATUS v4; // eax
  signed int v5; // ebx
  LSTATUS v6; // eax
  LSTATUS v7; // eax
  wchar_t **v8; // rdi
  unsigned int v9; // esi
  LSTATUS v10; // eax
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
        v8 = &off_1800320E0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1800289A0);
        v9 = 0;
        v17 = si128;
        while ( 1 )
        {
          v10 = sub_180007470(v13, *v8, &si128.m128i_u8[*((unsigned int *)v8 + 3)], (DWORD *)v8 + 4);
          v5 = v10;
          if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073283070 )
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
