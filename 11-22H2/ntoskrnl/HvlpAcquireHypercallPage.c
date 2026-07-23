/*
 * XREFs of HvlpAcquireHypercallPage @ 0x140540860
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
 *     MmGetPhysicalAddress @ 0x14028BDC0 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
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
          if ( (_DWORD)KiIrqlFlags )
          {
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
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
