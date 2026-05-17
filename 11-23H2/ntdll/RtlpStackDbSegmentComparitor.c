/*
 * XREFs of RtlpStackDbSegmentComparitor @ 0x18012E120
 * Callers:
 *     RtlpStackDbSegmentFindOrCreate @ 0x18012E15C (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     memcmp @ 0x180093310 (memcmp.c)
 */

_BOOL8 __fastcall RtlpStackDbSegmentComparitor(__int64 a1, unsigned int *a2)
{
  return *(unsigned __int8 *)(a1 + 19) == *a2
      && memcmp((const void *)(a1 + 24), *((const void **)a2 + 1), 8LL * *a2) == 0;
}
