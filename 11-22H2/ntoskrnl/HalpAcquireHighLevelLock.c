/*
 * XREFs of HalpAcquireHighLevelLock @ 0x14037D1C8
 * Callers:
 *     HalDisableInterrupt @ 0x14031F710 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestination @ 0x14031F770 (HalpInterruptSetDestination.c)
 *     HalEnableInterrupt @ 0x140320550 (HalEnableInterrupt.c)
 *     HalpInterruptLocalErrorService @ 0x14037B830 (HalpInterruptLocalErrorService.c)
 *     EmonSetInterval @ 0x14037BA00 (EmonSetInterval.c)
 *     HalpInterruptEnableNmi @ 0x14037BC04 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037C3A8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpFindSecondaryIcEntry @ 0x14037CCD0 (HalpFindSecondaryIcEntry.c)
 *     HalpUnmaskInterrupt @ 0x14037CFB0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptApplyOverrides @ 0x14037D0F8 (HalpInterruptApplyOverrides.c)
 *     HalpTimerConfigureInterrupt @ 0x14037D5E4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AECB4 (HalpInterruptRemapFixedLines.c)
 *     HalpCreateSecondaryIcEntry @ 0x1403AF708 (HalpCreateSecondaryIcEntry.c)
 *     HalpMaskInterrupt @ 0x1403B1FF0 (HalpMaskInterrupt.c)
 *     IvtFlushDomainTb @ 0x14045E920 (IvtFlushDomainTb.c)
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x1405040F0 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1405046CC (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptRequestInterrupt @ 0x140505280 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14050550C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050689C (HalpInterruptServiceActiveBoth.c)
 *     HalpQueryProfileSource @ 0x140507C1C (HalpQueryProfileSource.c)
 *     HalpQueryProfileSourceList @ 0x140507DB8 (HalpQueryProfileSourceList.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140509740 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1405098F0 (HalpVpptArmTimer.c)
 *     HalpVpptInitializePhysicalTimer @ 0x140509AD4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140509BC0 (HalpVpptStop.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14050A818 (HalpTimerEnableHypervisorTimer.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140519CC8 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     HalpFindSecondaryIcEntryFromObjectAndRange @ 0x140519ED4 (HalpFindSecondaryIcEntryFromObjectAndRange.c)
 *     HalpInsertSecondarySignalList @ 0x14051A0A8 (HalpInsertSecondarySignalList.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x14051A198 (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     HalpProcessSecondarySignalList @ 0x14051A3E0 (HalpProcessSecondarySignalList.c)
 *     EmonAddProfileSource @ 0x14051C9B0 (EmonAddProfileSource.c)
 *     EmonEnableMonitoring @ 0x14051D300 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x14051E4B0 (EmonRemoveProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405288D0 (Amd64AddProfileSource.c)
 *     Amd64EnableMonitoring @ 0x140529210 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x140529F40 (Amd64RemoveProfileSource.c)
 *     Amd64SetInterval @ 0x14052A160 (Amd64SetInterval.c)
 *     IvtAttachDeviceDomainInternal @ 0x14052B8B8 (IvtAttachDeviceDomainInternal.c)
 *     IvtFreeDomain @ 0x14052C790 (IvtFreeDomain.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052ED60 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x14052FEC0 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
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
