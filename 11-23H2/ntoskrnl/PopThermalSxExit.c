/*
 * XREFs of PopThermalSxExit @ 0x140590264
 * Callers:
 *     PopPolicyWorkerAction @ 0x14098A330 (PopPolicyWorkerAction.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     PopCoolingSxTransition @ 0x140587000 (PopCoolingSxTransition.c)
 */

void PopThermalSxExit()
{
  KIRQL v0; // al
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v8; // rdi
  void *v9; // rax

  if ( _InterlockedExchange(&PopThermalStateTransitionInProgress, 0) )
  {
    if ( PoResumeFromHibernate )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
      if ( byte_140C3C752 )
      {
        byte_140C3C752 = 0;
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
      }
      PopReleaseRwLock(&PopThermalStateTransitionContext);
      v0 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
      dword_140C3C66C = -1;
      v1 = v0;
      byte_140C3C668 = 1;
      KxReleaseSpinLock((volatile signed __int64 *)&PopThermalEventTransitionContext);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v1 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
          v6 = (v5 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v5;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v1);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    v8 = (PVOID *)PopThermal;
    if ( PopThermal != &PopThermal )
    {
      do
      {
        PopAcquireRwLockExclusive((ULONG_PTR)(v8 + 54));
        v9 = (void *)MEMORY[0xFFFFF78000000008];
        v8[64] = (PVOID)MEMORY[0xFFFFF78000000008];
        v8[65] = v9;
        *((_BYTE *)v8 + 504) = 0;
        PopReleaseRwLock((__int64 *)v8 + 54);
        v8 = (PVOID *)*v8;
      }
      while ( v8 != &PopThermal );
    }
    PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
    PopCoolingSxTransition(0);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    byte_140C3C750 = 1;
    if ( byte_140C3C751 || byte_140C3C753 )
      PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    PopReleaseRwLock(&PopThermalStateTransitionContext);
  }
}
