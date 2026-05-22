/*
 * XREFs of ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800B0148
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800B0CA8 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     acosf @ 0x18004A834 (acosf.c)
 *     powf @ 0x18004A8A0 (powf.c)
 *     _o_sqrtf_0 @ 0x18004A8C4 (_o_sqrtf_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?Slerp@MPCMath@@YA?AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z @ 0x1800B0B58 (-Slerp@MPCMath@@YA-AUfloat3@Numerics@Foundation@Windows@@U2345@0M@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800B0DAC (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1800B136C (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     ?GetStabilizedRay@RayStabilizationResult@@QEBA?AUTargetingRay@@XZ @ 0x1800B13B4 (-GetStabilizedRay@RayStabilizationResult@@QEBA-AUTargetingRay@@XZ.c)
 */

void __fastcall RayStabilizer::PerformDynamicExponential(RayStabilizer *this, struct RayStabilizationResult *a2)
{
  __int128 *v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  bool v13; // zf
  __int128 v14; // xmm6
  __int64 v15; // xmm7_8
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm11_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm11_4
  float v26; // xmm9_4
  float v27; // xmm10_4
  float v28; // xmm0_4
  float v29; // xmm11_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  int v33; // eax
  float v34; // xmm1_4
  unsigned __int64 *v35; // rax
  __m128 v36; // xmm3
  __m128 v37; // xmm2
  __m128 v38; // xmm1
  __m128 v39; // xmm3
  __int128 v40; // xmm1
  __int64 v41; // rcx
  __m256i v42; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int128 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  __int128 v47; // [rsp+80h] [rbp-80h] BYREF
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-60h] BYREF
  int v50; // [rsp+A8h] [rbp-58h]
  _OWORD v51[6]; // [rsp+B0h] [rbp-50h] BYREF
  int v52; // [rsp+110h] [rbp+10h]

  RayStabilizationResult::GetAtStep(a2, &v45, *(unsigned int *)a2 - 1LL);
  if ( !*((_BYTE *)this + 80) )
  {
    if ( *((_QWORD *)this + 4) )
    {
      v4 = *(__int128 **)(*((_QWORD *)this + 1) + 8 * (*((_QWORD *)this + 3) & (*((_QWORD *)this + 2) - 1LL)));
      v5 = *v4;
      v6 = v4[1];
      v52 = *((_DWORD *)v4 + 24);
      v51[0] = v5;
      v7 = v4[2];
      v51[1] = v6;
      v8 = v4[3];
      v51[2] = v7;
      v9 = v4[4];
      v51[3] = v8;
      v10 = v4[5];
      v51[4] = v9;
      v51[5] = v10;
      RayStabilizationResult::GetStabilizedRay(v51, &v43);
      v47 = v43;
      v48 = v44;
      if ( (unsigned __int8)RayStabilizer::TransformRay(&v47, &v42) )
      {
        v11 = *(_OWORD *)v42.m256i_i8;
        *((_BYTE *)this + 80) = 1;
        v12 = *(_OWORD *)&v42.m256i_u64[2];
        *((_OWORD *)this + 3) = v11;
        *((_OWORD *)this + 4) = v12;
      }
    }
  }
  v13 = *((_BYTE *)this + 80) == 0;
  v14 = v45;
  v15 = v46;
  v44 = v46;
  v43 = v45;
  if ( !v13 )
  {
    v47 = v45;
    v48 = v46;
    if ( (unsigned __int8)RayStabilizer::TransformRay(&v47, &v42) )
    {
      v16 = *(float *)v42.m256i_i32;
      v17 = *(float *)&v42.m256i_i32[1];
      v18 = *((float *)this + 12);
      v19 = *((float *)this + 13);
      v20 = *((float *)this + 14);
      v21 = o_sqrtf_0(
              (float)((float)((float)(*(float *)&v42.m256i_i32[1] - v19) * (float)(*(float *)&v42.m256i_i32[1] - v19))
                    + (float)((float)(*(float *)v42.m256i_i32 - v18) * (float)(*(float *)v42.m256i_i32 - v18)))
            + (float)((float)(*(float *)&v42.m256i_i32[2] - v20) * (float)(*(float *)&v42.m256i_i32[2] - v20)));
      v22 = powf(0.5, v21 / 0.02);
      v23 = *(float *)&v42.m256i_i32[4] * *((float *)this + 16);
      v24 = *(float *)&v42.m256i_i32[5] * *((float *)this + 17);
      v25 = (float)(v20 - *(float *)&v42.m256i_i32[2]) * v22;
      v26 = (float)((float)(v18 - v16) * v22) + v16;
      v27 = (float)((float)(v19 - v17) * v22) + v17;
      v28 = *(float *)&v42.m256i_i32[3] * *((float *)this + 15);
      v29 = v25 + *(float *)&v42.m256i_i32[2];
      v42.m256i_i64[0] = __PAIR64__(LODWORD(v27), LODWORD(v26));
      v30 = v23 + v28;
      v31 = FLOAT_1_0;
      *(float *)&v42.m256i_i32[2] = v29;
      v32 = v30 + v24;
      if ( v32 <= 1.0 )
      {
        v31 = FLOAT_N1_0;
        if ( v32 >= -1.0 )
          v31 = v32;
      }
      v33 = *((_DWORD *)this + 17);
      v49 = *(_QWORD *)((char *)this + 60);
      v50 = v33;
      *(_QWORD *)&v45 = *(__int64 *)((char *)&v42.m256i_i64[1] + 4);
      DWORD2(v45) = v42.m256i_i32[5];
      v34 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(acosf(v31)) & _xmm) * 0.1) / 0.02;
      powf(0.5, v34);
      v35 = (unsigned __int64 *)MPCMath::Slerp(&v47, &v45, &v49);
      *(_QWORD *)&v43 = __PAIR64__(LODWORD(v27), LODWORD(v26));
      *((float *)&v43 + 2) = v29;
      v36 = _mm_movelh_ps((__m128)*v35, (__m128)*((unsigned int *)v35 + 2));
      v37 = _mm_mul_ps(v36, v36);
      v38 = _mm_shuffle_ps(v37, v37, 102);
      v37.m128_f32[0] = (float)(v37.m128_f32[0] + v38.m128_f32[0]) + _mm_shuffle_ps(v38, v38, 85).m128_f32[0];
      v39 = _mm_div_ps(v36, _mm_sqrt_ps(_mm_shuffle_ps(v37, v37, 0)));
      *(_QWORD *)&v45 = v39.m128_u64[0];
      v38.m128_i32[0] = v39.m128_i32[0];
      v39.m128_i32[0] = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
      *(__int64 *)((char *)&v42.m256i_i64[1] + 4) = __PAIR64__(v39.m128_u32[1], v38.m128_u32[0]);
      LODWORD(v44) = v39.m128_i32[1];
      HIDWORD(v43) = v38.m128_i32[0];
      v14 = v43;
      v42.m256i_i32[5] = v39.m128_i32[0];
      v40 = *(_OWORD *)&v42.m256i_u64[2];
      *((_OWORD *)this + 3) = *(_OWORD *)v42.m256i_i8;
      HIDWORD(v44) = v39.m128_i32[0];
      v15 = v44;
      *((_OWORD *)this + 4) = v40;
    }
  }
  v41 = 3LL * *(unsigned int *)a2;
  *(_OWORD *)((char *)a2 + 8 * v41 + 4) = v14;
  *(_QWORD *)((char *)a2 + 8 * v41 + 20) = v15;
  ++*(_DWORD *)a2;
}
