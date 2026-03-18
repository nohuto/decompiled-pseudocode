/*
 * XREFs of RtlpHpMetadataFree @ 0x140370C00
 * Callers:
 *     RtlpHpHeapDestroy @ 0x14036EBE8 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeFree @ 0x140370928 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x140370C40 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405F3870 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140364128 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140371398 (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  __int128 **v2; // rax
  __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (__int128 **)RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000, 0LL);
}
