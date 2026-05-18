/*
 * XREFs of sub_1800417D8 @ 0x1800417D8
 * Callers:
 *     sub_1800138C0 @ 0x1800138C0 (sub_1800138C0.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_1800A3610 @ 0x1800A3610 (sub_1800A3610.c)
 *     sub_1800A70F0 @ 0x1800A70F0 (sub_1800A70F0.c)
 *     sub_1800A72C0 @ 0x1800A72C0 (sub_1800A72C0.c)
 * Callees:
 *     _o_acosf @ 0x18000BFF4 (_o_acosf.c)
 *     sub_18001C880 @ 0x18001C880 (sub_18001C880.c)
 *     sub_1800406D4 @ 0x1800406D4 (sub_1800406D4.c)
 *     sub_18004089C @ 0x18004089C (sub_18004089C.c)
 *     sub_180040FB8 @ 0x180040FB8 (sub_180040FB8.c)
 *     sub_180042F0C @ 0x180042F0C (sub_180042F0C.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     sub_180043C24 @ 0x180043C24 (sub_180043C24.c)
 */

__int64 __fastcall sub_1800417D8(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm4
  __m128 v8; // xmm0
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  double v13; // xmm0_8
  __m128 v14; // xmm3
  __m128 v15; // xmm6
  __m128 v16; // xmm3
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm0
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  __m128 v29; // xmm2
  __m128 v30; // xmm1
  __m128 v31; // xmm6
  __m128 v32; // xmm3
  __m128 v33; // xmm1
  __m128 v34; // xmm2
  __m128 v35; // xmm3
  __m128 v36; // xmm3
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  __m128 v39; // xmm3
  __m128 v40; // xmm2
  __m128 v41; // xmm3
  __m128 v42; // xmm2
  __m128 v43; // xmm2
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  __int64 v46; // rcx
  __m128 v47; // xmm3
  __m128 v48; // xmm5
  __m128 v49; // xmm2
  __m128 v50; // xmm6
  __m128 v51; // xmm3
  __m128 v52; // xmm4
  __m128 v53; // xmm4
  __m128 v54; // xmm2
  __m128 v55; // xmm1
  __m128 v56; // xmm2
  __m128 v57; // xmm0
  __m128 v58; // xmm2
  __m128 v59; // xmm4
  __m128 v60; // xmm2
  __int128 v61; // xmm0
  unsigned __int64 v63; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int32 v64; // [rsp+30h] [rbp-41h]
  __m128 v65; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int32 v66; // [rsp+50h] [rbp-21h]
  __int128 v67; // [rsp+58h] [rbp-19h] BYREF
  __int128 v68; // [rsp+68h] [rbp-9h]
  __int128 v69; // [rsp+78h] [rbp+7h]
  double v70[6]; // [rsp+88h] [rbp+17h]

  sub_1800436D4(a1);
  sub_180040FB8(a1, (__int64)&v65);
  v6 = 0LL;
  v7 = (__m128)*a2;
  v8 = (__m128)*((unsigned int *)a2 + 2);
  v63 = 0LL;
  v9 = _mm_sub_ps(_mm_movelh_ps(v7, v8), _mm_movelh_ps((__m128)v65.m128_u64[0], (__m128)v65.m128_u32[2]));
  v6.m128_u64[0] = v9.m128_u64[0];
  v64 = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  v10 = _mm_movelh_ps(v6, (__m128)v64);
  v11 = _mm_mul_ps(v10, v10);
  v12 = _mm_shuffle_ps(v11, v11, 102);
  v11.m128_f32[0] = (float)(v11.m128_f32[0] + v12.m128_f32[0]) + _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v11, v11, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v61 = xmmword_180128A10;
    goto LABEL_6;
  }
  v13 = *(double *)v9.m128_u64;
  v14 = 0LL;
  v66 = v64;
  *(double *)v14.m128_u64 = v13;
  v15 = 0LL;
  v16 = _mm_movelh_ps(v14, (__m128)v64);
  v17 = _mm_mul_ps(v16, v16);
  v18 = _mm_shuffle_ps(v17, v17, 153);
  v17.m128_f32[0] = (float)(v17.m128_f32[0] + v18.m128_f32[0]) + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
  v19 = _mm_shuffle_ps(v17, v17, 0);
  v20 = _mm_sqrt_ps(v19);
  v21 = _mm_cmpneq_ps(v19, (__m128)xmmword_1801282E0);
  v22 = _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v20), _mm_div_ps(v16, v20)), v21);
  v23 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
  v24 = _mm_or_ps(v22, _mm_andnot_ps(v21, (__m128)xmmword_180128330));
  v25 = _mm_mul_ps(v23, v23);
  v15.m128_u64[0] = v24.m128_u64[0];
  v66 = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
  v26 = _mm_shuffle_ps(v25, v25, 153);
  v25.m128_f32[0] = (float)(v25.m128_f32[0] + v26.m128_f32[0]) + _mm_shuffle_ps(v26, v26, 85).m128_f32[0];
  v27 = _mm_shuffle_ps(v25, v25, 0);
  v28 = _mm_sqrt_ps(v27);
  v29 = _mm_cmpneq_ps(v27, (__m128)xmmword_1801282E0);
  v30 = _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v28), _mm_div_ps(v23, v28)), v29);
  v31 = _mm_movelh_ps(v15, (__m128)v66);
  v32 = 0LL;
  v33 = _mm_or_ps(v30, _mm_andnot_ps(v29, (__m128)xmmword_180128330));
  v63 = v33.m128_u64[0];
  v32.m128_u64[0] = v33.m128_u64[0];
  v64 = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
  v34 = _mm_shuffle_ps(v31, v31, 201);
  v35 = _mm_movelh_ps(v32, (__m128)v64);
  v36 = _mm_shuffle_ps(v35, v35, 210);
  v37 = _mm_shuffle_ps(v34, v34, 201);
  v38 = _mm_shuffle_ps(v36, v36, 210);
  v39 = _mm_mul_ps(v36, v34);
  v40 = 0LL;
  v41 = _mm_and_ps(_mm_sub_ps(v39, _mm_mul_ps(v38, v37)), (__m128)xmmword_1801283A0);
  v66 = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
  v40.m128_u64[0] = v41.m128_u64[0];
  v42 = _mm_movelh_ps(v40, (__m128)v66);
  v43 = _mm_mul_ps(v42, v42);
  v44 = _mm_shuffle_ps(v43, v43, 102);
  v43.m128_f32[0] = (float)(v43.m128_f32[0] + v44.m128_f32[0]) + _mm_shuffle_ps(v44, v44, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v43, v43, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v47 = _mm_shuffle_ps(v31, v31, 210);
    v65.m128_i32[2] = -1082130432;
    v48 = _mm_movelh_ps((__m128)0LL, (__m128)0xBF800000);
    v49 = _mm_shuffle_ps(v48, v48, 201);
    v50 = _mm_mul_ps(v31, v48);
    v51 = _mm_and_ps(
            _mm_sub_ps(_mm_mul_ps(v47, v49), _mm_mul_ps(_mm_shuffle_ps(v47, v47, 210), _mm_shuffle_ps(v49, v49, 201))),
            (__m128)xmmword_1801283A0);
    v52 = 0LL;
    v52.m128_u64[0] = v51.m128_u64[0];
    v53 = _mm_movelh_ps(v52, (__m128)_mm_shuffle_ps(v51, v51, 170).m128_u32[0]);
    v54 = _mm_mul_ps(v53, v53);
    v55 = _mm_shuffle_ps(v54, v54, 153);
    v54.m128_f32[0] = (float)(v54.m128_f32[0] + v55.m128_f32[0]) + _mm_shuffle_ps(v55, v55, 85).m128_f32[0];
    v56 = _mm_shuffle_ps(v54, v54, 0);
    v57 = _mm_sqrt_ps(v56);
    v58 = _mm_cmpneq_ps(v56, (__m128)xmmword_1801282E0);
    v59 = _mm_or_ps(
            _mm_and_ps(_mm_and_ps(_mm_div_ps(v53, v57), _mm_cmpneq_ps(v57, (__m128)0LL)), v58),
            _mm_andnot_ps(v58, (__m128)xmmword_180128330));
    v60 = _mm_shuffle_ps(v50, v50, 153);
    v63 = v59.m128_u64[0];
    v64 = _mm_shuffle_ps(v59, v59, 170).m128_u32[0];
    v57.m128_f32[0] = fmaxf((float)(v50.m128_f32[0] + v60.m128_f32[0]) + _mm_shuffle_ps(v60, v60, 85).m128_f32[0], -1.0);
    fminf(v57.m128_f32[0], 1.0);
    o_acosf();
    sub_1800406D4((__int64)&v65, &v63);
    v61 = (__int128)v65;
LABEL_6:
    v65 = (__m128)v61;
    return sub_180042F0C(a1, &v65);
  }
  sub_18004089C((__int64)&v67, (unsigned __int64 *)&v65, a2, &v63);
  v45 = sub_18001C880(&v65, *(double *)&v68, *(double *)&v69, v70[0]);
  *(double *)v45.m128_u64 = sub_180043C24(v46);
  v65 = v45;
  return sub_180042F0C(a1, &v65);
}
