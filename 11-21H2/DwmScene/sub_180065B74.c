/*
 * XREFs of sub_180065B74 @ 0x180065B74
 * Callers:
 *     sub_180064DC0 @ 0x180064DC0 (sub_180064DC0.c)
 * Callees:
 *     sub_180065C38 @ 0x180065C38 (sub_180065C38.c)
 */

__int32 *__fastcall sub_180065B74(__int64 a1, __int32 *a2, __int32 *a3)
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
  v5 = (__m128)0x3F800000u;
  v11 = v10;
  sub_180065C38(a1, &v10, &v11);
  if ( v10.m128_f32[3] <= 0.0 )
  {
    v6 = 2143289344;
    v8 = 2143289344;
    v7 = 2143289344;
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
