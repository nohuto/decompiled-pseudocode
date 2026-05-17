/*
 * XREFs of RtlpHpMetadataFree @ 0x180064850
 * Callers:
 *     RtlpHpLargeFree @ 0x180064234 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800643E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x1800653D8 (RtlpHpHeapDestroy.c)
 *     RtlpHpTagContextAllocateTag @ 0x180065BE4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagRunOnceInit @ 0x180065D90 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1801155C0 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x1801158A0 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x1801159D0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115AE4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180115E94 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180116170 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x180121838 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180121BB0 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1801220A0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1800666CC (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  _DWORD **v2; // rax
  unsigned __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (_DWORD **)RtlpHpMetadataHeapCtxGet(&v5, a2);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000, 0LL, 0LL);
}
