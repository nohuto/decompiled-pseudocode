/*
 * XREFs of sub_18001F2B4 @ 0x18001F2B4
 * Callers:
 *     sub_18001F288 @ 0x18001F288 (sub_18001F288.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001FA7C @ 0x18001FA7C (sub_18001FA7C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F2B4(__int64 a1, const CHAR *a2, __int64 a3)
{
  int v3; // edi
  int v6; // eax
  int cchWideChar; // r14d
  WCHAR *lpWideCharStr; // rax
  __m128i v9; // xmm1
  LPWSTR v11[2]; // [rsp+40h] [rbp-30h] BYREF
  __m128i si128; // [rsp+50h] [rbp-20h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v6 = MultiByteToWideChar(0xFDE9u, 0, a2, a3, 0LL, 0);
    cchWideChar = v6;
    v11[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7A0);
    if ( v6 <= 0 )
      __fastfail(7u);
    sub_18001FA7C(v11, v6);
    lpWideCharStr = (WCHAR *)v11;
    if ( si128.m128i_i64[1] >= 8uLL )
      lpWideCharStr = v11[0];
    MultiByteToWideChar(0xFDE9u, 0, a2, v3, lpWideCharStr, cchWideChar);
    v9 = _mm_loadu_si128(&si128);
    *(_OWORD *)a1 = *(_OWORD *)v11;
    *(__m128i *)(a1 + 16) = v9;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7A0);
    LOWORD(v11[0]) = 0;
    sub_180013348((__int64)v11);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
