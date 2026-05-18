/*
 * XREFs of sub_180050214 @ 0x180050214
 * Callers:
 *     sub_1800149DC @ 0x1800149DC (sub_1800149DC.c)
 *     sub_1800501D0 @ 0x1800501D0 (sub_1800501D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_18008E340 @ 0x18008E340 (sub_18008E340.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180050214(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  char *v6[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp-18h]

  v6[2] = 0LL;
  v7 = 15LL;
  LOBYTE(v6[0]) = 0;
  sub_180012190((__int64 *)v6, "Bounds", 6uLL);
  sub_18008E340(a1, v6, a2);
  if ( v7 >= 0x10 )
    sub_180010884(v6[0], v7 + 1);
  *(_QWORD *)a1 = &Spectre::Engine::Bounds::`vftable';
  *(_QWORD *)(a1 + 88) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 100) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 108) = 0;
  v4 = *a2;
  sub_1800436D4(*a2);
  *(_QWORD *)(v4 + 448) |= 8uLL;
  sub_180010910((__int64)a2);
  return a1;
}
