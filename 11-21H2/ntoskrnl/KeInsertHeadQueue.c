/*
 * XREFs of KeInsertHeadQueue @ 0x140570CF0
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertHeadQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  PLIST_ENTRY v4; // rdi
  LIST_ENTRY *p_WaitListHead; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  LONG SignalState; // r12d
  LONG v13; // edx
  LIST_ENTRY *p_EntryListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx

  v4 = Entry;
  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    Entry = (PLIST_ENTRY)((-1LL << (CurrentIrql + 1)) & 4);
    v2 = (unsigned int)Entry | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v10) = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v4, v10);
  }
  KiAcquireKobjectLockSafe(&Queue->Header.Lock, (__int64)Entry, v2, (__int64)SchedulerAssist);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)Queue, (__int64)v4, v11) )
  {
    v13 = Queue->Header.SignalState;
    Queue->Header.SignalState = v13 + 1;
    p_EntryListHead = &Queue->EntryListHead;
    Flink = Queue->EntryListHead.Flink;
    if ( Flink->Blink != &Queue->EntryListHead )
      __fastfail(3u);
    v4->Flink = Flink;
    v4->Blink = p_EntryListHead;
    Flink->Blink = v4;
    p_EntryListHead->Flink = v4;
    if ( !v13 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)Queue);
  }
  else
  {
    v4->Flink = 0LL;
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return SignalState;
}
