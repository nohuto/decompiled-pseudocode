/*
 * XREFs of ?ComputeDropOffTarget@RayStabilizer@@AEAA?AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z @ 0x1800C8984
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C8E08 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     _o_fmodf_0 @ 0x1800565E0 (_o_fmodf_0.c)
 *     _o_sqrtf_0 @ 0x180056634 (_o_sqrtf_0.c)
 *     ?DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1800C8DBC (-DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 */

__m128 *__fastcall RayStabilizer::ComputeDropOffTarget(__m128 *a1, __m128 *a2, __int64 a3, float *a4)
{
  __m128 v7; // xmm1
  __m128 v8; // xmm10
  float v9; // xmm11_4
  float v10; // xmm9_4
  float v11; // xmm13_4
  __m128 v12; // xmm6
  float v13; // xmm2_4
  float v14; // xmm8_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm3
  float v21; // xmm8_4
  float v22; // eax
  __m128 v23; // xmm6
  __m128 v24; // xmm3
  __m128 v25; // xmm5
  __m128 v26; // xmm1
  float v27; // xmm4_4
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm2
  __m128 v31; // xmm1
  __m128 v32; // xmm3
  unsigned int v33; // xmm4_4
  __m128 v34; // xmm3
  __m128 v35; // xmm3
  __m128 v36; // xmm2
  __m128 v37; // xmm1
  __m128 v38; // xmm3
  float v39; // xmm8_4
  float v40; // xmm9_4
  float v41; // xmm0_4
  float v42; // xmm8_4
  float v43; // xmm8_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm8_4
  unsigned __int64 v48; // [rsp+28h] [rbp-59h] BYREF
  float v49; // [rsp+30h] [rbp-51h]
  unsigned __int64 v50; // [rsp+38h] [rbp-49h] BYREF
  int v51; // [rsp+40h] [rbp-41h]
  __m256i v52; // [rsp+48h] [rbp-39h]

  if ( a1[5].m128_i8[0] )
  {
    v8 = a1[3];
    v9 = *(float *)(a3 + 4);
    v10 = *(float *)a3;
    v11 = *(float *)(a3 + 8);
    v12 = a1[4];
    v13 = *(float *)a3 - v8.m128_f32[0];
    v14 = fmaxf(0.0, 0.0 - (float)(a4[3] * 0.2));
    v15 = v9 - _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
    v16 = v11 - _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
    *(float *)&v48 = v13;
    v49 = v16;
    *((float *)&v48 + 1) = v15;
    *(__m128 *)v52.m256i_i8 = v8;
    *(__m128 *)&v52.m256i_u64[2] = v12;
    if ( v14 == 0.0
      || (float)(o_sqrtf_0((float)((float)(v15 * v15) + (float)(v13 * v13)) + (float)(v16 * v16)) / v14) > 1.0 )
    {
      v17 = _mm_movelh_ps((__m128)v48, (__m128)LODWORD(v49));
      v18 = _mm_mul_ps(v17, v17);
      v19 = _mm_shuffle_ps(v18, v18, 102);
      v18.m128_f32[0] = (float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
      v20 = _mm_div_ps(v17, _mm_sqrt_ps(_mm_shuffle_ps(v18, v18, 0)));
      v48 = v20.m128_u64[0];
      *(float *)v52.m256i_i32 = v10 - (float)(v20.m128_f32[0] * v14);
      *(float *)&v52.m256i_i32[1] = v9 - (float)(v20.m128_f32[1] * v14);
      *(float *)&v52.m256i_i32[2] = v11 - (float)(_mm_shuffle_ps(v20, v20, 170).m128_f32[0] * v14);
      v8 = *(__m128 *)v52.m256i_i8;
    }
    v21 = fmaxf(0.0, 0.050000001 - (float)(a4[7] * 0.30000001));
    if ( v21 == 0.0
      || (v22 = *(float *)(a3 + 20),
          v48 = *(_QWORD *)(a3 + 12),
          v50 = *(unsigned __int64 *)((char *)&v52.m256i_u64[1] + 4),
          v49 = v22,
          v51 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 4)),
          (float)(RayStabilizer::DeltaAngle(&v50, &v48) / v21) > 1.0) )
    {
      v23 = (__m128)*(unsigned int *)(a3 + 12);
      v24 = 0LL;
      v25 = (__m128)*(unsigned int *)(a3 + 16);
      v26 = v23;
      v26.m128_f32[0] = v23.m128_f32[0] - *(float *)&v52.m256i_i32[3];
      v27 = *(float *)(a3 + 20);
      v28 = v25;
      v28.m128_f32[0] = v25.m128_f32[0] - *(float *)&v52.m256i_i32[4];
      v24.m128_u64[0] = _mm_unpacklo_ps(v26, v28).m128_u64[0];
      v29 = _mm_movelh_ps(v24, (__m128)COERCE_UNSIGNED_INT(v27 - *(float *)&v52.m256i_i32[5]));
      v30 = _mm_mul_ps(v29, v29);
      v31 = _mm_shuffle_ps(v30, v30, 102);
      v30.m128_f32[0] = (float)(v30.m128_f32[0] + v31.m128_f32[0]) + _mm_shuffle_ps(v31, v31, 85).m128_f32[0];
      v32 = _mm_div_ps(v29, _mm_sqrt_ps(_mm_shuffle_ps(v30, v30, 0)));
      v23.m128_f32[0] = v23.m128_f32[0] - (float)(v32.m128_f32[0] * v21);
      v31.m128_f32[0] = v32.m128_f32[1] * v21;
      *(float *)&v33 = v27 - (float)(_mm_shuffle_ps(v32, v32, 170).m128_f32[0] * v21);
      v34 = 0LL;
      v25.m128_f32[0] = v25.m128_f32[0] - v31.m128_f32[0];
      v51 = v33;
      v34.m128_u64[0] = _mm_unpacklo_ps(v23, v25).m128_u64[0];
      v35 = _mm_movelh_ps(v34, (__m128)v33);
      v36 = _mm_mul_ps(v35, v35);
      v37 = _mm_shuffle_ps(v36, v36, 102);
      v36.m128_f32[0] = (float)(v36.m128_f32[0] + v37.m128_f32[0]) + _mm_shuffle_ps(v37, v37, 85).m128_f32[0];
      v38 = _mm_div_ps(v35, _mm_sqrt_ps(_mm_shuffle_ps(v36, v36, 0)));
      v50 = v38.m128_u64[0];
      *(__int64 *)((char *)&v52.m256i_i64[1] + 4) = v38.m128_u64[0];
      v8 = *(__m128 *)v52.m256i_i8;
      v52.m256i_i32[5] = _mm_shuffle_ps(v38, v38, 170).m128_u32[0];
      v12 = *(__m128 *)&v52.m256i_u64[2];
    }
    v39 = *(float *)(a3 + 24);
    v40 = fmaxf(0.0, 0.80000001 - (float)(a4[11] * 0.2));
    if ( v40 == 0.0 || (o_fmodf_0(), v41 = (float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] - v39) / v40, v41 > 1.0) )
    {
      v42 = v39 + v40;
    }
    else
    {
      if ( v41 >= -1.0 )
      {
LABEL_15:
        v43 = *(float *)(a3 + 28);
        v44 = fmaxf(0.0, 0.80000001 - (float)(a4[15] * 0.2));
        if ( v44 == 0.0
          || (o_fmodf_0(), v45 = (float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] - v43) / v44, v45 > 1.0) )
        {
          v46 = v43 + v44;
        }
        else
        {
          if ( v45 >= -1.0 )
          {
LABEL_21:
            *a2 = v8;
            a2[1] = v12;
            return a2;
          }
          v46 = v43 - v44;
        }
        *(float *)&v52.m256i_i32[7] = v46;
        v12 = *(__m128 *)&v52.m256i_u64[2];
        goto LABEL_21;
      }
      v42 = v39 - v40;
    }
    *(float *)&v52.m256i_i32[6] = v42;
    v12 = *(__m128 *)&v52.m256i_u64[2];
    goto LABEL_15;
  }
  v7 = *(__m128 *)(a3 + 16);
  *a2 = *(__m128 *)a3;
  a2[1] = v7;
  return a2;
}
