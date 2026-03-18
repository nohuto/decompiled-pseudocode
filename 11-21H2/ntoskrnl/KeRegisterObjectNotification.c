/*
 * XREFs of KeRegisterObjectNotification @ 0x1402F0D90
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1402D5324 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402F0B30 (NtAssociateWaitCompletionPacket.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403C6970 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140B2DEA8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiWaitSatisfyOther @ 0x1402F0AF8 (KiWaitSatisfyOther.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rcx
  _DWORD *SchedulerAssist; // r9
  _QWORD *v10; // r15
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // r13
  int v14; // r8d
  _QWORD *v15; // rdx
  _DWORD *v16; // r8
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v23 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  if ( *(int *)(a1 + 4) > 0 )
  {
    KiWaitSatisfyOther(a1);
    *(_BYTE *)(a3 + 17) = 5;
    v10 = (_QWORD *)(a2 + 8);
    *(_QWORD *)a3 = 0LL;
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
    {
      v16 = KeGetCurrentPrcb()->SchedulerAssist;
      v16[5] |= (-1 << (v11 + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a3, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(a2);
    if ( (_QWORD *)*v10 == v10
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a2 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a2, a3) )
    {
      v14 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v14 + 1;
      v15 = *(_QWORD **)(a2 + 32);
      if ( *v15 != a2 + 24 )
LABEL_26:
        __fastfail(3u);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v15;
      *v15 = a3;
      *(_QWORD *)(a2 + 32) = a3;
      if ( !v14 && (_QWORD *)*v10 != v10 )
        KiWakeOtherQueueWaiters(CurrentPrcb, a2);
    }
    else
    {
      *(_QWORD *)a3 = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
    return 1;
  }
  v7 = *(_QWORD **)(a1 + 16);
  if ( *v7 != a1 + 8 )
    goto LABEL_26;
  *(_QWORD *)a3 = a1 + 8;
  *(_QWORD *)(a3 + 8) = v7;
  *v7 = a3;
  *(_QWORD *)(a1 + 16) = a3;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0;
}
