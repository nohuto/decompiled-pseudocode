/*
 * XREFs of RtlPerformRetpolineRelocationsOnImage @ 0x14067A65C
 * Callers:
 *     MiMapSystemImageWithLargePage @ 0x140A49BD4 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14067A69C (RtlPerformRetpolineRelocationsOnImageEx.c)
 */

__int64 __fastcall RtlPerformRetpolineRelocationsOnImage(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  return RtlPerformRetpolineRelocationsOnImageEx(a1, a5, a6, 0LL, 0LL, 0);
}
