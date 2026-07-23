/*
 * XREFs of HvlpHvToNtStatus @ 0x14045F916
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403CD500 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlpReadPerfRegister @ 0x140541A48 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140542D78 (HvlpWritePerfRegister.c)
 *     HvlAcknowledgePageRequest @ 0x140542F20 (HvlAcknowledgePageRequest.c)
 *     HvlAttachPasidSpace @ 0x140542FC0 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140543070 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140543120 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140543180 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140543240 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140543330 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140543390 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x1405433E0 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140543430 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405434B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140543580 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140543640 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1405436F0 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140543780 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405437E0 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140543890 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140543990 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140543AD0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140543D90 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140543FA0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140544060 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140544190 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140544370 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405443C0 (HvlEnablePasid.c)
 *     HvlGetDeviceCapabilities @ 0x140544550 (HvlGetDeviceCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140544D70 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140545280 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405454F4 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140545980 (HvlRegisterDeviceId.c)
 *     HvlRestoreTime @ 0x140545B10 (HvlRestoreTime.c)
 *     HvlRetargetDeviceInterrupt @ 0x140545C80 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetDeviceCapabilities @ 0x140545EF0 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x140545F90 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140546290 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x1405463E0 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x1405465F0 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x140546680 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x140546730 (HvlUnregisterDeviceId.c)
 *     HvlRequestProcessorHalt @ 0x140547510 (HvlRequestProcessorHalt.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140679160 (HvlpAddRemovePhysicalMemory.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140679300 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140679428 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140679590 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140679704 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140679864 (HvlNotifyPageHeat.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941798 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return a1 | 0xC0350000;
}
