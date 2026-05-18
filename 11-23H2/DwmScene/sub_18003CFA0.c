/*
 * XREFs of sub_18003CFA0 @ 0x18003CFA0
 * Callers:
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_180051D20 @ 0x180051D20 (sub_180051D20.c)
 *     sub_180093580 @ 0x180093580 (sub_180093580.c)
 *     sub_180096C00 @ 0x180096C00 (sub_180096C00.c)
 *     sub_1800A47E4 @ 0x1800A47E4 (sub_1800A47E4.c)
 *     sub_1800E20F0 @ 0x1800E20F0 (sub_1800E20F0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003CFA0(unsigned __int64 *a1)
{
  __m128 v1; // xmm4
  __m128 v2; // xmm3
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm4

  v1 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  v2 = _mm_mul_ps(v1, v1);
  v3 = _mm_shuffle_ps(v2, v2, 153);
  v2.m128_f32[0] = (float)(v2.m128_f32[0] + v3.m128_f32[0]) + _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  v4 = _mm_shuffle_ps(v2, v2, 0);
  v5 = _mm_sqrt_ps(v4);
  v6 = _mm_cmpneq_ps((__m128)xmmword_180106340, v4);
  v7 = _mm_or_ps(
         _mm_and_ps(_mm_and_ps(_mm_div_ps(v1, v5), _mm_cmpneq_ps(v5, (__m128)0LL)), v6),
         _mm_andnot_ps(v6, (__m128)xmmword_180106390));
  *a1 = v7.m128_u64[0];
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
}
