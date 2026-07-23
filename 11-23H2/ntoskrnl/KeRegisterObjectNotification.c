/*
 * XREFs of KeRegisterObjectNotification @ 0x140250A70
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x140250600 (NtAssociateWaitCompletionPacket.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140304E9C (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryManagerThread @ 0x14038EC20 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x140785D80 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140B72530 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402B8A10 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AF28 (KiWakeOtherQueueWaiters.c)
 *     KiWaitSatisfyOther @ 0x14034B554 (KiWaitSatisfyOther.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056F310 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FD27C (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // r14
  _QWORD *v8; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v11; // r9
  _QWORD *v12; // r15
  __int64 v13; // r9
  unsigned __int8 v14; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // r13
  int v17; // edx
  _QWORD *v18; // rcx
  _DWORD *v19; // r8
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v21; // cl
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  int v26; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v7) = 4;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  v26 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  if ( *(int *)(a1 + 4) > 0 )
  {
    KiWaitSatisfyOther(a1);
    *(_BYTE *)(a3 + 17) = 5;
    v12 = (_QWORD *)(a2 + 8);
    *(_QWORD *)a3 = v13;
    v14 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v14 <= 0xFu )
    {
      v19 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v14 != 2 )
        v7 = (-1LL << (v14 + 1)) & 4;
      v19[5] |= v7;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a3, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(a2);
    if ( (_QWORD *)*v12 == v12
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a2 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a2, a3) )
    {
      v17 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v17 + 1;
      v18 = *(_QWORD **)(a2 + 32);
      if ( *v18 != a2 + 24 )
LABEL_29:
        __fastfail(3u);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v18;
      *v18 = a3;
      *(_QWORD *)(a2 + 32) = a3;
      if ( !v17 && (_QWORD *)*v12 != v12 )
        KiWakeOtherQueueWaiters(CurrentPrcb, a2);
    }
    else
    {
      *(_QWORD *)a3 = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, (_PROCESSOR_NUMBER)1, 0, CurrentIrql);
    return 1;
  }
  v8 = *(_QWORD **)(a1 + 16);
  if ( *v8 != a1 + 8 )
    goto LABEL_29;
  *(_QWORD *)a3 = a1 + 8;
  *(_QWORD *)(a3 + 8) = v8;
  *v8 = a3;
  *(_QWORD *)(a1 + 16) = a3;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (_DWORD)KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v25 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  __writecr8(CurrentIrql);
  return 0;
}
