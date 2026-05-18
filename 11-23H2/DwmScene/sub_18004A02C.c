/*
 * XREFs of sub_18004A02C @ 0x18004A02C
 * Callers:
 *     sub_1800141DC @ 0x1800141DC (sub_1800141DC.c)
 *     sub_180049F90 @ 0x180049F90 (sub_180049F90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18003D3C8 @ 0x18003D3C8 (sub_18003D3C8.c)
 *     sub_1800810C0 @ 0x1800810C0 (sub_1800810C0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004A02C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+40h] [rbp-38h] BYREF

  sub_180010DD0(v6, (__int64)"Bounds");
  sub_1800810C0(a1, v6, a2);
  sub_180011B24((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Bounds::`vftable';
  *(_QWORD *)(a1 + 88) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 100) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a1 + 108) = 0;
  sub_18003D3C8(*a2, 3, 1);
  v4 = a2[1];
  if ( v4 )
    sub_180010530(v4);
  return a1;
}
