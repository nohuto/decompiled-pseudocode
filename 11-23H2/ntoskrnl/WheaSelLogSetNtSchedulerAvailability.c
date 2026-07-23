/*
 * XREFs of WheaSelLogSetNtSchedulerAvailability @ 0x1406106EC
 * Callers:
 *     WheaSelLogInitialize @ 0x140B5320C (WheaSelLogInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14061084C (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 */

_QWORD *__fastcall WheaSelLogSetNtSchedulerAvailability(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v2; // rsi
  __int64 v3; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  int SessionId; // eax
  unsigned int v13; // [rsp+40h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = KeGetCurrentThread();
  v3 = 0LL;
  _disable();
  AbEntrySummary = v2->AbEntrySummary;
  if ( v2->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, (__int64)v2)) != 0 )
  {
    _BitScanForward(&v5, AbEntrySummary);
    v13 = v5;
    v2->AbEntrySummary = AbEntrySummary & ~(1 << v5);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v8 = *SchedulerAssist;
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(SchedulerAssist, v8 & 0xFFDFFFFF, v8);
      }
      while ( v9 != v8 );
      if ( (v8 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v3 = (__int64)(&v2[1].Process + 12 * v13);
    if ( (unsigned __int64)&WheaIpmiContextLock - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    *(_QWORD *)v3 = (unsigned __int64)&WheaIpmiContextLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&WheaIpmiContextLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&WheaIpmiContextLock, v3, (__int64)&WheaIpmiContextLock);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  WheapSelLogSetNtSchedulerAvailabilityNoLock();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheaIpmiContextLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheaIpmiContextLock);
  KeAbPostRelease((ULONG_PTR)&WheaIpmiContextLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
