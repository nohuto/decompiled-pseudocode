/*
 * XREFs of ExpDeleteTimer @ 0x140360A70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     PsRemoveVirtualizedTimer @ 0x140360B10 (PsRemoveVirtualizedTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // rsi
  KIRQL v3; // al
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v8; // r15
  struct _KTHREAD *v9; // rbp
  __int64 v10; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  int SessionId; // eax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v25; // r9
  int v26; // eax
  _DWORD *v27; // r8
  bool v28; // zf
  unsigned int v29; // [rsp+50h] [rbp+8h]

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( a1[4].Header.WaitListHead.Flink )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(_QWORD **)&a1[4].Header.Lock;
    --CurrentThread->KernelApcDisable;
    v9 = KeGetCurrentThread();
    v10 = 0LL;
    _disable();
    AbEntrySummary = v9->AbEntrySummary;
    if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)a1, (__int64)v9)) != 0 )
    {
      _BitScanForward(&v12, AbEntrySummary);
      v29 = v12;
      v9->AbEntrySummary = AbEntrySummary & ~(1 << v12);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v15 = *SchedulerAssist;
        do
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange(SchedulerAssist, v15 & 0xFFDFFFFF, v15);
        }
        while ( v16 != v15 );
        if ( (v15 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v10 = (__int64)(&v9[1].Process + 12 * v29);
      if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C65AE8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v10 + 8) = SessionId;
      *(_QWORD *)v10 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v10, (__int64)&ExpWakeTimerLock);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    Flink = p_WaitListHead->Flink;
    Blink = p_WaitListHead->Blink;
    if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_WaitListHead->Flink = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v8 )
      PoDestroyReasonContext(v8, v21, v22, v23);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v5 = v3;
  if ( a1[4].DueTime.QuadPart )
  {
    LOBYTE(v4) = v3;
    PsRemoveVirtualizedTimer(&a1[4].DueTime, &a1[4].TimerListEntry, &a1[1], v4);
  }
  else
  {
    KxReleaseSpinLock((volatile signed __int64 *)&a1[1].Header.Lock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v5 <= 0xFu
        && CurrentIrql >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v27 = v25->SchedulerAssist;
        v28 = (v26 & v27[5]) == 0;
        v27[5] &= v26;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    __writecr8(v5);
  }
  return KeCancelTimer(a1);
}
