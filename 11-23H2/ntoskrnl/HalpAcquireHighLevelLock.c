/*
 * XREFs of HalpAcquireHighLevelLock @ 0x14037CB78
 * Callers:
 *     HalDisableInterrupt @ 0x14031F8F0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x14031F950 (HalpInterruptSetDestination.c)
 *     HalEnableInterrupt @ 0x140320730 (HalEnableInterrupt.c)
 *     HalpInterruptLocalErrorService @ 0x14037B1E0 (HalpInterruptLocalErrorService.c)
 *     EmonSetInterval @ 0x14037B3B0 (EmonSetInterval.c)
 *     HalpInterruptEnableNmi @ 0x14037B5B4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037BD58 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpFindSecondaryIcEntry @ 0x14037C680 (HalpFindSecondaryIcEntry.c)
 *     HalpUnmaskInterrupt @ 0x14037C960 (HalpUnmaskInterrupt.c)
 *     HalpInterruptApplyOverrides @ 0x14037CAA8 (HalpInterruptApplyOverrides.c)
 *     HalpTimerConfigureInterrupt @ 0x14037CF94 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AF344 (HalpInterruptRemapFixedLines.c)
 *     HalpCreateSecondaryIcEntry @ 0x1403AFD98 (HalpCreateSecondaryIcEntry.c)
 *     HalpMaskInterrupt @ 0x1403B2680 (HalpMaskInterrupt.c)
 *     IvtFlushDomainTb @ 0x14045EF80 (IvtFlushDomainTb.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x140503FE0 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405045BC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x140505170 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1405053FC (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050678C (HalpInterruptServiceActiveBoth.c)
 *     HalpQueryProfileSource @ 0x140507B1C (HalpQueryProfileSource.c)
 *     HalpQueryProfileSourceList @ 0x140507CD4 (HalpQueryProfileSourceList.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140509AB0 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x140509C60 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x140509E44 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140509F30 (HalpVpptStop.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14050ABAC (HalpTimerEnableHypervisorTimer.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140519C08 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x140519E14 (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x140519FE8 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x14051A0D8 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x14051A320 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x14051C8F0 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x14051D240 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x14051E3F0 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x140528820 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x140529160 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140529E90 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x14052A0B0 (Amd64SetInterval.c)
 *     IvtAttachDeviceDomainInternal @ 0x14052B808 (IvtAttachDeviceDomainInternal.c)
 *     IvtFreeDomain @ 0x14052C6E0 (IvtFreeDomain.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052ECB0 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x14052FE10 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 */

unsigned __int8 __fastcall HalpAcquireHighLevelLock(PKSPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r8
  __int64 v4; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v4) = 0x8000;
    else
      v4 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v4;
  }
  KxAcquireSpinLock(SpinLock);
  return CurrentIrql;
}
