/*
 * XREFs of KeZeroPages @ 0x1404249D0
 * Callers:
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiZeroEngineMemory @ 0x1402D1510 (MiZeroEngineMemory.c)
 *     MiZeroInParallelWorker @ 0x1402D1590 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1402EC31C (MiZeroLargePage.c)
 *     MiFillPhysicalPages @ 0x140339520 (MiFillPhysicalPages.c)
 *     MiDoGangAssignment @ 0x14038C044 (MiDoGangAssignment.c)
 *     MiZeroMemory @ 0x14038E02C (MiZeroMemory.c)
 *     MiHugePageOperation @ 0x140620AF0 (MiHugePageOperation.c)
 *     MiZeroHugeRangeWorker @ 0x140623320 (MiZeroHugeRangeWorker.c)
 *     MiPageNotZero @ 0x14064DFFC (MiPageNotZero.c)
 *     MxMapVa @ 0x140B431AC (MxMapVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroPages(__m128i *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 128LL;
  v3 = a2 >> 7;
  do
  {
    _mm_stream_si128(a1, (__m128i)0LL);
    _mm_stream_si128(a1 + 1, (__m128i)0LL);
    _mm_stream_si128(a1 + 2, (__m128i)0LL);
    _mm_stream_si128(a1 + 3, (__m128i)0LL);
    a1 += 8;
    _mm_stream_si128(a1 - 4, (__m128i)0LL);
    _mm_stream_si128(a1 - 3, (__m128i)0LL);
    --v3;
    _mm_stream_si128(a1 - 2, (__m128i)0LL);
    _mm_stream_si128(a1 - 1, (__m128i)0LL);
  }
  while ( v3 );
  _mm_sfence();
  return result;
}
