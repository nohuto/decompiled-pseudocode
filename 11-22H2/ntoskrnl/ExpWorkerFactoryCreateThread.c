/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x140303D2C
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D10 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ZwSetInformationThread @ 0x14041A840 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x14041B0E0 (ZwResumeThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpCreateUserThreadEx @ 0x14076BBFC (RtlpCreateUserThreadEx.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // r14d
  int v5; // r12d
  unsigned __int64 OldIrql; // r14
  int UserThread; // eax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  int v24; // [rsp+30h] [rbp-29h]
  __int64 v25[2]; // [rsp+60h] [rbp+7h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+17h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+67h] BYREF

  v1 = (struct _EX_RUNDOWN_REF *)(a1 + 104);
  ThreadHandle = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v4 = 128;
  *(_OWORD *)v25 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
    {
      ++*(_DWORD *)(a1 + 392);
      v5 = *(_DWORD *)(a1 + 408);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      UserThread = RtlpCreateUserThreadEx(
                     *(HANDLE *)(a1 + 40),
                     *(_QWORD *)(a1 + 56),
                     *(_QWORD *)(a1 + 64),
                     v24,
                     *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                     *(PVOID *)(a1 + 32),
                     (__int64)&ThreadHandle,
                     (__int64)v25);
      *(_DWORD *)(a1 + 416) = UserThread;
      v4 = UserThread;
      if ( UserThread >= 0 )
      {
        if ( (v5 & 0x8000) == 0 )
        {
          KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
          *(_DWORD *)(a1 + 408) |= 0x8000u;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          v9 = LockHandle.OldIrql;
          if ( (_DWORD)KiIrqlFlags )
          {
            v16 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              v18 = v17->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v15 = (v19 & v18[5]) == 0;
              v18[5] &= v19;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          __writecr8(v9);
        }
        if ( *(_DWORD *)(a1 + 412) )
          ZwSetInformationThread(ThreadHandle, ThreadBasePriority, (PVOID)(a1 + 412), 4u);
        if ( (*(_DWORD *)(a1 + 408) & 0x4000) != 0 )
          ZwSetInformationThread(
            ThreadHandle,
            ThreadSelectedCpuSets,
            (PVOID)(a1 + 120),
            8 * (unsigned __int16)KiActiveGroups);
        v4 = ZwResumeThread(ThreadHandle, 0LL);
        ObCloseHandle(ThreadHandle, 0);
LABEL_11:
        ExReleaseRundownProtection_0(v1);
        goto LABEL_12;
      }
      KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
      --*(_DWORD *)(a1 + 392);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v10 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8(v10);
    goto LABEL_11;
  }
LABEL_12:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
