/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x1800666CC
 * Callers:
 *     RtlpHpStackLoggingEnabled @ 0x18003B250 (RtlpHpStackLoggingEnabled.c)
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpMetadataFree @ 0x180064850 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataCommit @ 0x180065ABC (RtlpHpMetadataCommit.c)
 *     RtlpHpTaggableHeap @ 0x180065ED4 (RtlpHpTaggableHeap.c)
 *     RtlpHpMetadataAlloc @ 0x180065F18 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x180066408 (RtlpHpHeapAllocate.c)
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
  return (char *)&unk_180189248 + 16 * v1;
}
