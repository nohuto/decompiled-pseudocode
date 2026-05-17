/*
 * XREFs of RtlCompareMemoryUlong @ 0x1800A5AA0
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x180043F44 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180044330 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x1800455F8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpValidateHeapSegment @ 0x1801085C0 (RtlpValidateHeapSegment.c)
 *     RtlpHpParametersVerify @ 0x180119AFC (RtlpHpParametersVerify.c)
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
