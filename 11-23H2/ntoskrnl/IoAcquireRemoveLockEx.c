/*
 * XREFs of IoAcquireRemoveLockEx @ 0x140312780
 * Callers:
 *     PopFxLockDevice @ 0x14028D414 (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x14028F0BC (PopFxAllocatePowerIrp.c)
 *     PopFxAddRefDevice @ 0x140312734 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1403128C4 (PopFxProcessWork.c)
 *     PoFxPowerControl @ 0x140341620 (PoFxPowerControl.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140397350 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x14058A8D0 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x14058B750 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x14058B950 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x14058C8F0 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x14058CA00 (PopFxUpdateProcessorIdleState.c)
 *     PopPepPlatformStateRegistered @ 0x14059FE84 (PopPepPlatformStateRegistered.c)
 *     PopFxAcpiForwardNotification @ 0x1405A1098 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405A11D8 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405A14C0 (PopFxAcpiUnregisterDevice.c)
 *     DifIoAcquireRemoveLockExWrapper @ 0x1405DD2A0 (DifIoAcquireRemoveLockExWrapper.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140984AB0 (PoFxSetTargetDripsDevicePowerState.c)
 *     ViFilterDispatchGeneric @ 0x140ADF540 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140ADF620 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140ADF7F0 (ViFilterDispatchPower.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v13 <= 0xFu
          && CurrentIrql >= 2u )
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
