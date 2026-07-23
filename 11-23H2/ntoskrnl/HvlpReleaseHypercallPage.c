/*
 * XREFs of HvlpReleaseHypercallPage @ 0x140541AC0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403762E0 (HvlStartBootLogicalProcessors.c)
 *     HvlGetCoverageData @ 0x14053FC78 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x14053FDD8 (HvlGetCoverageInfo.c)
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
 *     HvlPrepareForSecureHibernate @ 0x14054732C (HvlPrepareForSecureHibernate.c)
 *     HvlpInitializePowerStatistics @ 0x14054760C (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x140547910 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x140547EF4 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140548B20 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140548CAC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140549018 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140549624 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140549BF8 (HvlpQueryExtendedCapabilities.c)
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
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall HvlpReleaseHypercallPage(__int64 a1)
{
  __int64 v1; // rax
  __int64 HypercallCachedPages; // rdx
  _SLIST_ENTRY *v3; // rdx
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  struct _KPRCB *v8; // rax
  int v9; // r8d
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // r8
  int v12; // ett

  LODWORD(v1) = *(_DWORD *)a1;
  HypercallCachedPages = 0LL;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v3 = *(_SLIST_ENTRY **)(a1 + 16);
    v3[1].Next = *(_SLIST_ENTRY **)(a1 + 24);
    LOBYTE(v1) = (unsigned __int8)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 8) + 34496LL), v3);
  }
  else if ( (v1 & 2) != 0 )
  {
    v4 = *(unsigned __int8 *)(a1 + 8);
    if ( (unsigned __int8)v4 < 2u )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v1) = v1 - 2;
          if ( (unsigned __int8)v1 <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            LODWORD(v1) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v7 = ((unsigned int)v1 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v1;
            if ( v7 )
              LOBYTE(v1) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
    }
  }
  else
  {
    v8 = KeGetCurrentPrcb();
    v9 = *(_DWORD *)(a1 + 12);
    if ( (v9 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v8->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v8->HypercallCachedPages + 4096;
    }
    v1 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(HypercallCachedPages + 16) = v1;
    if ( *(_BYTE *)(a1 + 8) )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      if ( v11 )
      {
        _m_prefetchw(v11);
        LODWORD(v1) = *v11;
        do
        {
          v12 = v1;
          LODWORD(v1) = _InterlockedCompareExchange(v11, v1 & 0xFFDFFFFF, v1);
        }
        while ( v12 != (_DWORD)v1 );
        if ( (v1 & 0x200000) != 0 )
          LOBYTE(v1) = KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      _enable();
    }
  }
  return v1;
}
