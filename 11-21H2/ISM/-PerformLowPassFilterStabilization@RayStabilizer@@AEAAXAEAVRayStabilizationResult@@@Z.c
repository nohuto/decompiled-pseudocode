/*
 * XREFs of ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800B04E8
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800B0CA8 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1800B136C (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

void __fastcall RayStabilizer::PerformLowPassFilterStabilization(
        RayStabilizer *this,
        struct RayStabilizationResult *a2)
{
  __int64 v2; // r15
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx
  int v6; // ecx
  float v7; // xmm6_4
  unsigned __int64 v8; // rax
  unsigned int v9; // r12d
  _QWORD *v10; // rcx
  __int64 v11; // r13
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm10_4
  __m128 v15; // xmm11
  __m128 v16; // xmm12
  float i; // xmm7_4
  int v18; // esi
  bool v19; // al
  int v20; // ecx
  float v21; // xmm2_4
  unsigned __int64 v22; // rax
  __m128 v23; // xmm1
  __m128 v24; // xmm0
  __m128 v25; // xmm3
  __int64 v26; // rcx
  __m128 v27; // xmm3
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  __m128 v30; // xmm3
  unsigned __int64 v31; // [rsp+28h] [rbp-79h] BYREF
  float v32; // [rsp+30h] [rbp-71h]
  float v33; // [rsp+34h] [rbp-6Dh]
  float v34; // [rsp+38h] [rbp-69h]
  float v35; // [rsp+3Ch] [rbp-65h]
  __int128 v36; // [rsp+40h] [rbp-61h]
  _QWORD *v37; // [rsp+108h] [rbp+67h]

  v2 = *(unsigned int *)a2;
  v4 = 0;
  RayStabilizationResult::GetAtStep(a2, &v31, v2 - 1);
  v5 = *((_QWORD *)this + 4);
  if ( v5 > 3 )
    v5 = 3LL;
  v6 = v5 + 1;
  if ( (__int64)(v5 + 1) < 0 )
  {
    v8 = v6 & 1 | ((v5 + 1) >> 1);
    v7 = (float)(int)v8 + (float)(int)v8;
  }
  else
  {
    v7 = (float)v6;
  }
  v9 = 0;
  v15 = (__m128)LODWORD(v33);
  v16 = (__m128)LODWORD(v34);
  v10 = *(_QWORD **)this;
  v11 = *((_QWORD *)this + 3);
  v12 = *(float *)&v31 * v7;
  v37 = *(_QWORD **)this;
  v13 = *((float *)&v31 + 1) * v7;
  v14 = v32 * v7;
  v15.m128_f32[0] = v33 * v7;
  v16.m128_f32[0] = v34 * v7;
  for ( i = v35 * v7; ; i = (float)(v35 * v21) + i )
  {
    v18 = v4 | 1;
    v19 = v11 != *((_QWORD *)this + 3) + *((_QWORD *)this + 4) && v9 < v5;
    v4 = v18 & 0xFFFFFFFE;
    if ( !v19 )
      break;
    if ( v10 )
      v10 = (_QWORD *)*v10;
    RayStabilizationResult::GetAtStep(*(_QWORD *)(v10[1] + 8 * (v11 & (v10[2] - 1LL))), &v31, v2 - 1);
    v20 = v5 - v9;
    if ( (__int64)(v5 - v9) < 0 )
    {
      v22 = v20 & 1 | ((v5 - v9) >> 1);
      v21 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v21 = (float)v20;
    }
    v7 = v7 + v21;
    ++v11;
    v10 = v37;
    ++v9;
    v12 = (float)(*(float *)&v31 * v21) + v12;
    v13 = (float)(*((float *)&v31 + 1) * v21) + v13;
    v23 = (__m128)LODWORD(v33);
    v23.m128_f32[0] = (float)(v33 * v21) + v15.m128_f32[0];
    v14 = (float)(v32 * v21) + v14;
    v24 = (__m128)LODWORD(v34);
    v15 = v23;
    v24.m128_f32[0] = (float)(v34 * v21) + v16.m128_f32[0];
    v16 = v24;
  }
  v25 = 0LL;
  v26 = 3LL * *(unsigned int *)a2;
  v15.m128_f32[0] = v15.m128_f32[0] * (float)(1.0 / v7);
  v16.m128_f32[0] = v16.m128_f32[0] * (float)(1.0 / v7);
  v32 = i * (float)(1.0 / v7);
  v25.m128_u64[0] = _mm_unpacklo_ps(v15, v16).m128_u64[0];
  v27 = _mm_movelh_ps(v25, (__m128)LODWORD(v32));
  *(float *)&v36 = v12 * (float)(1.0 / v7);
  v28 = _mm_mul_ps(v27, v27);
  *((float *)&v36 + 1) = v13 * (float)(1.0 / v7);
  *((float *)&v36 + 2) = v14 * (float)(1.0 / v7);
  v29 = _mm_shuffle_ps(v28, v28, 102);
  v28.m128_f32[0] = (float)(v28.m128_f32[0] + v29.m128_f32[0]) + _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
  v30 = _mm_div_ps(v27, _mm_sqrt_ps(_mm_shuffle_ps(v28, v28, 0)));
  v31 = v30.m128_u64[0];
  HIDWORD(v36) = v30.m128_i32[0];
  *(_OWORD *)((char *)a2 + 8 * v26 + 4) = v36;
  *(_QWORD *)((char *)a2 + 8 * v26 + 20) = _mm_unpacklo_ps((__m128)v30.m128_u32[1], _mm_shuffle_ps(v30, v30, 170)).m128_u64[0];
  ++*(_DWORD *)a2;
}
