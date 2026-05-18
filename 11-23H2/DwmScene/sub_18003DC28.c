/*
 * XREFs of sub_18003DC28 @ 0x18003DC28
 * Callers:
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012624 @ 0x180012624 (sub_180012624.c)
 *     sub_18003B628 @ 0x18003B628 (sub_18003B628.c)
 *     sub_18003C4C0 @ 0x18003C4C0 (sub_18003C4C0.c)
 *     sub_18003D8E8 @ 0x18003D8E8 (sub_18003D8E8.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_18003DC28(_DWORD *a1, __m128 *a2)
{
  char v4; // bl
  __int64 *v5; // rax
  __m128 *v6; // rax
  __m128 v7; // xmm6
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h]
  __m128 v17; // [rsp+40h] [rbp-30h] BYREF
  __m128 v18; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  sub_18003E370();
  if ( *sub_180012624((__int64)a1, &v17) )
  {
    v5 = sub_180012624((__int64)a1, &v15);
    v4 = 1;
    v6 = sub_18003C4C0(*v5, &v18);
  }
  else
  {
    v14 = xmmword_180106A28;
    v6 = (__m128 *)&v14;
  }
  v7 = (__m128)_mm_loadu_si128((const __m128i *)v6);
  if ( (v4 & 1) != 0 && v16 )
    sub_180010530(v16);
  if ( v17.m128_u64[1] )
    sub_180010530(v17.m128_i64[1]);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_add_ps(_mm_shuffle_ps(v7, v8, 64), v8);
  v10 = _mm_add_ps(_mm_shuffle_ps(v8, v9, 48), v9);
  v11 = _mm_shuffle_ps(v10, v10, 170);
  v12 = _mm_cmple_ps(v11, (__m128)xmmword_180106440);
  v17 = _mm_or_ps(
          _mm_andnot_ps(v12, _mm_div_ps(_mm_mul_ps(v7, (__m128)xmmword_180108520), v11)),
          _mm_and_ps(v12, (__m128)xmmword_180106550));
  v17 = *sub_18003B628(&v18, a2, &v17);
  return sub_18003D8E8(a1, &v17);
}
