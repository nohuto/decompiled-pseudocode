/*
 * XREFs of HvlpReleaseHypercallPage @ 0x1405414B0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140376790 (HvlStartBootLogicalProcessors.c)
 *     HvlGetCoverageData @ 0x14053F668 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x14053F7C8 (HvlGetCoverageInfo.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14053FAFC (HvlQueryHypervisorTscAdjustment.c)
 *     HvlResetCoverageVector @ 0x14053FCEC (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1405402F0 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140540680 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140540C44 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140540F58 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x14054106C (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405412E4 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140542084 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x140542240 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1405422D0 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140542424 (HvlpStartVirtualProcessor.c)
 *     HvlpWithdrawPages @ 0x140542520 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140542824 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140543280 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140543380 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1405434C0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140543780 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140543B80 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140543E60 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140543F30 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405444F0 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140544750 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140544890 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x140544990 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140544AE0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140544BD0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140544C60 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140544ED4 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140544F60 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140545030 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1405450C8 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140545230 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140545360 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140545660 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x140545A40 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140545BD4 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140545D20 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140545E50 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140545EF0 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140546060 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140546398 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14054645C (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14054656C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1405469DC (HvlNotifyAcpiReenabled.c)
 *     HvlParkedVirtualProcessors @ 0x140546A48 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x140546BE4 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140546D0C (HvlPrepareForSecureHibernate.c)
 *     HvlpInitializePowerStatistics @ 0x140546FEC (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1405472F0 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1405478D4 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140548500 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14054868C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1405489F8 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140549004 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1405495D8 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140549C54 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140549CFC (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x140549E14 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140549F98 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14054A368 (HvlpInvokeGetPageListHypercall.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140678E20 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140678F48 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1406790B0 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140679224 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140679384 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140941354 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140941500 (HvlpLpCpuid.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
              LOBYTE(v1) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
          LOBYTE(v1) = KiRemoveSystemWorkPriorityKick(v10);
      }
      _enable();
    }
  }
  return v1;
}
