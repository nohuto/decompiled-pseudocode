/*
 * XREFs of HvlpHvToNtStatus @ 0x14045F516
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403CD320 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlpReadPerfRegister @ 0x140541388 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1405426B8 (HvlpWritePerfRegister.c)
 *     HvlAcknowledgePageRequest @ 0x140542860 (HvlAcknowledgePageRequest.c)
 *     HvlAttachPasidSpace @ 0x140542900 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405429B0 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140542A60 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140542AC0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140542B80 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140542C70 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140542CD0 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140542D20 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140542D70 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140542DF0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140542EC0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140542F80 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140543030 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x1405430C0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140543120 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1405431D0 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x1405432D0 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140543410 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405436D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405438E0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1405439A0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140543AD0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140543CB0 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140543D00 (HvlEnablePasid.c)
 *     HvlGetDeviceCapabilities @ 0x140543E90 (HvlGetDeviceCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405446B0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140544BC0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140544E34 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x1405452C0 (HvlRegisterDeviceId.c)
 *     HvlRestoreTime @ 0x140545450 (HvlRestoreTime.c)
 *     HvlRetargetDeviceInterrupt @ 0x1405455C0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetDeviceCapabilities @ 0x140545830 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x1405458D0 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140545BD0 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140545D20 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140545F30 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x140545FC0 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x140546070 (HvlUnregisterDeviceId.c)
 *     HvlRequestProcessorHalt @ 0x140546E50 (HvlRequestProcessorHalt.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140678C10 (HvlpAddRemovePhysicalMemory.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140678DB0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140678ED8 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140679040 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1406791B4 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140679314 (HvlNotifyPageHeat.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941598 (HvlpDynamicUpdateMicrocode.c)
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
