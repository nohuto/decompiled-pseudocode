/*
 * XREFs of ?TransformPoint@Camera@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@U4563@W4CoordinateSystem@23@1@Z @ 0x18005D694
 * Callers:
 *     ?RenderSymbols@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18005CA50 (-RenderSymbols@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 * Callees:
 *     ?TransformVector4D@Camera@Engine@Spectre@@QEBA?AUVector4@Math@Utils@3@U4563@W4CoordinateSystem@23@1W4VectorTensorVariance@23@@Z @ 0x18005D758 (-TransformVector4D@Camera@Engine@Spectre@@QEBA-AUVector4@Math@Utils@3@U4563@W4CoordinateSystem@2.c)
 */

__int32 *__fastcall Spectre::Engine::Camera::TransformPoint(__int64 a1, __int32 *a2, __int32 *a3)
{
  __int32 v4; // xmm1_4
  __m128 v5; // xmm6
  __int32 v6; // xmm0_4
  __int32 v7; // xmm2_4
  __int32 v8; // xmm1_4
  __int32 *result; // rax
  __m128 v10; // [rsp+30h] [rbp-30h] BYREF
  __m128 v11; // [rsp+40h] [rbp-20h] BYREF

  v4 = a3[1];
  v10.m128_i32[0] = *a3;
  v10.m128_i32[2] = a3[2];
  v10.m128_i32[1] = v4;
  v10.m128_i32[3] = 1065353216;
  v5 = (__m128)LODWORD(FLOAT_1_0);
  v11 = v10;
  Spectre::Engine::Camera::TransformVector4D(a1, &v10, &v11);
  if ( v10.m128_f32[3] <= 0.0 )
  {
    v6 = LODWORD(FLOAT_NaN);
    v8 = LODWORD(FLOAT_NaN);
    v7 = LODWORD(FLOAT_NaN);
  }
  else
  {
    v5.m128_f32[0] = 1.0 / v10.m128_f32[3];
    v10 = _mm_mul_ps(v10, _mm_shuffle_ps(v5, v5, 0));
    v6 = v10.m128_i32[2];
    v7 = v10.m128_i32[1];
    v8 = v10.m128_i32[0];
  }
  result = a2;
  *a2 = v8;
  a2[1] = v7;
  a2[2] = v6;
  return result;
}
