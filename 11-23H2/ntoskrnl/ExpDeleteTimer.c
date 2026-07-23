/*
 * XREFs of ExpDeleteTimer @ 0x140361260
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     PoDestroyReasonContext @ 0x14032D55C (PoDestroyReasonContext.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     PsRemoveVirtualizedTimer @ 0x140361300 (PsRemoveVirtualizedTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v22; // r9
  int v23; // eax
  _DWORD *v24; // r8
  bool v25; // zf
  unsigned int v26; // [rsp+50h] [rbp+8h]

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
      v26 = v12;
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
      v10 = (__int64)(&v9[1].Process + 12 * v26);
      if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C659E8 < 0x8000000000LL )
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
      PoDestroyReasonContext(v8);
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
        v22 = KeGetCurrentPrcb();
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v24 = v22->SchedulerAssist;
        v25 = (v23 & v24[5]) == 0;
        v24[5] &= v23;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
    __writecr8(v5);
  }
  return KeCancelTimer(a1);
}
