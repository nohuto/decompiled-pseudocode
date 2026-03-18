/*
 * XREFs of HvlpReleaseHypercallPage @ 0x14039D8F0
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140398488 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlpSlowFlushListTb @ 0x14039D79C (HvlpSlowFlushListTb.c)
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 *     HvlGetCoverageData @ 0x140543148 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1405432A8 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1405436CC (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x140543B40 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140543EB0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140544258 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x14054455C (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x140544670 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405448D4 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1405454FC (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1405456C0 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x140545750 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1405458A0 (HvlpStartVirtualProcessor.c)
 *     HvlpWithdrawPages @ 0x14054599C (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140545C94 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140546200 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140546300 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405465C0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140546900 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140546AE0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x140547040 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1405471A0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1405472A0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1405473F0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1405474E0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140547570 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140547850 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405478E0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1405479B0 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140547A48 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140547BD0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140547D00 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140547F80 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1405481F0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140548398 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140548430 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140548560 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140548600 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x140548C30 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x140548D80 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x140549100 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140549558 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14054961C (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1405496F8 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x140549B18 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x140549C24 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140549D4C (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x140549FDC (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x14054A050 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x14054A3D8 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x14054A9B4 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x14054B670 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14054B7FC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x14054BC60 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x14054C1A4 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x14054C770 (HvlpQueryExtendedCapabilities.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14054CE04 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14054CEAC (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x14054CFC4 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14054D374 (HvlpInvokeGetPageListHypercall.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140653C40 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140653D68 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140653EC4 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140654038 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x14065416C (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1409311AC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140B4E934 (HvlpLpCpuid.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
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
      LOBYTE(v1) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v1) = KeGetCurrentIrql() - 2;
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
      _enable();
  }
  return v1;
}
