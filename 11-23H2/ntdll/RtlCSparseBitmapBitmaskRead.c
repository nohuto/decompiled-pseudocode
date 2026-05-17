/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x180063E58
 * Callers:
 *     RtlpHpSizeHeap @ 0x18003ACD0 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180041D6C (RtlpHpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlpHpSizeHeapInternal @ 0x180045A84 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x180045BC0 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpHeapWalk @ 0x180063ABC (RtlpHpHeapWalk.c)
 *     RtlpHpMetadataCommit @ 0x18006598C (RtlpHpMetadataCommit.c)
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
