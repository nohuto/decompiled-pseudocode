/*
 * XREFs of HvcallInitiateHypercall @ 0x1403CD540
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403762E0 (HvlStartBootLogicalProcessors.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403CD500 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlGetCoverageData @ 0x14053FC78 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x14053FDD8 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x14053FEF0 (HvlInvokeHypervisorDebugger.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14054010C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlResetCoverageVector @ 0x1405402FC (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x140540900 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140540C90 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140541254 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140541568 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x14054167C (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405418F4 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140542694 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x140542850 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1405428E0 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140542A34 (HvlpStartVirtualProcessor.c)
 *     HvlpWithdrawPages @ 0x140542B30 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140542E34 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140543890 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140543990 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140543AD0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140543D90 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140544190 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140544470 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140544550 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x140544B10 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140544D70 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140544EB0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x140544FB0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140545100 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1405451F0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140545280 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1405454F4 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140545580 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140545650 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1405456E8 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140545850 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140545980 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140545C80 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x140546060 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1405461F4 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140546340 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140546470 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140546510 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140546680 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1405469B8 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140546A7C (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x140546B8C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x140546FFC (HvlNotifyAcpiReenabled.c)
 *     HvlParkedVirtualProcessors @ 0x140547068 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x140547204 (HvlPrepareForHibernate.c)
 *     HvlRequestProcessorHalt @ 0x140547510 (HvlRequestProcessorHalt.c)
 *     HvlpInitializePowerStatistics @ 0x14054760C (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x140547910 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x140547EF4 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140548B20 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140548CAC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140549018 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140549624 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140549BF8 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549F50 (HvlSwitchVirtualAddressSpace.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14054A274 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14054A31C (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x14054A434 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14054A5B8 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14054A988 (HvlpInvokeGetPageListHypercall.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140679300 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140679428 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140679590 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140679704 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140679864 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1409414A4 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140941650 (HvlpLpCpuid.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x140338FE0 (EtwTraceTimedEvent.c)
 *     HvcallpNoHypervisorPresent @ 0x14036E7F0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall HvcallInitiateHypercall(int a1)
{
  char v2; // si
  __int64 v3; // rdi
  int v5; // [rsp+30h] [rbp-48h] BYREF
  char v6; // [rsp+34h] [rbp-44h]
  __int16 v7; // [rsp+35h] [rbp-43h]
  char v8; // [rsp+37h] [rbp-41h]
  _OWORD v9[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( (BYTE4(xmmword_140D1EAD0) & 0x10) != 0 )
  {
    v2 = 1;
    EtwGetKernelTraceTimestamp((__int64)v9, 2684354576LL);
  }
  else
  {
    v2 = 0;
  }
  v3 = HvcallCodeVa();
  if ( v2 )
  {
    v8 = 0;
    v5 = (unsigned __int16)a1;
    v6 = BYTE2(a1) & 1;
    v7 = a1 < 0;
    EtwTraceTimedEvent(0xF72u, 0xA0000010, (__int64)&v5, 8, 0x401A02u, (__int64)v9);
  }
  return v3;
}
