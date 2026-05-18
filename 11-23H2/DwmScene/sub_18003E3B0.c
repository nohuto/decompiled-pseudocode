/*
 * XREFs of sub_18003E3B0 @ 0x18003E3B0
 * Callers:
 *     sub_18003BF10 @ 0x18003BF10 (sub_18003BF10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18003E7C4 @ 0x18003E7C4 (sub_18003E7C4.c)
 *     sub_18003EB44 @ 0x18003EB44 (sub_18003EB44.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall sub_18003E3B0(__int64 a1, _OWORD *a2, _OWORD *a3, double a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __int64 v7; // r8
  __m128 v8; // xmm4
  __m128 v11; // xmm5
  __int64 v12; // rdx
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  float v15; // xmm0_4
  __m128 v16; // xmm1
  float v17; // xmm0_4
  __m128 v18; // xmm1
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  __int64 v22; // r11
  __int64 v23; // r10
  __int64 v24; // r9
  __m128 *v25; // rcx
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  float v32; // xmm2_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  __m128 v35; // xmm3
  __m128 v36; // xmm2
  __m128 *v37; // rax
  __m128 v38; // xmm2
  __m128 v39; // xmm1
  __m128 v40; // xmm2
  __m128 v41; // xmm1
  __m128 v42; // xmm2
  __m128 v43; // xmm3
  __m128 v44; // xmm3
  __m128 v45; // xmm2
  __m128 *v46; // rax
  __m128 v47; // xmm2
  __m128 v48; // xmm1
  __m128 v49; // xmm2
  __m128 v50; // xmm1
  __m128 v51; // xmm2
  __int64 v52; // xmm8_8^8
  __m128 *v53; // rcx
  __int64 v54; // r11
  float v55; // xmm0_4
  __int128 v57; // xmm0
  _QWORD v58[3]; // [rsp+20h] [rbp-91h] BYREF
  __m128 v59; // [rsp+38h] [rbp-79h] BYREF
  _OWORD v60[2]; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v61[3]; // [rsp+68h] [rbp-49h]

  *(__m128 *)&v58[1] = v4;
  *a3 = *(_OWORD *)&a4;
  v60[1] = xmmword_180106510;
  v7 = 0LL;
  v8 = _mm_mul_ps(v4, v4);
  v61[0] = &v58[1];
  v59 = v5;
  v11 = _mm_mul_ps(v5, v5);
  v12 = 2LL;
  v61[1] = &v59;
  v60[0] = v6;
  v13 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = v8.m128_f32[0] + v13.m128_f32[0];
  v14 = _mm_mul_ps(v6, v6);
  v61[2] = v60;
  v15 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  v16 = _mm_shuffle_ps(v11, v11, 102);
  v8.m128_f32[0] = v8.m128_f32[0] + v15;
  v17 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v11.m128_f32[0] = v11.m128_f32[0] + v16.m128_f32[0];
  v18 = _mm_shuffle_ps(v14, v14, 102);
  v11.m128_f32[0] = v11.m128_f32[0] + v17;
  v19 = _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)).m128_f32[0];
  v14.m128_f32[0] = (float)(v14.m128_f32[0] + v18.m128_f32[0]) + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
  v20 = _mm_sqrt_ps(_mm_shuffle_ps(v11, v11, 0)).m128_f32[0];
  LODWORD(v21) = _mm_sqrt_ps(_mm_shuffle_ps(v14, v14, 0)).m128_u32[0];
  *(float *)a1 = v19;
  *(float *)(a1 + 4) = v20;
  *(float *)(a1 + 8) = v21;
  *(_DWORD *)(a1 + 12) = 0;
  if ( v20 <= v19 )
  {
    if ( v21 <= v19 )
    {
      v22 = 0LL;
      if ( v21 <= v20 )
      {
        v23 = 2LL;
        goto LABEL_13;
      }
      v24 = 2LL;
    }
    else
    {
      v22 = 2LL;
      v24 = 0LL;
    }
    v23 = 1LL;
    goto LABEL_14;
  }
  if ( v21 > v20 )
  {
    v22 = 2LL;
    v23 = 0LL;
LABEL_13:
    v24 = 1LL;
    goto LABEL_14;
  }
  v22 = 1LL;
  if ( v21 <= v19 )
  {
    v24 = 0LL;
    v23 = 2LL;
  }
  else
  {
    v24 = 2LL;
    v23 = 0LL;
  }
LABEL_14:
  if ( *(float *)(a1 + 4 * v22) < 0.000099999997 )
    *(_OWORD *)v61[v22] = *(_OWORD *)*((_QWORD *)&off_180100678 + v22);
  v25 = (__m128 *)v61[v22];
  v26 = _mm_mul_ps(*v25, *v25);
  v27 = _mm_shuffle_ps(v26, v26, 153);
  v26.m128_f32[0] = (float)(v26.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
  v28 = _mm_shuffle_ps(v26, v26, 0);
  v29 = _mm_sqrt_ps(v28);
  v30 = _mm_cmpneq_ps(v28, (__m128)xmmword_180106340);
  v31 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(*v25, v29), _mm_cmpneq_ps((__m128)0LL, v29)), v30),
          _mm_andnot_ps(v30, (__m128)xmmword_180106390));
  *v25 = v31;
  if ( *(float *)(a1 + 4 * v24) < 0.000099999997 )
  {
    v32 = fabs(_mm_shuffle_ps(v31, v31, 85).m128_f32[0]);
    v33 = fabs(v31.m128_f32[0]);
    v34 = fabs(_mm_shuffle_ps(v31, v31, 170).m128_f32[0]);
    if ( v32 <= v33 )
    {
      if ( v34 <= v33 )
      {
        LOBYTE(v7) = v34 <= v32;
        ++v7;
      }
      else
      {
        v7 = 1LL;
      }
    }
    else if ( v34 <= v32 )
    {
      if ( v34 > v33 )
        v12 = 0LL;
      v7 = v12;
    }
    v35 = _mm_shuffle_ps(v31, v31, 201);
    v36 = _mm_shuffle_ps(*(__m128 *)*((_QWORD *)&off_180100678 + v7), *(__m128 *)*((_QWORD *)&off_180100678 + v7), 210);
    *(__m128 *)v61[v24] = _mm_and_ps(
                            _mm_sub_ps(
                              _mm_mul_ps(v36, v35),
                              _mm_mul_ps(_mm_shuffle_ps(v36, v36, 210), _mm_shuffle_ps(v35, v35, 201))),
                            (__m128)xmmword_180106400);
  }
  v37 = (__m128 *)v61[v24];
  v38 = _mm_mul_ps(*v37, *v37);
  v39 = _mm_shuffle_ps(v38, v38, 153);
  v38.m128_f32[0] = (float)(v38.m128_f32[0] + v39.m128_f32[0]) + _mm_shuffle_ps(v39, v39, 85).m128_f32[0];
  v40 = _mm_shuffle_ps(v38, v38, 0);
  v41 = _mm_sqrt_ps(v40);
  v42 = _mm_cmpneq_ps(v40, (__m128)xmmword_180106340);
  v43 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_div_ps(*v37, v41), _mm_cmpneq_ps((__m128)0LL, v41)), v42),
          _mm_andnot_ps(v42, (__m128)xmmword_180106390));
  *v37 = v43;
  if ( *(float *)(a1 + 4 * v23) < 0.000099999997 )
  {
    v44 = _mm_shuffle_ps(v43, v43, 210);
    v45 = _mm_shuffle_ps(*v25, *v25, 201);
    *(__m128 *)v61[v23] = _mm_and_ps(
                            _mm_sub_ps(
                              _mm_mul_ps(v44, v45),
                              _mm_mul_ps(_mm_shuffle_ps(v44, v44, 210), _mm_shuffle_ps(v45, v45, 201))),
                            (__m128)xmmword_180106400);
  }
  v46 = (__m128 *)v61[v23];
  v47 = _mm_mul_ps(*v46, *v46);
  v48 = _mm_shuffle_ps(v47, v47, 153);
  v47.m128_f32[0] = (float)(v47.m128_f32[0] + v48.m128_f32[0]) + _mm_shuffle_ps(v48, v48, 85).m128_f32[0];
  v49 = _mm_shuffle_ps(v47, v47, 0);
  v50 = _mm_sqrt_ps(v49);
  v51 = _mm_cmpneq_ps(v49, (__m128)xmmword_180106340);
  *v46 = _mm_or_ps(
           _mm_and_ps(_mm_and_ps(_mm_div_ps(*v46, v50), _mm_cmpneq_ps((__m128)0LL, v50)), v51),
           _mm_andnot_ps(v51, (__m128)xmmword_180106390));
  v52 = v58[2];
  v55 = sub_18003E7C4(v25, v12);
  if ( v55 < 0.0 )
  {
    v55 = -v55;
    *(float *)(a1 + 4 * v54) = -*(float *)(a1 + 4 * v54);
    *v53 = _mm_sub_ps((__m128)0LL, *v53);
    v52 = v58[2];
  }
  if ( (float)((float)(v55 + -1.0) * (float)(v55 + -1.0)) > 0.000099999997 )
    return 0;
  *((_QWORD *)&v57 + 1) = v52;
  *(double *)&v57 = sub_18003EB44();
  *a2 = v57;
  return 1;
}
