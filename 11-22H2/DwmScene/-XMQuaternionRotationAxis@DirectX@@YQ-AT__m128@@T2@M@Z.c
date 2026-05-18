/*
 * XREFs of ?XMQuaternionRotationAxis@DirectX@@YQ?AT__m128@@T2@M@Z @ 0x18003EA50
 * Callers:
 *     ?CreateFromAxisAngle@Quaternion@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@M@Z @ 0x18003BD60 (-CreateFromAxisAngle@Quaternion@Math@Utils@Spectre@@SA-AU1234@AEBUVector3@234@M@Z.c)
 * Callees:
 *     <none>
 */

union __m128 __fastcall DirectX::XMQuaternionRotationAxis(DirectX *this, union __m128 *a2, float a3)
{
  __m128 v3; // xmm0
  __m128 v4; // xmm4
  __m128 v5; // xmm3

  v4 = _mm_mul_ps(v3, v3);
  v5 = _mm_shuffle_ps(v4, v4, 153);
  v4.m128_f32[0] = (float)(v4.m128_f32[0] + v5.m128_f32[0]) + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  return DirectX::XMQuaternionRotationNormal(
           this,
           a2,
           _mm_andnot_ps(_mm_cmpneq_ps(DirectX::g_XMInfinity, _mm_shuffle_ps(v4, v4, 0)), DirectX::g_XMQNaN).m128_f32[0]);
}
