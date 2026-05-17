/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x180055544
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpStackLoggingEnabled @ 0x180027750 (RtlpHpStackLoggingEnabled.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpHeapAllocate @ 0x180055288 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataAlloc @ 0x1800557D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpTaggableHeap @ 0x180055908 (RtlpHpTaggableHeap.c)
 *     RtlpHpMetadataFree @ 0x180056AB0 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataCommit @ 0x180056AF0 (RtlpHpMetadataCommit.c)
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
  return (char *)&unk_18017EFA8 + 16 * v1;
}
