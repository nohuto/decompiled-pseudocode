/*
 * XREFs of IoAcquireRemoveLockEx @ 0x1403553A0
 * Callers:
 *     PopFxProcessWork @ 0x140354CBC (PopFxProcessWork.c)
 *     PopFxAddRefDevice @ 0x140355350 (PopFxAddRefDevice.c)
 *     PoFxPowerControl @ 0x1403980F0 (PoFxPowerControl.c)
 *     PopFxAllocatePowerIrp @ 0x1403A46E4 (PopFxAllocatePowerIrp.c)
 *     PopFxLockDevice @ 0x1403A4868 (PopFxLockDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1403BA6E0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1405CC3A0 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x1405CD100 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1405CD400 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x1405CE6B0 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x1405CE7C0 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x1405DDCE4 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405DDE24 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405DE108 (PopFxAcpiUnregisterDevice.c)
 *     DifIoAcquireRemoveLockExWrapper @ 0x14060C770 (DifIoAcquireRemoveLockExWrapper.c)
 *     ViFilterDispatchGeneric @ 0x140A9E460 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140A9E540 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x140A9E710 (ViFilterDispatchPower.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
      KxReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
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
