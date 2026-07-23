/*
 * XREFs of MmFreeContiguousMemory @ 0x1403C37E0
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x1403910A4 (HalpAllocateCommonBufferDmaThin.c)
 *     MiZeroPageCalibrate @ 0x1403AA7D0 (MiZeroPageCalibrate.c)
 *     MmFreeContiguousMemorySpecifyCache @ 0x1403B6E10 (MmFreeContiguousMemorySpecifyCache.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045C39E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaFreeChildAdapter @ 0x1405116C0 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x1405127D0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512920 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferDmaThin @ 0x140513820 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferV2 @ 0x1405160B0 (HalFreeCommonBufferV2.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051F7D0 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14051FB3C (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140540C90 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpFreeOverlayPages @ 0x140549F00 (HvlpFreeOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x140553A30 (IopInitializeInMemoryDumpData.c)
 *     DifMmFreeContiguousMemoryWrapper @ 0x1405E7550 (DifMmFreeContiguousMemoryWrapper.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140934150 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140934720 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x140AC9C3C (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140B92694 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MiFillPteHierarchy @ 0x14028B180 (MiFillPteHierarchy.c)
 *     MmUnmapIoSpace @ 0x140335F60 (MmUnmapIoSpace.c)
 *     EtwTraceContFreeEvent @ 0x1403C3980 (EtwTraceContFreeEvent.c)
 *     ExRemovePoolTag @ 0x1403C39EC (ExRemovePoolTag.c)
 *     MiFreeContiguousPages @ 0x1403C3BBC (MiFreeContiguousPages.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061DDC8 (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140AC2108 (VfFreeMemoryNotification.c)
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
