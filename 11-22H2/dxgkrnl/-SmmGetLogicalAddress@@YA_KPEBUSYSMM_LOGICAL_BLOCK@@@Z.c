/*
 * XREFs of ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013448
 * Callers:
 *     SmmMapExistingMemoryToDomain @ 0x1C006F3A8 (SmmMapExistingMemoryToDomain.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x1C006F50C (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     SmmMapNonPagedObjectToIommu @ 0x1C006F544 (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x1C006F6F0 (SmmMapPagedObjectToIommu.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006F920 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006FA44 (SmmUnmapPagedObjectFromIommu.c)
 *     ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x1C00701B4 (-SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z.c)
 *     SmmSetAdlBaseAddress @ 0x1C0070360 (SmmSetAdlBaseAddress.c)
 *     SmmMapLockedPagesToIommu @ 0x1C0071FBC (SmmMapLockedPagesToIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x1C0072058 (SmmUnmapLockedPagesFromIommu.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C01D9FE0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SmmGetLogicalAddress(const struct SYSMM_LOGICAL_BLOCK *a1)
{
  if ( a1 )
    return *((_QWORD *)a1 + 4) << 12;
  else
    return 0LL;
}
