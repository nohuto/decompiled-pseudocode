/*
 * XREFs of sub_1800B6634 @ 0x1800B6634
 * Callers:
 *     sub_1800596B4 @ 0x1800596B4 (sub_1800596B4.c)
 * Callees:
 *     sub_1800B62E8 @ 0x1800B62E8 (sub_1800B62E8.c)
 *     sub_1800B659C @ 0x1800B659C (sub_1800B659C.c)
 */

__int64 __fastcall sub_1800B6634(__int64 a1)
{
  __m128 *v1; // r8
  __m128 v2; // xmm2
  __m128 *v3; // rcx
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm2
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __int64 v12; // rcx

  sub_1800B659C(a1);
  v2 = _mm_mul_ps(v1[3], (__m128)xmmword_1801BD9D0);
  v3->m128_i32[0] = v2.m128_i32[0];
  v3->m128_i32[1] = _mm_shuffle_ps(v2, v2, 85).m128_u32[0];
  v3->m128_i32[2] = _mm_shuffle_ps(v2, v2, 170).m128_u32[0];
  v3->m128_i32[3] = _mm_shuffle_ps(v2, v2, 255).m128_u32[0];
  v4 = _mm_mul_ps(v1[1], (__m128)xmmword_1801BD9D0);
  v3[1].m128_i32[0] = v4.m128_i32[0];
  v3[1].m128_i32[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  v3[1].m128_i32[2] = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  v3[1].m128_i32[3] = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  v5 = _mm_mul_ps(v1[2], (__m128)xmmword_1801BD9D0);
  v3[2].m128_i32[0] = v5.m128_i32[0];
  v3[2].m128_i32[1] = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  v3[2].m128_i32[2] = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  v3[2].m128_i32[3] = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
  v6 = _mm_add_ps(
         _mm_sub_ps(_mm_mul_ps((__m128)xmmword_1801BD960, *v1), _mm_mul_ps(v1[6], (__m128)xmmword_1801BD8A0)),
         _mm_mul_ps(v1[8], (__m128)xmmword_1801BD8E0));
  v3[3].m128_i32[0] = v6.m128_i32[0];
  v3[3].m128_i32[1] = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  v3[3].m128_i32[2] = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  v3[3].m128_i32[3] = _mm_shuffle_ps(v6, v6, 255).m128_u32[0];
  v7 = _mm_sub_ps(
         _mm_sub_ps(_mm_mul_ps((__m128)xmmword_1801BD960, *v1), _mm_mul_ps(v1[6], (__m128)xmmword_1801BD8A0)),
         _mm_mul_ps(v1[8], (__m128)xmmword_1801BD8E0));
  v3[4].m128_i32[0] = v7.m128_i32[0];
  v3[4].m128_i32[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  v3[4].m128_i32[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
  v3[4].m128_i32[3] = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
  v8 = _mm_add_ps(_mm_mul_ps((__m128)xmmword_1801BD8F0, v1[6]), _mm_mul_ps((__m128)xmmword_1801BD960, *v1));
  v3[5].m128_i32[0] = v8.m128_i32[0];
  v3[5].m128_i32[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  v3[5].m128_i32[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  v3[5].m128_i32[3] = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  v9 = _mm_mul_ps(v1[5], (__m128)xmmword_1801BD950);
  v3[6].m128_i32[0] = v9.m128_i32[0];
  v3[6].m128_i32[1] = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  v3[6].m128_i32[2] = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  v3[6].m128_i32[3] = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  v10 = _mm_mul_ps(v1[7], (__m128)xmmword_1801BD950);
  v3[7].m128_i32[0] = v10.m128_i32[0];
  v3[7].m128_i32[1] = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
  v3[7].m128_i32[2] = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  v3[7].m128_i32[3] = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
  v11 = _mm_mul_ps(v1[4], (__m128)xmmword_1801BD950);
  v3[8].m128_i32[0] = v11.m128_i32[0];
  v3[8].m128_i32[2] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v3[8].m128_i32[1] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  v3[8].m128_i32[3] = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  sub_1800B62E8(v3, COERCE_DOUBLE(1050868099LL));
  return v12;
}
