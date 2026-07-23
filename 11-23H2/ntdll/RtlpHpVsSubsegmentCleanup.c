/*
 * XREFs of RtlpHpVsSubsegmentCleanup @ 0x180067788
 * Callers:
 *     RtlpHpVsContextFree @ 0x180036AF0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180037F50 (RtlpHpVsChunkSplit.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800652A8 (RtlpHpHeapDestroy.c)
 *     RtlpHpVsChunkFree @ 0x180124278 (RtlpHpVsChunkFree.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpHpVsSubsegmentCleanup(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx

  v2 = *(_QWORD *)a2 ^ a2;
  v4 = *(_QWORD *)(a2 + 8) ^ a2;
  if ( (*(_QWORD *)(v2 + 8) ^ v2) != a2 || (*(_QWORD *)v4 ^ v4) != a2 )
    __fastfail(3u);
  *(_QWORD *)v4 = v2 ^ v4;
  *(_QWORD *)(v2 + 8) = v2 ^ v4;
  v5 = *(_QWORD *)(a2 + 16) - ((*(_QWORD *)(a2 + 16) >> 1) & 0x5555555555555555LL);
  return _InterlockedExchangeAdd64(
           (volatile signed __int64 *)(a1 + 48),
           -((unsigned int)((0x101010101010101LL
                           * (((v5 & 0x3333333333333333LL)
                             + ((v5 >> 2) & 0x3333333333333333LL)
                             + (((v5 & 0x3333333333333333LL) + ((v5 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
}
