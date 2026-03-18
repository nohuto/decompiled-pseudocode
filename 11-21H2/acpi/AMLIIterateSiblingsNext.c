/*
 * XREFs of AMLIIterateSiblingsNext @ 0x1C001BA54
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x1C001B8FC (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildMissingChildren @ 0x1C004A3DC (ACPIBuildMissingChildren.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF540 (EnableDisableIPMIRegions.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 */

__int64 __fastcall AMLIIterateSiblingsNext(volatile signed __int32 *a1)
{
  KIRQL v2; // cl
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 *v7; // rcx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( !v3 || (v4 = **(_QWORD **)a1, v4 == v3 + 24) )
  {
    v5 = 0LL;
  }
  else
  {
    dword_1C0081AC8 = 0;
    v5 = v4 + 120;
    byte_1C0081ACC = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
  {
    v7 = *(__int64 **)a1;
    if ( a1 == (volatile signed __int32 *)(*(_QWORD *)a1 + 120LL) )
    {
      DereferenceObjectEx((unsigned __int64)v7);
    }
    else
    {
      DereferenceObjectEx((unsigned __int64)v7);
      HeapFree(a1);
    }
  }
  return v5;
}
