/*
 * XREFs of ?XMQuaternionRotationNormal@DirectX@@YQ?AT__m128@@T2@M@Z @ 0x18003EC40
 * Callers:
 *     ?XMQuaternionRotationAxis@DirectX@@YQ?AT__m128@@T2@M@Z @ 0x18003EA50 (-XMQuaternionRotationAxis@DirectX@@YQ-AT__m128@@T2@M@Z.c)
 * Callees:
 *     ?XMVectorSinCos@DirectX@@YQXPEAT__m128@@0T2@@Z @ 0x18003ECA8 (-XMVectorSinCos@DirectX@@YQXPEAT__m128@@0T2@@Z.c)
 */

union __m128 __fastcall DirectX::XMQuaternionRotationNormal(
        DirectX *this,
        union __m128 *a2,
        float a3,
        union __m128 *a4)
{
  union __m128 *v4; // r8
  __m128 v5; // xmm0
  __m128 v7; // [rsp+20h] [rbp-38h] BYREF
  __m128 v8; // [rsp+30h] [rbp-28h] BYREF

  DirectX::XMVectorSinCos((DirectX *)&v7, &v8, v4, a4);
  return _mm_mul_ps(
           _mm_or_ps(_mm_and_ps(DirectX::g_XMMask3, v7), _mm_and_ps(v8, DirectX::g_XMMaskW)),
           _mm_or_ps(_mm_and_ps(DirectX::g_XMMask3, v5), DirectX::g_XMIdentityR3));
}
