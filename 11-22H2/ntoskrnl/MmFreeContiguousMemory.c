/*
 * XREFs of MmFreeContiguousMemory @ 0x1403C2FA0
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x14038F344 (HalpAllocateCommonBufferDmaThin.c)
 *     MiZeroPageCalibrate @ 0x1403A9F00 (MiZeroPageCalibrate.c)
 *     MmFreeContiguousMemorySpecifyCache @ 0x1403B65D0 (MmFreeContiguousMemorySpecifyCache.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045B93E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaFreeChildAdapter @ 0x140511230 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x140512340 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512490 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferDmaThin @ 0x140513390 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferV2 @ 0x140515C20 (HalFreeCommonBufferV2.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051F340 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14051F6AC (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140540680 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpFreeOverlayPages @ 0x1405498E0 (HvlpFreeOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x140553410 (IopInitializeInMemoryDumpData.c)
 *     DifMmFreeContiguousMemoryWrapper @ 0x1405E7070 (DifMmFreeContiguousMemoryWrapper.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140934000 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409345D0 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x140ACAC1C (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140B93694 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiFillPteHierarchy @ 0x14028ADD0 (MiFillPteHierarchy.c)
 *     MmUnmapIoSpace @ 0x140335B30 (MmUnmapIoSpace.c)
 *     EtwTraceContFreeEvent @ 0x1403C3140 (EtwTraceContFreeEvent.c)
 *     ExRemovePoolTag @ 0x1403C31AC (ExRemovePoolTag.c)
 *     MiFreeContiguousPages @ 0x1403C337C (MiFreeContiguousPages.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061D8E8 (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x140AC30E8 (VfFreeMemoryNotification.c)
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
