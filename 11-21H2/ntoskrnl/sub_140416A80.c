/*
 * XREFs of sub_140416A80 @ 0x140416A80
 * Callers:
 *     sub_140410D50 @ 0x140410D50 (sub_140410D50.c)
 * Callees:
 *     sub_140416B00 @ 0x140416B00 (sub_140416B00.c)
 */

__m128i *__fastcall sub_140416A80(__int64 a1, int a2, const __m128i *a3)
{
  __m128i *result; // rax

  if ( *(_DWORD *)(a1 + 12) != 128 )
    return (__m128i *)sub_140416B00();
  result = (__m128i *)(*(_QWORD *)(a1 + 16) + (unsigned int)(a2 << 7));
  *result = _mm_loadu_si128(a3);
  result[1] = _mm_loadu_si128(a3 + 1);
  result[2] = _mm_loadu_si128(a3 + 2);
  result[3] = _mm_loadu_si128(a3 + 3);
  result[4] = _mm_loadu_si128(a3 + 4);
  result[5] = _mm_loadu_si128(a3 + 5);
  result[6] = _mm_loadu_si128(a3 + 6);
  result[7] = _mm_loadu_si128(a3 + 7);
  return result;
}
