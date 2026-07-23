/*
 * XREFs of HvlpAcquireHypercallPage @ 0x140540E70
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
 *     MmGetPhysicalAddress @ 0x14028C170 (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
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
