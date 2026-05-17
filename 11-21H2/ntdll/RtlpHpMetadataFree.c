/*
 * XREFs of RtlpHpMetadataFree @ 0x180056AB0
 * Callers:
 *     RtlpHpTagRunOnceInit @ 0x1800568F0 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpHeapDestroy @ 0x180056C28 (RtlpHpHeapDestroy.c)
 *     RtlpHpTagContextAllocateTag @ 0x18005867C (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLargeFree @ 0x180058AC4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180058D3C (RtlpHpLargeAlloc.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1801151E0 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x1801154C0 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x1801155F0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115704 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180115ABC (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180115D90 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18011FCA8 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180055544 (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  char *v2; // rax
  unsigned __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*(_DWORD **)v2, v3, 0x1000000, 0LL, 0LL);
}
