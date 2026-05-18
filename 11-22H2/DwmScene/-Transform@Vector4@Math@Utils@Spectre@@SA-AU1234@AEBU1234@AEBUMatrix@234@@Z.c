/*
 * XREFs of ?Transform@Vector4@Math@Utils@Spectre@@SA?AU1234@AEBU1234@AEBUMatrix@234@@Z @ 0x18005D620
 * Callers:
 *     ?InternalTransformVector4D@Camera@Engine@Spectre@@AEBA?AUVector4@Math@Utils@3@U4563@PEBUMatrix@563@W4CoordinateSystem@23@21W4VectorTensorVariance@23@@Z @ 0x18005BC74 (-InternalTransformVector4D@Camera@Engine@Spectre@@AEBA-AUVector4@Math@Utils@3@U4563@PEBUMatrix@5.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__m128 *__fastcall Spectre::Utils::Math::Vector4::Transform(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax

  result = a1;
  *a1 = _mm_add_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 255), a3[3]),
              _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), a3[2])),
            _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), a3[1])),
          _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *a3));
  return result;
}
