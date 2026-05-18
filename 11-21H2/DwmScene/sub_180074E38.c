/*
 * XREFs of sub_180074E38 @ 0x180074E38
 * Callers:
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     sub_180093158 @ 0x180093158 (sub_180093158.c)
 */

__int64 __fastcall sub_180074E38(__int64 a1, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5, _QWORD *a6)
{
  __m128 v6; // xmm4
  __int64 v7; // rcx
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm2

  v6 = *a2;
  v7 = *a6;
  v8 = _mm_mul_ps(*a2, *a3);
  v9 = _mm_mul_ps(*a4, *a2);
  a3->m128_i32[0] = v8.m128_i32[0];
  a3->m128_i32[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  a3->m128_i32[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  a3->m128_i32[3] = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  v10 = _mm_mul_ps(*a5, v6);
  a4->m128_i32[1] = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  a4->m128_i32[2] = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  a4->m128_i32[0] = v9.m128_i32[0];
  a5->m128_i32[0] = v10.m128_i32[0];
  a5->m128_i32[3] = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
  a4->m128_i32[3] = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  a5->m128_i32[1] = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
  a5->m128_i32[2] = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  sub_180093158(v7);
  sub_180093158(*a6);
  return sub_180093158(*a6);
}
