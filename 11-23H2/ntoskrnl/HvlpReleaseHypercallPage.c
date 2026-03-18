/*
 * XREFs of HvlpReleaseHypercallPage @ 0x140541400
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140376140 (HvlStartBootLogicalProcessors.c)
 *     HvlGetCoverageData @ 0x14053F5B8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x14053F718 (HvlGetCoverageInfo.c)
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
 *     HvlPrepareForSecureHibernate @ 0x140546C6C (HvlPrepareForSecureHibernate.c)
 *     HvlpInitializePowerStatistics @ 0x140546F4C (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x140547250 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x140547834 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140548460 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405485EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140548958 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140548F64 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140549538 (HvlpQueryExtendedCapabilities.c)
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
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HvlpReleaseHypercallPage(__int64 a1)
{
  __int64 v1; // rax
  __int64 HypercallCachedPages; // rdx
  struct _SLIST_ENTRY *v3; // rdx
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
    v3 = *(struct _SLIST_ENTRY **)(a1 + 16);
    v3[1].Next = *(_SLIST_ENTRY **)(a1 + 24);
    LOBYTE(v1) = (unsigned __int8)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 8) + 34496LL), v3);
  }
  else if ( (v1 & 2) != 0 )
  {
    v4 = *(unsigned __int8 *)(a1 + 8);
    if ( (unsigned __int8)v4 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 )
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
