/*
 * XREFs of ?TransformNormal@Vector3@Math@Utils@Spectre@@SA?AU1234@AEBU1234@AEBUMatrix@234@@Z @ 0x18003DD7C
 * Callers:
 *     ?TransformVector@SceneNode@Engine@Spectre@@QEBA?AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSystem@23@@Z @ 0x18003DE60 (-TransformVector@SceneNode@Engine@Spectre@@QEBA-AUVector3@Math@Utils@3@U4563@W4NodeCoordinateSys.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall Spectre::Utils::Math::Vector3::TransformNormal(__int64 a1, unsigned __int64 *a2, __m128 *a3)
{
  __int64 result; // rax
  __m128 v4; // xmm3
  __m128 v5; // xmm2

  result = a1;
  v4 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v5 = _mm_add_ps(
         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), a3[2]), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), a3[1])),
         _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *a3));
  *(_QWORD *)a1 = v5.m128_u64[0];
  *(_DWORD *)(a1 + 8) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  return result;
}
