/*
 * XREFs of sub_180019728 @ 0x180019728
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_180066028 @ 0x180066028 (sub_180066028.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180019728(__int64 a1, float a2, float a3, float a4, float a5)
{
  __m128 v6; // xmm2
  __int64 result; // rax
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  __m128i v12; // xmm4
  __int128 v13; // xmm4
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // [rsp+0h] [rbp-18h]

  v6 = (__m128)0x3F800000u;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  v6.m128_f32[0] = 1.0 / (float)(a4 - a5);
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  result = a1;
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v9 = v6;
  v9.m128_f32[0] = v6.m128_f32[0] * a4;
  v10 = (__m128)0x40000000u;
  v11 = (__m128)0x40000000u;
  v11.m128_f32[0] = 2.0 / a3;
  v10.m128_f32[0] = 2.0 / a2;
  v12 = (__m128i)_mm_movelh_ps(_mm_unpacklo_ps(v10, v11), _mm_unpacklo_ps(v6, v9));
  v16.m128_u64[0] = v12.m128i_i64[0];
  v16.m128_u64[1] = _mm_srli_si128(v12, 8).m128i_u64[0];
  v13 = 0LL;
  *(float *)&v13 = v16.m128_f32[0];
  v14 = _mm_shuffle_ps(v16, (__m128)xmmword_1801284B0, 238);
  *(_OWORD *)a1 = v13;
  v15 = _mm_shuffle_ps((__m128)0LL, v14, 128);
  *(__m128 *)(a1 + 16) = _mm_and_ps((__m128)xmmword_180128490, v16);
  *(__m128 *)(a1 + 32) = v15;
  *(__m128 *)(a1 + 48) = _mm_shuffle_ps(v15, v14, 208);
  return result;
}
