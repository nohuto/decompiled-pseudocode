/*
 * XREFs of PnpFreeDeviceInstancePath @ 0x1406DFD98
 * Callers:
 *     PiBuildDeviceNodeInstancePath @ 0x1406DFC4C (PiBuildDeviceNodeInstancePath.c)
 *     IopDestroyDeviceNode @ 0x140774F24 (IopDestroyDeviceNode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
}
