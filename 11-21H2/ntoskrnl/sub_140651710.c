/*
 * XREFs of sub_140651710 @ 0x140651710
 * Callers:
 *     sub_14065193C @ 0x14065193C (sub_14065193C.c)
 *     sub_140651D6C @ 0x140651D6C (sub_140651D6C.c)
 *     sub_14065253C @ 0x14065253C (sub_14065253C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140651710(const __m128i *a1)
{
  __m128i v1; // xmm1
  __int64 v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm1

  v1 = 0LL;
  v2 = 32LL;
  do
  {
    v3 = _mm_loadu_si128(a1++);
    v4 = _mm_add_epi32(v3, v1);
    v1 = v4;
    --v2;
  }
  while ( v2 );
  v5 = _mm_add_epi32(v4, _mm_srli_si128(v4, 8));
  return (unsigned int)-_mm_cvtsi128_si32(_mm_add_epi32(v5, _mm_srli_si128(v5, 4)));
}
