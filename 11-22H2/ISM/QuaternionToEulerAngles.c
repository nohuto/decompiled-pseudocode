/*
 * XREFs of QuaternionToEulerAngles @ 0x1800DD220
 * Callers:
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAULegacyInputInfo@@@Z @ 0x1800DCFE0 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_asinf_0 @ 0x180057340 (_o_asinf_0.c)
 *     _o_atan2f_0 @ 0x18005734C (_o_atan2f_0.c)
 *     ?XMMatrixRotationQuaternion@DirectX@@YQ?AUXMMATRIX@1@T__m128@@@Z @ 0x1800DD3E0 (-XMMatrixRotationQuaternion@DirectX@@YQ-AUXMMATRIX@1@T__m128@@@Z.c)
 */

__int64 __fastcall QuaternionToEulerAngles(__m128 *a1, float *a2, float *a3, __int32 *a4)
{
  __int64 v7; // rdx
  __int64 result; // rax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __m128 v17; // xmm4
  __m128 v18; // xmm2
  __int32 v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  __m128 v23; // [rsp+20h] [rbp-98h]
  __m128 v24; // [rsp+30h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( !a2 )
  {
    v7 = 99LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v7 = 100LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v7 = 101LL;
    goto LABEL_3;
  }
  *a2 = 0.0;
  *a3 = 0.0;
  *a4 = 0;
  v9 = _mm_mul_ps(*a1, *a1);
  v10 = _mm_shuffle_ps(v9, v9, 238);
  v11 = _mm_add_ps(v9, v10);
  v12 = _mm_shuffle_ps(v11, v11, 64);
  v13 = _mm_add_ps(v12, _mm_shuffle_ps(v10, v12, 240));
  v14 = _mm_shuffle_ps(v13, v13, 170);
  v15 = _mm_sqrt_ps(v14);
  v16 = _mm_cmpneq_ps(DirectX::g_XMInfinity, v14);
  v17 = _mm_div_ps(*a1, v15);
  v18 = _mm_cmpneq_ps(v15, (__m128)0LL);
  v10.m128_u64[1] = _mm_or_ps(_mm_and_ps(_mm_and_ps(v17, v18), v16), _mm_andnot_ps(v16, DirectX::g_XMQNaN)).m128_u64[1];
  *(double *)v10.m128_u64 = DirectX::XMMatrixRotationQuaternion();
  v19 = 0;
  v20 = 0.0;
  v24 = _mm_shuffle_ps((__m128)0LL, v18, 73);
  v23 = _mm_shuffle_ps(v10, _mm_shuffle_ps(v10, (__m128)0LL, 10), 132);
  v21 = o_asinf_0(_mm_shuffle_ps(v24, v24, 85).m128_f32[0] * -1.0);
  v22 = v21;
  if ( v21 >= 1.5707964 )
  {
    o_atan2f_0();
    v20 = v23.m128_f32[1] * -1.0;
  }
  else
  {
    o_atan2f_0();
    if ( v21 <= -1.5707964 )
    {
      v22 = (float)(v23.m128_f32[1] * -1.0) * -1.0;
    }
    else
    {
      v20 = v23.m128_f32[2];
      o_atan2f_0();
      v19 = v23.m128_i32[3];
    }
  }
  *a2 = v22;
  result = 0LL;
  *a3 = v20;
  *a4 = v19;
  return result;
}
