/*
 * XREFs of HvlpAcquireHypercallPage @ 0x1405407B0
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
 *     MmGetPhysicalAddress @ 0x14028BEE0 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140428EB0 (RtlpInterlockedPopEntrySList.c)
 */

PHYSICAL_ADDRESS *__fastcall HvlpAcquireHypercallPage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  volatile signed __int32 *v9; // rdx
  struct _KPRCB *v10; // rax
  PHYSICAL_ADDRESS *result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v13; // rax
  PHYSICAL_ADDRESS *HypercallCachedPages; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v19; // dl
  _DWORD *SchedulerAssist; // r10
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  volatile signed __int32 *v22; // rdx
  struct _KPRCB *v23; // rax
  __int16 v24; // [rsp+40h] [rbp-8h]

  v4 = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = (PHYSICAL_ADDRESS *)v13;
    if ( v13 )
    {
      *(_DWORD *)a1 = 1;
      *(_QWORD *)(a1 + 8) = CurrentPrcb;
      *(_QWORD *)(a1 + 16) = v13;
      *(_QWORD *)(a1 + 24) = v13[1].Next;
    }
    else
    {
      LODWORD(v15) = 4;
      if ( (a2 & 4) != 0 )
        return 0LL;
      if ( a3 )
      {
        v16 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v17 = v16 + a4 - 1;
        HypercallCachedPages = (PHYSICAL_ADDRESS *)(v17 & 0xFFFFFFFFFFFFF000uLL);
        if ( ((v16 ^ v17) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          HypercallCachedPages = (PHYSICAL_ADDRESS *)((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_DWORD *)a1 = 2;
        CurrentIrql = KeGetCurrentIrql();
        *(_BYTE *)(a1 + 8) = CurrentIrql;
        if ( CurrentIrql < 2u )
        {
          v19 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v19 != 2 )
                v15 = (-1LL << (v19 + 1)) & 4;
              SchedulerAssist[5] |= v15;
            }
          }
        }
        PhysicalAddress = MmGetPhysicalAddress(HypercallCachedPages);
      }
      else
      {
        *(_DWORD *)a1 = 4;
        _disable();
        v22 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( v22 )
          _InterlockedOr(v22, 0x200000u);
        *(_DWORD *)(a1 + 12) = a2;
        *(_BYTE *)(a1 + 8) = (v24 & 0x200) != 0;
        v23 = KeGetCurrentPrcb();
        if ( (a2 & 1) != 0 )
        {
          HypercallCachedPages = (PHYSICAL_ADDRESS *)v23->HypercallCachedPages;
        }
        else if ( (a2 & 2) != 0 )
        {
          HypercallCachedPages = (PHYSICAL_ADDRESS *)((char *)v23->HypercallCachedPages + 4096);
        }
        PhysicalAddress = HypercallCachedPages[2];
      }
      *(PHYSICAL_ADDRESS *)(a1 + 24) = PhysicalAddress;
    }
    return HypercallCachedPages;
  }
  else
  {
    *(_DWORD *)a1 = 4;
    _disable();
    v9 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v9 )
      _InterlockedOr(v9, 0x200000u);
    *(_DWORD *)(a1 + 12) = a2;
    *(_BYTE *)(a1 + 8) = (v24 & 0x200) != 0;
    v10 = KeGetCurrentPrcb();
    if ( (a2 & 1) != 0 )
    {
      v4 = (__int64)v10->HypercallCachedPages;
    }
    else if ( (a2 & 2) != 0 )
    {
      v4 = (__int64)v10->HypercallCachedPages + 4096;
    }
    result = (PHYSICAL_ADDRESS *)v4;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 16);
  }
  return result;
}
