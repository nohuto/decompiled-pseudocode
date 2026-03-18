/*
 * XREFs of IoAcquireRemoveLockEx @ 0x1403124F0
 * Callers:
 *     PopFxLockDevice @ 0x14028D184 (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x14028EE2C (PopFxAllocatePowerIrp.c)
 *     PopFxAddRefDevice @ 0x1403124A4 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x140312634 (PopFxProcessWork.c)
 *     PoFxPowerControl @ 0x140341390 (PoFxPowerControl.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140397170 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x14058A3E0 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x14058B260 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14058B460 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x14058C400 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14058C510 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x14059F994 (PopPepPlatformStateRegistered.c)
 *     PopFxAcpiForwardNotification @ 0x1405A0BA8 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405A0CE8 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405A0FD0 (PopFxAcpiUnregisterDevice.c)
 *     DifIoAcquireRemoveLockExWrapper @ 0x1405DCD30 (DifIoAcquireRemoveLockExWrapper.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1409848B0 (PoFxSetTargetDripsDevicePowerState.c)
 *     ViFilterDispatchGeneric @ 0x140ADF550 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140ADF630 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140ADF800 (ViFilterDispatchPower.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  NTSTATUS v9; // esi
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  bool v18; // zf

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  v9 = 0;
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else if ( RemlockSize == 120 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, LODWORD(RemoveLock[1].Common.RemoveEvent.Header.WaitListHead.Flink));
    v12 = (struct _LIST_ENTRY *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = Tag;
      *(_QWORD *)(Pool2 + 24) = File;
      *(_DWORD *)(Pool2 + 32) = Line;
      *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000320];
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      v12->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
      RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v12;
      KxReleaseSpinLock((volatile signed __int64 *)&RemoveLock[2].Common.RemoveEvent.Header.Lock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v13);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  return v9;
}
