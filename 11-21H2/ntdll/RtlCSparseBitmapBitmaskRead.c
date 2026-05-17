/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x180059108
 * Callers:
 *     RtlpHpSizeHeap @ 0x180027310 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x18002DBE0 (RtlpHpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpHpSizeHeapInternal @ 0x18002E8C4 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18002EA00 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpMetadataCommit @ 0x180056AF0 (RtlpHpMetadataCommit.c)
 *     RtlpHpHeapWalk @ 0x1800574B8 (RtlpHpHeapWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)a1, a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
