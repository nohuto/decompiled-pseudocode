/*
 * XREFs of KeReleaseSemaphore @ 0x1402D3440
 * Callers:
 *     PnpAllocateResources @ 0x140747FB4 (PnpAllocateResources.c)
 *     IopUncacheInterfaceInformation @ 0x1407490C0 (IopUncacheInterfaceInformation.c)
 *     NtReleaseSemaphore @ 0x14074D580 (NtReleaseSemaphore.c)
 *     AlpcpDoPortCleanup @ 0x14074DB0C (AlpcpDoPortCleanup.c)
 *     IopLegacyResourceAllocation @ 0x14081F570 (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140820280 (IopAllocateBootResources.c)
 *     FsRtlpRegisterUncProvider @ 0x1408567A8 (FsRtlpRegisterUncProvider.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1408605C8 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlDeregisterUncProvider @ 0x14092E1B0 (FsRtlDeregisterUncProvider.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14094FBA0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14094FC28 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14094FCD4 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x140958D9C (PnpReallocateResources.c)
 *     IopQueryConflictList @ 0x14095F204 (IopQueryConflictList.c)
 *     NtReleaseKeyedEvent @ 0x140A06FF0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140A073C0 (NtWaitForKeyedEvent.c)
 *     PopSystemIrpCompletion @ 0x140A50A10 (PopSystemIrpCompletion.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // edi
  LONG v11; // eax
  _DWORD *SchedulerAssist; // r9
  struct _KSEMAPHORE *Flink; // rcx
  struct _KSEMAPHORE *v15; // rax
  struct _KSEMAPHORE *v16; // r10
  struct _LIST_ENTRY *v17; // rcx
  char Blink; // al
  bool v19; // zf
  unsigned __int8 v20; // cl
  _QWORD *v21; // r9
  __int64 v22; // rcx
  char v23; // al
  int v24; // r10d
  struct _KSEMAPHORE **v25; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v27; // r9
  __int64 v28; // r10
  _DWORD *v29; // r9
  BOOL v30; // r12d
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  struct _KSEMAPHORE *v35; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v36; // [rsp+40h] [rbp-48h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-40h]
  struct _KSEMAPHORE *v38; // [rsp+50h] [rbp-38h]
  __int64 v39; // [rsp+90h] [rbp+8h]

  v4 = 0;
  v30 = Wait != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(Semaphore);
  SignalState = Semaphore->Header.SignalState;
  v11 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v11 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(3221225543LL);
  }
  Semaphore->Header.SignalState = v11;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    if ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      do
      {
        v15 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
        v16 = Flink;
        v35 = Flink;
        v17 = Flink->Header.WaitListHead.Flink;
        v38 = v15;
        if ( (struct _KSEMAPHORE *)v15->Header.WaitListHead.Flink != v16 || (struct _KSEMAPHORE *)v17->Flink != v16 )
LABEL_13:
          __fastfail(3u);
        v17->Flink = (struct _LIST_ENTRY *)v15;
        v15->Header.WaitListHead.Flink = v17;
        Blink = (char)v16->Header.WaitListHead.Blink;
        switch ( Blink )
        {
          case 1:
            if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, WORD1(v16->Header.WaitListHead.Blink), 0LL) )
            {
              v19 = Semaphore->Header.SignalState-- == 1;
              if ( v19 )
                goto LABEL_5;
            }
            break;
          case 2:
            BYTE1(v16->Header.WaitListHead.Blink) = 5;
            v39 = *(_QWORD *)&v16->Limit;
            *(_QWORD *)&v16->Header.Lock = 0LL;
            v20 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
            {
              v29 = KeGetCurrentPrcb()->SchedulerAssist;
              v29[5] |= (-1 << (v20 + 1)) & 4;
            }
            v36 = KeGetCurrentPrcb();
            CurrentThread = v36->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v36->CurrentThread);
              EtwTraceEnqueueWork(v27, v28, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v39);
            v21 = (_QWORD *)(v39 + 8);
            v22 = v39;
            if ( (_QWORD *)*v21 == v21
              || *(_DWORD *)(v39 + 40) >= *(_DWORD *)(v39 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v39 && CurrentThread->WaitReason == 15 )
            {
LABEL_35:
              v24 = *(_DWORD *)(v22 + 4);
              *(_DWORD *)(v22 + 4) = v24 + 1;
              v25 = *(struct _KSEMAPHORE ***)(v22 + 32);
              if ( *v25 != (struct _KSEMAPHORE *)(v22 + 24) )
                goto LABEL_13;
              *(_QWORD *)&v35->Header.Lock = v22 + 24;
              v35->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v25;
              *v25 = v35;
              *(_QWORD *)(v22 + 32) = v35;
              if ( !v24 && (_QWORD *)*v21 != v21 )
              {
                KiWakeOtherQueueWaiters(v36, v22);
                v22 = v39;
              }
            }
            else
            {
              v23 = KiWakeQueueWaiter(v36, v39, v35);
              v22 = v39;
              if ( !v23 )
              {
                v21 = (_QWORD *)(v39 + 8);
                goto LABEL_35;
              }
              *(_QWORD *)&v35->Header.Lock = 0LL;
            }
            _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
            v19 = Semaphore->Header.SignalState-- == 1;
            if ( v19 )
              goto LABEL_5;
            break;
          case 4:
            BYTE1(v16->Header.WaitListHead.Blink) = 5;
            Semaphore->Header.SignalState = 0;
            KeInsertQueueDpc(*(PRKDPC *)&v16->Limit, Semaphore, v16);
            break;
          default:
            KiTryUnwaitThread(CurrentPrcb, v16, 256LL, 0LL);
            break;
        }
        Flink = v38;
      }
      while ( v38 != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead );
    }
  }
LABEL_5:
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  if ( v30 )
    v4 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v4, 1, Increment, CurrentIrql);
  return SignalState;
}
