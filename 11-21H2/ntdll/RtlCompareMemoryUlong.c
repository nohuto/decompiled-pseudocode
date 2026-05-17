/*
 * XREFs of RtlCompareMemoryUlong @ 0x1800A8BB0
 * Callers:
 *     RtlpCreateSplitBlock @ 0x1800214F0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800219DC (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceFreeBlocks @ 0x180023750 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpValidateHeapSegment @ 0x180107448 (RtlpValidateHeapSegment.c)
 *     RtlpHpParametersVerify @ 0x180118254 (RtlpHpParametersVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareMemoryUlong(_DWORD *a1, unsigned __int64 a2, int a3)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  v5 = a2 >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *a1++ == a3;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
