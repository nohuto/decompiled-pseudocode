/*
 * XREFs of ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800D882C
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800D8FF4 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1800D9758 (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

void __fastcall RayStabilizer::PerformLowPassFilterStabilization(
        RayStabilizer *this,
        struct RayStabilizationResult *a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rbx
  int v5; // ecx
  float v6; // xmm6_4
  unsigned __int64 v7; // rax
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 *v10; // r12
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  float v16; // xmm12_4
  __int64 v17; // rcx
  int v18; // ecx
  float v19; // xmm2_4
  unsigned __int64 v20; // rax
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __int64 v23; // rcx
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm3
  unsigned __int64 v30; // [rsp+28h] [rbp-69h] BYREF
  float v31; // [rsp+30h] [rbp-61h]
  float v32; // [rsp+34h] [rbp-5Dh]
  float v33; // [rsp+38h] [rbp-59h]
  float v34; // [rsp+3Ch] [rbp-55h]
  __int128 v35; // [rsp+40h] [rbp-51h]

  v2 = *(unsigned int *)a2;
  RayStabilizationResult::GetAtStep(a2, &v30, v2 - 1);
  v4 = *((_QWORD *)this + 4);
  if ( v4 > 3 )
    v4 = 3LL;
  v5 = v4 + 1;
  if ( (__int64)(v4 + 1) < 0 )
  {
    v7 = v5 & 1 | ((v4 + 1) >> 1);
    v6 = (float)(int)v7 + (float)(int)v7;
  }
  else
  {
    v6 = (float)v5;
  }
  v8 = 0;
  v9 = *((_QWORD *)this + 3);
  v10 = *(__int64 **)this;
  v11 = *(float *)&v30 * v6;
  v12 = *((float *)&v30 + 1) * v6;
  v13 = v31 * v6;
  v14 = v32 * v6;
  v15 = v33 * v6;
  v16 = v34 * v6;
  while ( v9 != *((_QWORD *)this + 3) + *((_QWORD *)this + 4) && v8 < v4 )
  {
    if ( v10 )
      v17 = *v10;
    else
      v17 = 0LL;
    RayStabilizationResult::GetAtStep(
      *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8 * (v9 & (*(_QWORD *)(v17 + 16) - 1LL))),
      &v30,
      v2 - 1);
    v18 = v4 - v8;
    if ( (__int64)(v4 - v8) < 0 )
    {
      v20 = v18 & 1 | ((v4 - v8) >> 1);
      v19 = (float)(int)v20 + (float)(int)v20;
    }
    else
    {
      v19 = (float)v18;
    }
    v6 = v6 + v19;
    ++v9;
    ++v8;
    v11 = (float)(*(float *)&v30 * v19) + v11;
    v12 = (float)(*((float *)&v30 + 1) * v19) + v12;
    v13 = (float)(v31 * v19) + v13;
    v14 = (float)(v32 * v19) + v14;
    v15 = (float)(v33 * v19) + v15;
    v16 = (float)(v34 * v19) + v16;
  }
  v21 = (__m128)LODWORD(FLOAT_1_0);
  v22 = 0LL;
  v21.m128_f32[0] = 1.0 / v6;
  v23 = 3LL * *(unsigned int *)a2;
  v24 = v21;
  v25 = v21;
  v24.m128_f32[0] = (float)(1.0 / v6) * v14;
  v25.m128_f32[0] = (float)(1.0 / v6) * v15;
  v22.m128_u64[0] = _mm_unpacklo_ps(v24, v25).m128_u64[0];
  v31 = (float)(1.0 / v6) * v16;
  v26 = _mm_movelh_ps(v22, (__m128)LODWORD(v31));
  v27 = _mm_mul_ps(v26, v26);
  v28 = _mm_shuffle_ps(v27, v27, 102);
  *(float *)&v35 = (float)(1.0 / v6) * v11;
  *((float *)&v35 + 1) = (float)(1.0 / v6) * v12;
  *((float *)&v35 + 2) = (float)(1.0 / v6) * v13;
  v27.m128_f32[0] = (float)(v27.m128_f32[0] + v28.m128_f32[0]) + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
  v29 = _mm_div_ps(v26, _mm_sqrt_ps(_mm_shuffle_ps(v27, v27, 0)));
  v30 = v29.m128_u64[0];
  HIDWORD(v35) = v29.m128_i32[0];
  *(_OWORD *)((char *)a2 + 8 * v23 + 4) = v35;
  *(_QWORD *)((char *)a2 + 8 * v23 + 20) = _mm_unpacklo_ps((__m128)v29.m128_u32[1], _mm_shuffle_ps(v29, v29, 170)).m128_u64[0];
  ++*(_DWORD *)a2;
}
