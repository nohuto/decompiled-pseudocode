/*
 * XREFs of sub_18004089C @ 0x18004089C
 * Callers:
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004089C(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  __m128 v4; // xmm7
  __m128 v5; // xmm3
  __m128 v6; // xmm3
  __m128 v7; // xmm9
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm9
  __m128 v14; // xmm6
  __m128 v15; // xmm6
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm6
  __m128 v22; // xmm2
  __m128 v23; // xmm4
  __m128 v24; // xmm1
  __m128 v25; // xmm4
  __int64 result; // rax
  __m128 v27; // xmm1
  __m128 v28; // xmm3
  __m128 v29; // xmm2
  __m128 v30; // xmm4
  __m128 v31; // xmm8
  __m128 v32; // xmm1
  __m128 v33; // xmm4
  __m128 v34; // xmm3
  __m128 v35; // xmm1
  float v36; // xmm0_4
  __m128 v37; // xmm1
  __m128 v38; // xmm5
  __m128 v39; // xmm2
  __m128 v40; // xmm4
  __m128 v41; // xmm0
  __m128 v42; // xmm4
  __m128 v43; // xmm3
  __m128 v44; // xmm5

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 1065353216LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v4 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v5 = _mm_movelh_ps((__m128)*a4, (__m128)*((unsigned int *)a4 + 2));
  v6 = _mm_shuffle_ps(v5, v5, 201);
  v7 = _mm_sub_ps(v4, _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 153);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_shuffle_ps(v8, v8, 0);
  v11 = _mm_sqrt_ps(v10);
  v12 = _mm_cmpneq_ps(v10, (__m128)xmmword_1801282E0);
  v13 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(v7, v11), _mm_cmpneq_ps((__m128)0LL, v11)), v12),
          _mm_andnot_ps(v12, (__m128)xmmword_180128330));
  v14 = _mm_shuffle_ps(v13, v13, 210);
  v15 = _mm_and_ps(
          _mm_sub_ps(_mm_mul_ps(v14, v6), _mm_mul_ps(_mm_shuffle_ps(v14, v14, 210), _mm_shuffle_ps(v6, v6, 201))),
          (__m128)xmmword_1801283A0);
  v16 = _mm_mul_ps(v15, v15);
  v17 = _mm_shuffle_ps(v16, v16, 153);
  v16.m128_f32[0] = (float)(v16.m128_f32[0] + v17.m128_f32[0]) + _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
  v18 = _mm_shuffle_ps(v16, v16, 0);
  v19 = _mm_sqrt_ps(v18);
  v20 = _mm_cmpneq_ps(v18, (__m128)xmmword_1801282E0);
  v21 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(v15, v19), _mm_cmpneq_ps((__m128)0LL, v19)), v20),
          _mm_andnot_ps(v20, (__m128)xmmword_180128330));
  v22 = _mm_shuffle_ps(v13, v13, 201);
  v23 = _mm_shuffle_ps(v21, v21, 210);
  v24 = _mm_shuffle_ps(v23, v23, 210);
  v25 = _mm_mul_ps(v23, v22);
  result = a1;
  v27 = _mm_mul_ps(v24, _mm_shuffle_ps(v22, v22, 201));
  v28 = _mm_sub_ps((__m128)0LL, v4);
  v29 = _mm_mul_ps(v28, v21);
  v30 = _mm_sub_ps(v25, v27);
  v31 = _mm_mul_ps(v28, v13);
  v32 = _mm_shuffle_ps(v29, v29, 153);
  v33 = _mm_and_ps(v30, (__m128)xmmword_1801283A0);
  v34 = _mm_mul_ps(v28, v33);
  v29.m128_f32[0] = (float)(v29.m128_f32[0] + v32.m128_f32[0]) + _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
  v35 = _mm_shuffle_ps(v34, v34, 153);
  v34.m128_f32[0] = v34.m128_f32[0] + v35.m128_f32[0];
  v36 = _mm_shuffle_ps(v35, v35, 85).m128_f32[0];
  v37 = _mm_shuffle_ps(v31, v31, 153);
  v34.m128_f32[0] = v34.m128_f32[0] + v36;
  v31.m128_f32[0] = (float)(v31.m128_f32[0] + v37.m128_f32[0]) + _mm_shuffle_ps(v37, v37, 85).m128_f32[0];
  v38 = _mm_or_ps(
          _mm_andnot_ps((__m128)xmmword_1801283A0, _mm_shuffle_ps(v29, v29, 0)),
          _mm_and_ps((__m128)xmmword_1801283A0, v21));
  v39 = _mm_or_ps(
          _mm_andnot_ps((__m128)xmmword_1801283A0, _mm_shuffle_ps(v34, v34, 0)),
          _mm_and_ps((__m128)xmmword_1801283A0, v33));
  v40 = _mm_or_ps(
          _mm_andnot_ps((__m128)xmmword_1801283A0, _mm_shuffle_ps(v31, v31, 0)),
          _mm_and_ps((__m128)xmmword_1801283A0, v13));
  v41 = _mm_shuffle_ps(v40, (__m128)xmmword_1801284B0, 68);
  v42 = _mm_shuffle_ps(v40, (__m128)xmmword_1801284B0, 238);
  v43 = _mm_shuffle_ps(v38, v39, 68);
  v44 = _mm_shuffle_ps(v38, v39, 238);
  *(__m128 *)a1 = _mm_shuffle_ps(v43, v41, 136);
  *(__m128 *)(a1 + 16) = _mm_shuffle_ps(v43, v41, 221);
  *(__m128 *)(a1 + 32) = _mm_shuffle_ps(v44, v42, 136);
  *(__m128 *)(a1 + 48) = _mm_shuffle_ps(v44, v42, 221);
  return result;
}
