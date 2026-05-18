/*
 * XREFs of sub_1800DEAA0 @ 0x1800DEAA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800DD10C @ 0x1800DD10C (sub_1800DD10C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800DEAA0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+40h] [rbp-28h]

  *(_QWORD *)&v7 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7A0);
  if ( (unsigned int)sub_1800DD10C(a1, a3, &v7) )
  {
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[3] = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)a4;
    *((_OWORD *)a2 + 1) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_WORD *)a4 = 0;
  }
  else
  {
    *(_OWORD *)a2 = v7;
    *((__m128i *)a2 + 1) = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18019B7A0);
    LOWORD(v7) = 0;
  }
  sub_180013348((__int64)&v7);
  sub_180013348(a4);
  return a2;
}
