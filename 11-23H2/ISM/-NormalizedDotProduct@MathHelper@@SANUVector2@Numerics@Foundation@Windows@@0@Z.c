/*
 * XREFs of ?NormalizedDotProduct@MathHelper@@SANUVector2@Numerics@Foundation@Windows@@0@Z @ 0x1801BB58C
 * Callers:
 *     ?WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z @ 0x18016A578 (-WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x180056634 (_o_sqrtf_0.c)
 */

__m128d __fastcall MathHelper::NormalizedDotProduct(__int64 a1, __int64 a2)
{
  __m128 v2; // xmm2
  float v3; // xmm7_4
  float v4; // xmm9_4
  __m128d v5; // xmm8
  double v6; // xmm6_8

  v2 = (__m128)HIDWORD(a2);
  v3 = *(float *)&a1;
  v4 = *((float *)&a1 + 1);
  v2.m128_f32[0] = (float)(*((float *)&a2 + 1) * *((float *)&a1 + 1)) + (float)(*(float *)&a2 * *(float *)&a1);
  v5 = _mm_cvtps_pd(v2);
  v6 = o_sqrtf_0((float)(*((float *)&a2 + 1) * *((float *)&a2 + 1)) + (float)(*(float *)&a2 * *(float *)&a2));
  v5.m128d_f64[0] = v5.m128d_f64[0] / (v6 * o_sqrtf_0((float)(v4 * v4) + (float)(v3 * v3)));
  return v5;
}
