/*
 * XREFs of RtlpHpMetadataFree @ 0x180064720
 * Callers:
 *     RtlpHpLargeFree @ 0x180064104 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800642B8 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapDestroy @ 0x1800652A8 (RtlpHpHeapDestroy.c)
 *     RtlpHpTagContextAllocateTag @ 0x180065AB4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagRunOnceInit @ 0x180065C60 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180116A70 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x180116D50 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x180116E80 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180116F94 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180117344 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x180117620 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x180122CE8 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180123060 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpLargeAllocationDestroy @ 0x180123550 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1800666B0 (RtlpHpMetadataHeapCtxGet.c)
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
