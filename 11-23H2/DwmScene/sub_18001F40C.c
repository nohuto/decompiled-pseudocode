/*
 * XREFs of sub_18001F40C @ 0x18001F40C
 * Callers:
 *     sub_18001F3E0 @ 0x18001F3E0 (sub_18001F3E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001FA00 @ 0x18001FA00 (sub_18001FA00.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F40C(__int64 a1, const WCHAR *a2, __int64 a3)
{
  int v3; // edi
  int v6; // eax
  int cbMultiByte; // r14d
  CHAR *lpMultiByteStr; // rdx
  __m128i v9; // xmm1
  LPSTR v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v6 = WideCharToMultiByte(0xFDE9u, 0, a2, a3, 0LL, 0, 0LL, 0LL);
    cbMultiByte = v6;
    v11[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7B0);
    if ( v6 <= 0 )
      __fastfail(7u);
    sub_18001FA00(v11, v6);
    lpMultiByteStr = (CHAR *)v11;
    if ( si128.m128i_i64[1] >= 0x10uLL )
      lpMultiByteStr = v11[0];
    WideCharToMultiByte(0xFDE9u, 0, a2, v3, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    v9 = _mm_loadu_si128(&si128);
    *(_OWORD *)a1 = *(_OWORD *)v11;
    *(__m128i *)(a1 + 16) = v9;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7B0);
    LOBYTE(v11[0]) = 0;
    sub_180011B24((__int64)v11);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
  }
  return a1;
}
