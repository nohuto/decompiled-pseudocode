/*
 * XREFs of MmFreeContiguousMemory @ 0x1403C3600
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x140390EC4 (HalpAllocateCommonBufferDmaThin.c)
 *     MiZeroPageCalibrate @ 0x1403AA5F0 (MiZeroPageCalibrate.c)
 *     MmFreeContiguousMemorySpecifyCache @ 0x1403B6C30 (MmFreeContiguousMemorySpecifyCache.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045BF9E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaFreeChildAdapter @ 0x140511170 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x140512280 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1405123D0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferDmaThin @ 0x1405132D0 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferV2 @ 0x140515B60 (HalFreeCommonBufferV2.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051F280 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14051F5EC (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405405D0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpFreeOverlayPages @ 0x140549840 (HvlpFreeOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x140553370 (IopInitializeInMemoryDumpData.c)
 *     DifMmFreeContiguousMemoryWrapper @ 0x1405E6FE0 (DifMmFreeContiguousMemoryWrapper.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140933F50 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140934520 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x140AC9C4C (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140B92694 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140284870 (MiGetSystemRegionType.c)
 *     MiFillPteHierarchy @ 0x14028AEF0 (MiFillPteHierarchy.c)
 *     MmUnmapIoSpace @ 0x140335CD0 (MmUnmapIoSpace.c)
 *     EtwTraceContFreeEvent @ 0x1403C37A0 (EtwTraceContFreeEvent.c)
 *     ExRemovePoolTag @ 0x1403C380C (ExRemovePoolTag.c)
 *     MiFreeContiguousPages @ 0x1403C39DC (MiFreeContiguousPages.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061D878 (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140AC2118 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int SystemRegionType; // eax
  int v3; // edi
  __int64 v4; // [rsp+30h] [rbp-30h]
  _OWORD v5[2]; // [rsp+38h] [rbp-28h] BYREF

  memset(v5, 0, sizeof(v5));
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)BaseAddress);
  if ( SystemRegionType != 5 )
  {
    if ( SystemRegionType )
    {
      MiFillPteHierarchy((unsigned __int64)BaseAddress, (unsigned __int64 *)v5);
      v3 = 4;
      do
        v4 = MI_READ_PTE_LOCK_FREE(*((_QWORD *)v5 + (unsigned int)--v3));
      while ( (v4 & 0x80u) == 0LL && v3 );
      if ( ((unsigned __int16)BaseAddress & 0xFFF) == 0 )
      {
        ExRemovePoolTag((ULONG_PTR)BaseAddress);
        KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
      }
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    }
    KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
  }
  EtwTraceContFreeEvent(BaseAddress, 0LL);
  ExFreePoolWithTag(BaseAddress, 0);
}
