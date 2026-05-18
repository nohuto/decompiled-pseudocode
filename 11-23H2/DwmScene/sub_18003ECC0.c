/*
 * XREFs of sub_18003ECC0 @ 0x18003ECC0
 * Callers:
 *     sub_18003EAD0 @ 0x18003EAD0 (sub_18003EAD0.c)
 * Callees:
 *     sub_18003ED28 @ 0x18003ED28 (sub_18003ED28.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18003ECC0(double a1)
{
  __m128 v2; // [rsp+20h] [rbp-38h] BYREF
  __m128 v3; // [rsp+30h] [rbp-28h] BYREF

  sub_18003ED28(&v2, &v3);
  return _mm_mul_ps(
           _mm_or_ps(_mm_and_ps((__m128)xmmword_180106400, v2), _mm_and_ps(v3, (__m128)xmmword_180106560)),
           _mm_or_ps(_mm_and_ps((__m128)xmmword_180106400, *(__m128 *)&a1), (__m128)xmmword_180106510));
}
