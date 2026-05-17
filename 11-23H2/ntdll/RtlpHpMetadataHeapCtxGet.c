/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x1800666B0
 * Callers:
 *     RtlpHpStackLoggingEnabled @ 0x18003B0F0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataCommit @ 0x18006598C (RtlpHpMetadataCommit.c)
 *     RtlpHpTaggableHeap @ 0x180065DA4 (RtlpHpTaggableHeap.c)
 *     RtlpHpMetadataAlloc @ 0x180065DE8 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x1800663EC (RtlpHpHeapAllocate.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpHpMetadataHeapCtxGet(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = 3LL;
  v2 = *a1 >> 8;
  if ( (unsigned __int8)v2 < 3u )
    v1 = (unsigned __int8)v2;
  return (char *)&unk_18018C318 + 16 * v1;
}
