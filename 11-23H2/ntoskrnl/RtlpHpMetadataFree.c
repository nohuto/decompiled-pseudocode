/*
 * XREFs of RtlpHpMetadataFree @ 0x14032405C
 * Callers:
 *     RtlpHpLargeFree @ 0x140323E6C (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x14032409C (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B5F20 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405B62E0 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpHeapDestroy @ 0x1405B6630 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405B72C0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x1402AC4C0 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140324628 (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, __int128 *a2)
{
  _DWORD **v2; // rax
  unsigned __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (_DWORD **)RtlpHpMetadataHeapCtxGet(&v5);
  return RtlpHpFreeHeap(*v2, v3, 0x1000000, 0LL, 0LL);
}
