/*
 * XREFs of ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801C877C
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C8FA0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     acosf @ 0x18004A834 (acosf.c)
 */

float __fastcall MPCMouseProcessor::GetYawAngleBetweenTwoVectors(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm0
  __m128 v5; // xmm3
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  __m128 v8; // xmm3
  __m128 v9; // xmm3
  float v10; // xmm6_4
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __m128 v13; // xmm3
  float result; // xmm0_4
  float v15; // xmm2_4
  unsigned __int32 v16; // [rsp+28h] [rbp-20h]

  *((_DWORD *)a1 + 1) = 0;
  v3 = (__m128)*a1;
  v4 = (__m128)*((unsigned int *)a1 + 2);
  *((_DWORD *)a2 + 1) = 0;
  v5 = _mm_movelh_ps(v3, v4);
  v6 = _mm_mul_ps(v5, v5);
  v7 = _mm_shuffle_ps(v6, v6, 102);
  v6.m128_f32[0] = (float)(v6.m128_f32[0] + v7.m128_f32[0]) + _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  v8 = _mm_div_ps(v5, _mm_sqrt_ps(_mm_shuffle_ps(v6, v6, 0)));
  *a1 = v8.m128_u64[0];
  v16 = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  v9 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  *((_DWORD *)a1 + 2) = v16;
  v10 = *(float *)a1;
  v11 = _mm_mul_ps(v9, v9);
  v12 = _mm_shuffle_ps(v11, v11, 102);
  v11.m128_f32[0] = v11.m128_f32[0] + v12.m128_f32[0];
  v4.m128_f32[0] = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
  v12.m128_i32[0] = *((_DWORD *)a1 + 2);
  v11.m128_f32[0] = v11.m128_f32[0] + v4.m128_f32[0];
  v13 = _mm_div_ps(v9, _mm_sqrt_ps(_mm_shuffle_ps(v11, v11, 0)));
  *a2 = v13.m128_u64[0];
  *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  result = 0.0;
  v15 = (float)((float)(*(float *)a2 * v10) + (float)(*((float *)a2 + 1) * *((float *)a1 + 1)))
      + (float)(v12.m128_f32[0] * *((float *)a2 + 2));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) > 0.0000099999997 )
    result = acosf(v15);
  if ( v10 > *(float *)a2 && result != 0.0 )
    return result * -1.0;
  return result;
}
