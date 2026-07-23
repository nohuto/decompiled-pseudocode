/*
 * XREFs of MiSetVadDeleted @ 0x140289B14
 * Callers:
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A322E8 (MiCoalescePlaceholderAllocations.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47FA8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiSetVadFlags @ 0x140287940 (MiSetVadFlags.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiSetVadDeleted(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbx
  ULONG_PTR v4; // rbx
  __int64 v5; // rdi
  struct _KTHREAD *v6; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  $C71981A45BEB2B45F82C232A7085991E *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  unsigned int v21; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  v5 = 0LL;
  v6 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v6->AbEntrySummary;
  if ( v6->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, v6)) != 0 )
  {
    _BitScanForward(&v8, AbEntrySummary);
    v21 = v8;
    v6->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v5 = (__int64)(&v6[1].Process + 12 * v21);
    if ( v4 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v6->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  MiSetVadFlags(a1, 2LL, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  LODWORD(v12) = KeAbPostRelease(v4);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v12 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LODWORD(v12) = KiCheckForKernelApcDelivery(v14, v13, v15, v16);
  }
  return (int)v12;
}
