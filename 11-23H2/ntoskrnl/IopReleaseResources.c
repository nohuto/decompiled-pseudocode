/*
 * XREFs of IopReleaseResources @ 0x1408159AC
 * Callers:
 *     IopLegacyResourceAllocation @ 0x140815844 (IopLegacyResourceAllocation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     PipClearDevNodeFlags @ 0x14079805C (PipClearDevNodeFlags.c)
 *     PnpReleaseResourcesInternal @ 0x140816390 (PnpReleaseResourcesInternal.c)
 *     IopAllocateBootResourcesInternal @ 0x140816D18 (IopAllocateBootResourcesInternal.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall IopReleaseResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  int v4; // ecx
  void *v5; // rcx

  PnpReleaseResourcesInternal();
  ExAcquireFastMutex(&PiResourceListLock);
  v2 = *(void **)(a1 + 416);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  v3 = *(void **)(a1 + 424);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  ExReleaseFastMutex(&PiResourceListLock);
  v4 = *(_DWORD *)(a1 + 396);
  if ( (v4 & 0x10001) == 1 )
  {
    if ( (v4 & 0x40) != 0 && *(_QWORD *)(a1 + 544) )
      IopAllocateBootResourcesInternal(4LL, *(_QWORD *)(a1 + 32));
  }
  else
  {
    PipClearDevNodeFlags(a1, 192);
    v5 = *(void **)(a1 + 544);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(a1 + 544) = 0LL;
    }
  }
}
