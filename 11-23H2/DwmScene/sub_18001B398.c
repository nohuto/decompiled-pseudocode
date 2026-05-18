/*
 * XREFs of sub_18001B398 @ 0x18001B398
 * Callers:
 *     sub_180017E18 @ 0x180017E18 (sub_180017E18.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18001B398(double a1, __m128 *a2)
{
  return _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 170), a2[2]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 0), *a2)),
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 255), a2[3]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 85), a2[1])));
}
