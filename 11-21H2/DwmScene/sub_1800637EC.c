/*
 * XREFs of sub_1800637EC @ 0x1800637EC
 * Callers:
 *     sub_180066028 @ 0x180066028 (sub_180066028.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800637EC(__int64 a1, float a2, float a3, float a4, float a5)
{
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  __m128 v12; // xmm3
  __m128 v13; // xmm4
  __int64 result; // rax
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128i v17; // xmm4
  __int128 v18; // xmm4
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  __m128 v21; // [rsp+0h] [rbp-48h]

  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v7 = (float)(a2 * 0.5) * 0.15915494;
  if ( (float)(a2 * 0.5) < 0.0 )
    v8 = v7 - 0.5;
  else
    v8 = v7 + 0.5;
  v9 = (float)(a2 * 0.5) - (float)((float)(int)v8 * 6.2831855);
  if ( v9 <= 1.5707964 )
  {
    if ( v9 >= -1.5707964 )
    {
      v11 = 1.0;
      goto LABEL_10;
    }
    v10 = -3.1415927;
  }
  else
  {
    v10 = 3.1415927;
  }
  v11 = -1.0;
  v9 = v10 - v9;
LABEL_10:
  v12 = (__m128)LODWORD(a5);
  v13 = (__m128)0x37CFB4C2u;
  result = a1;
  v12.m128_f32[0] = a5 / (float)(a4 - a5);
  v15 = v12;
  v15.m128_f32[0] = v12.m128_f32[0] * a4;
  v13.m128_f32[0] = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(0.000024760495
                                                                                                  - (float)((float)(v9 * v9) * 0.00000026051615))
                                                                                          * (float)(v9 * v9))
                                                                                  - 0.0013888378)
                                                                          * (float)(v9 * v9))
                                                                  + 0.041666638)
                                                          * (float)(v9 * v9))
                                                  - 0.5)
                                          * (float)(v9 * v9))
                                  + 1.0)
                          * v11)
                  / (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(0.0000027525562
                                                                                                  - (float)((float)(v9 * v9) * 0.000000023889859))
                                                                                          * (float)(v9 * v9))
                                                                                  - 0.00019840874)
                                                                          * (float)(v9 * v9))
                                                                  + 0.008333331)
                                                          * (float)(v9 * v9))
                                                  - 0.16666667)
                                          * (float)(v9 * v9))
                                  + 1.0)
                          * v9);
  v16 = v13;
  v16.m128_f32[0] = v13.m128_f32[0] / a3;
  v17 = (__m128i)_mm_movelh_ps(_mm_unpacklo_ps(v16, v13), _mm_unpacklo_ps(v12, v15));
  v21.m128_u64[0] = v17.m128i_i64[0];
  v21.m128_u64[1] = _mm_srli_si128(v17, 8).m128i_u64[0];
  v18 = 0LL;
  *(float *)&v18 = v21.m128_f32[0];
  v19 = _mm_shuffle_ps(v21, (__m128)xmmword_180128510, 238);
  *(_OWORD *)a1 = v18;
  v20 = _mm_shuffle_ps((__m128)0LL, v19, 192);
  *(__m128 *)(a1 + 16) = _mm_and_ps((__m128)xmmword_180128490, v21);
  *(__m128 *)(a1 + 32) = v20;
  *(__m128 *)(a1 + 48) = _mm_shuffle_ps(v20, v19, 144);
  return result;
}
