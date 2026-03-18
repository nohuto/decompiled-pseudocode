/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x14021AE20
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x14021AB84 (MiFlushCacheForAttributeChange.c)
 *     HalpIommuMapLogicalRange @ 0x14037D7D8 (HalpIommuMapLogicalRange.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037E008 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuInitializeDmarPageTable @ 0x14037F738 (HalpIommuInitializeDmarPageTable.c)
 *     KeInvalidateRangeAllCaches @ 0x1404606A0 (KeInvalidateRangeAllCaches.c)
 *     HalpIommuMapLogical @ 0x140526FE4 (HalpIommuMapLogical.c)
 *     HalpIommuUnmapLogicalRange @ 0x1405273F0 (HalpIommuUnmapLogicalRange.c)
 *     IvtInitializeIdentityMappings @ 0x14052D010 (IvtInitializeIdentityMappings.c)
 *     MiFlushGraphicsPtes @ 0x140626428 (MiFlushGraphicsPtes.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14036DB40 (KeInvalidateAllCaches.c)
 *     KiFlushCacheLines @ 0x140424690 (KiFlushCacheLines.c)
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
