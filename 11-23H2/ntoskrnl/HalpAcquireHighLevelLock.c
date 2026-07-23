/*
 * XREFs of HalpAcquireHighLevelLock @ 0x14037CD18
 * Callers:
 *     HalDisableInterrupt @ 0x14031FB80 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x14031FBE0 (HalpInterruptSetDestination.c)
 *     HalEnableInterrupt @ 0x1403209C0 (HalEnableInterrupt.c)
 *     HalpInterruptLocalErrorService @ 0x14037B380 (HalpInterruptLocalErrorService.c)
 *     EmonSetInterval @ 0x14037B550 (EmonSetInterval.c)
 *     HalpInterruptEnableNmi @ 0x14037B754 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037BEF8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpFindSecondaryIcEntry @ 0x14037C820 (HalpFindSecondaryIcEntry.c)
 *     HalpUnmaskInterrupt @ 0x14037CB00 (HalpUnmaskInterrupt.c)
 *     HalpInterruptApplyOverrides @ 0x14037CC48 (HalpInterruptApplyOverrides.c)
 *     HalpTimerConfigureInterrupt @ 0x14037D134 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AF524 (HalpInterruptRemapFixedLines.c)
 *     HalpCreateSecondaryIcEntry @ 0x1403AFF78 (HalpCreateSecondaryIcEntry.c)
 *     HalpMaskInterrupt @ 0x1403B2860 (HalpMaskInterrupt.c)
 *     IvtFlushDomainTb @ 0x14045F380 (IvtFlushDomainTb.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x140504530 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140504B0C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x1405056C0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14050594C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptServiceActiveBoth @ 0x140506CDC (HalpInterruptServiceActiveBoth.c)
 *     HalpQueryProfileSource @ 0x14050806C (HalpQueryProfileSource.c)
 *     HalpQueryProfileSourceList @ 0x140508224 (HalpQueryProfileSourceList.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x14050A000 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x14050A1B0 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x14050A394 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x14050A480 (HalpVpptStop.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14050B0FC (HalpTimerEnableHypervisorTimer.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x14051A158 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x14051A364 (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x14051A538 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x14051A628 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x14051A870 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x14051CE40 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x14051D790 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x14051E940 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x140528D70 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x1405296B0 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x14052A3E0 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x14052A600 (Amd64SetInterval.c)
 *     IvtAttachDeviceDomainInternal @ 0x14052BD58 (IvtAttachDeviceDomainInternal.c)
 *     IvtFreeDomain @ 0x14052CC30 (IvtFreeDomain.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052F200 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x140530360 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 */

unsigned __int8 __fastcall HalpAcquireHighLevelLock(PKSPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r8
  __int64 v4; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
