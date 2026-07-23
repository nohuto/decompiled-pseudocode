/*
 * XREFs of PnpFreeDeviceInstancePath @ 0x14078E8F8
 * Callers:
 *     IopDestroyDeviceNode @ 0x14078E6C0 (IopDestroyDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14078E7D8 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDeviceInstancePath(__int64 a1)
{
  void *v2; // rcx

  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x49706E50u);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  ExReleaseFastMutex(&PnpDeviceReferenceTableLock);
}
