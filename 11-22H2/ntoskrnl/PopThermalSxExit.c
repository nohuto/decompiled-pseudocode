/*
 * XREFs of PopThermalSxExit @ 0x14058FE04
 * Callers:
 *     PopPolicyWorkerAction @ 0x14098A1E0 (PopPolicyWorkerAction.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCoolingSxTransition @ 0x140586BA0 (PopCoolingSxTransition.c)
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
      if ( byte_140C3C812 )
      {
        byte_140C3C812 = 0;
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
      }
      PopReleaseRwLock(&PopThermalStateTransitionContext);
      v0 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
      dword_140C3C72C = -1;
      v1 = v0;
      byte_140C3C728 = 1;
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
    byte_140C3C810 = 1;
    if ( byte_140C3C811 || byte_140C3C813 )
      PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    PopReleaseRwLock(&PopThermalStateTransitionContext);
  }
}
