/*
 * XREFs of HvcallInitiateHypercall @ 0x1403CD360
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140376140 (HvlStartBootLogicalProcessors.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD2F0 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403CD320 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlGetCoverageData @ 0x14053F5B8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x14053F718 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x14053F830 (HvlInvokeHypervisorDebugger.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14053FA4C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlResetCoverageVector @ 0x14053FC3C (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x140540240 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405405D0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140540B94 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140540EA8 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140540FBC (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x140541234 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140541FD4 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x140542190 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140542220 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140542374 (HvlpStartVirtualProcessor.c)
 *     HvlpWithdrawPages @ 0x140542470 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140542774 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1405431D0 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x1405432D0 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140543410 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405436D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140543AD0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140543DB0 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140543E90 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x140544450 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405446B0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1405447F0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1405448F0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140544A40 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140544B30 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140544BC0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140544E34 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140544EC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140544F90 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140545028 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140545190 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1405452C0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1405455C0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1405459A0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140545B34 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140545C80 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140545DB0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140545E50 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140545FC0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1405462F8 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1405463BC (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1405464CC (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x14054693C (HvlNotifyAcpiReenabled.c)
 *     HvlParkedVirtualProcessors @ 0x1405469A8 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x140546B44 (HvlPrepareForHibernate.c)
 *     HvlRequestProcessorHalt @ 0x140546E50 (HvlRequestProcessorHalt.c)
 *     HvlpInitializePowerStatistics @ 0x140546F4C (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x140547250 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x140547834 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140548460 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405485EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140548958 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140548F64 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140549538 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549890 (HvlSwitchVirtualAddressSpace.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140549BB4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140549C5C (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x140549D74 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140549EF8 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14054A2C8 (HvlpInvokeGetPageListHypercall.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140678DB0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140678ED8 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140679040 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1406791B4 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140679314 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1409412A4 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140941450 (HvlpLpCpuid.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402A2F90 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x140338D50 (EtwTraceTimedEvent.c)
 *     HvcallpNoHypervisorPresent @ 0x14036E650 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
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
