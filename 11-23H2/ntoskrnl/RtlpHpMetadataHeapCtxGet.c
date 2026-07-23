/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x1403248B8
 * Callers:
 *     RtlpHpMetadataFree @ 0x1403242EC (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x1403247B8 (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140389308 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataCommit @ 0x1403C7414 (RtlpHpMetadataCommit.c)
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
  return (char *)&unk_140C74998 + 16 * v1;
}
