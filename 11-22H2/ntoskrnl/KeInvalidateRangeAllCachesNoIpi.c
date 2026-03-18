/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x14021AE40
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x14021ABA4 (MiFlushCacheForAttributeChange.c)
 *     HalpIommuMapLogicalRange @ 0x14037DE28 (HalpIommuMapLogicalRange.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037E658 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuInitializeDmarPageTable @ 0x14037FD88 (HalpIommuInitializeDmarPageTable.c)
 *     KeInvalidateRangeAllCaches @ 0x140460040 (KeInvalidateRangeAllCaches.c)
 *     HalpIommuMapLogical @ 0x1405270A4 (HalpIommuMapLogical.c)
 *     HalpIommuUnmapLogicalRange @ 0x1405274B0 (HalpIommuUnmapLogicalRange.c)
 *     IvtInitializeIdentityMappings @ 0x14052D0C0 (IvtInitializeIdentityMappings.c)
 *     MiFlushGraphicsPtes @ 0x140626498 (MiFlushGraphicsPtes.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14036D4F0 (KeInvalidateAllCaches.c)
 *     KiFlushCacheLines @ 0x140423FD0 (KiFlushCacheLines.c)
 */

char __fastcall KeInvalidateRangeAllCachesNoIpi(__int64 a1, unsigned int a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v3; // rdx
  __int64 CFlushSize; // r8
  char *v5; // rcx

  if ( a2 >= KiLargestCacheSize )
  {
    LOBYTE(CurrentPrcb) = KeInvalidateAllCaches();
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = a1 + a2;
    CFlushSize = CurrentPrcb->CFlushSize;
    v5 = (char *)(a1 & ~(CFlushSize - 1));
    if ( _bittest64(&KeFeatureBits, 0x23u) )
    {
      LOBYTE(CurrentPrcb) = KiFlushCacheLines(v5, (~(CFlushSize - 1) & (CFlushSize + v3 - 1)) - (_QWORD)v5);
    }
    else
    {
      while ( (unsigned __int64)v5 < v3 )
      {
        _mm_clflush(v5);
        v5 += CFlushSize;
      }
    }
  }
  return (char)CurrentPrcb;
}
