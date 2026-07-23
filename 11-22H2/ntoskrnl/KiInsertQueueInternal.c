/*
 * XREFs of KiInsertQueueInternal @ 0x14031AB60
 * Callers:
 *     KiWakeOtherQueueWaiters @ 0x14031AAB8 (KiWakeOtherQueueWaiters.c)
 *     KeReleaseMutantEx @ 0x14040FD6C (KeReleaseMutantEx.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140251F10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402B8750 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AAB8 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056EE70 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FCD9C (EtwTraceEnqueueWork.c)
 */

char __fastcall KiInsertQueueInternal(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  int v11; // edx
  __int64 **v12; // rcx
  __int64 v13; // r8

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v13) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, a2, v13);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( (_QWORD *)*v2 == v2
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || (LOBYTE(v8) = KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2), !(_BYTE)v8) )
  {
    v11 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v11 + 1;
    v8 = a1 + 24;
    v12 = *(__int64 ***)(a1 + 32);
    if ( *v12 != (__int64 *)(a1 + 24) )
      __fastfail(3u);
    *a2 = v8;
    a2[1] = (__int64)v12;
    *v12 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v11 && (_QWORD *)*v2 != v2 )
      LOBYTE(v8) = KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1);
  }
  else
  {
    *a2 = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v8;
}
