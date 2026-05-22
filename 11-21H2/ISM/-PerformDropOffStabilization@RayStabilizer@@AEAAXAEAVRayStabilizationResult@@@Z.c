/*
 * XREFs of ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800AFE14
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800B0CA8 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     _o_fmodf_0 @ 0x18004A870 (_o_fmodf_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x1800A896C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ?ComputeDropOffTarget@RayStabilizer@@AEAA?AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z @ 0x1800AF994 (-ComputeDropOffTarget@RayStabilizer@@AEAA-AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z.c)
 *     ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x1800B07BC (-ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800B0DAC (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800B1058 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1800B136C (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

void __fastcall RayStabilizer::PerformDropOffStabilization(__m128 *this, struct RayStabilizationResult *a2)
{
  __int64 v2; // rsi
  __m128 v5; // xmm6
  unsigned __int64 v6; // xmm7_8
  __m128 *v7; // rax
  __m128 v8; // xmm9
  __m128 v9; // xmm10
  __m128 v10; // xmm1
  __m128 v11; // xmm4
  __m128 v12; // xmm1
  __m128 v13; // xmm3
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  __m128 v16; // xmm3
  __int64 v17; // rcx
  unsigned int v18; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v19; // [rsp+2Ch] [rbp-DCh]
  float v20; // [rsp+30h] [rbp-D8h]
  __m128 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+48h] [rbp-C0h]
  _OWORD v23[2]; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v24; // [rsp+78h] [rbp-90h] BYREF
  __m128 v25; // [rsp+88h] [rbp-80h]
  unsigned __int64 v26; // [rsp+98h] [rbp-70h]
  float v27[32]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = *(unsigned int *)a2;
  RayStabilizationResult::GetAtStep(a2, &v21, v2 - 1);
  v5 = v21;
  v6 = v22;
  v26 = v22;
  v25 = v21;
  if ( (unsigned __int8)RayStabilizer::TransformRay(&v21, v23) )
  {
    v21 = (__m128)v23[0];
    v22 = v23[1];
    if ( RayStabilizer::ProcessHistory(
           (RayStabilizer *)this,
           v2 - 1,
           (const struct RayStabilizer::TargetingData *)v23,
           (struct RayStabilizer::ProcessedHistoryData *)v27) )
    {
      v7 = RayStabilizer::ComputeDropOffTarget(this, &v21, (__int64)v23, v27);
      v19 = 0;
      v20 = 0.0;
      v8 = *v7;
      v18 = 1065353216;
      v9 = v7[1];
      v25.m128_f32[0] = (float)((float)(v8.m128_f32[0] - *(float *)v23) * 0.66600001) + *(float *)v23;
      v25.m128_f32[1] = (float)((float)(_mm_shuffle_ps(v8, v8, 85).m128_f32[0] - *((float *)v23 + 1)) * 0.66600001)
                      + *((float *)v23 + 1);
      v25.m128_f32[2] = (float)((float)(_mm_shuffle_ps(v8, v8, 170).m128_f32[0] - *((float *)v23 + 2)) * 0.66600001)
                      + *((float *)v23 + 2);
      o_fmodf_0();
      Windows::Foundation::Numerics::make_quaternion_from_axis_angle(&v24, &v18);
      v18 = 0;
      v20 = 0.0;
      v19 = 1065353216;
      o_fmodf_0();
      Windows::Foundation::Numerics::make_quaternion_from_axis_angle(&v21, &v18);
      v18 = 0x80000000;
      v10 = _mm_shuffle_ps(v24, v24, 27);
      v11 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v10);
      v12 = _mm_shuffle_ps(v10, v10, 177);
      v21 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v12, v12, 27), _mm_shuffle_ps(v21, v21, 170)),
                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ),
                _mm_mul_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v12),
                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY)),
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v21, v21, 255), v24),
                _mm_mul_ps(v11, (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX)));
      v20 = FLOAT_N1_0;
      v19 = 0x80000000;
      Windows::Foundation::Numerics::transform(v24.m128_f32, (float *)&v18, v21.m128_f32);
      v13 = _mm_movelh_ps((__m128)v24.m128_u64[0], (__m128)v24.m128_u32[2]);
      v14 = _mm_mul_ps(v13, v13);
      v15 = _mm_shuffle_ps(v14, v14, 102);
      v14.m128_f32[0] = (float)(v14.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
      v16 = _mm_div_ps(v13, _mm_sqrt_ps(_mm_shuffle_ps(v14, v14, 0)));
      v24.m128_u64[0] = v16.m128_u64[0];
      v25.m128_i32[3] = v16.m128_i32[0];
      v5 = v25;
      v26 = __PAIR64__(_mm_shuffle_ps(v16, v16, 170).m128_u32[0], v16.m128_u32[1]);
      v6 = v26;
    }
    else
    {
      v9 = (__m128)v22;
      v8 = v21;
    }
    this[3] = v8;
    this[5].m128_i8[0] = 1;
    this[4] = v9;
  }
  v17 = 3LL * *(unsigned int *)a2;
  *(__m128 *)((char *)a2 + 8 * v17 + 4) = v5;
  *(_QWORD *)((char *)a2 + 8 * v17 + 20) = v6;
  ++*(_DWORD *)a2;
}
