/*
 * XREFs of RtlpHpMetadataFree @ 0x1403242EC
 * Callers:
 *     RtlpHpLargeFree @ 0x1403240FC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x14032432C (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B6490 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405B6850 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpHeapDestroy @ 0x1405B6BA0 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405B7830 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1403248B8 (RtlpHpMetadataHeapCtxGet.c)
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
