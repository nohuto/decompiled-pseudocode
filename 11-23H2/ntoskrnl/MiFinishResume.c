/*
 * XREFs of MiFinishResume @ 0x140626E20
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiReferencePageRuns @ 0x140357880 (MiReferencePageRuns.c)
 *     MiDereferencePageRunsEx @ 0x140357D84 (MiDereferencePageRunsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiIterateOverPartitions @ 0x14062995C (MiIterateOverPartitions.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbp
  struct _KTHREAD *v6; // rdi
  __int64 v7; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int SessionId; // eax
  bool v16; // zf
  unsigned int v18; // [rsp+50h] [rbp+8h]

  v2 = MiReferencePageRuns((__int64)MiSystemPartition, 0);
  CurrentThread = KeGetCurrentThread();
  v5 = v2;
  --CurrentThread->SpecialApcDisable;
  v6 = KeGetCurrentThread();
  v7 = 0LL;
  _disable();
  AbEntrySummary = v6->AbEntrySummary;
  if ( v6->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v3, (__int64)v6)) != 0 )
  {
    _BitScanForward(&v9, AbEntrySummary);
    v18 = v9;
    v6->AbEntrySummary = AbEntrySummary & ~(1 << v9);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v7 = (__int64)(&v6[1].Process + 12 * v18);
    if ( (unsigned __int64)&qword_140C67388 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = (unsigned __int64)&qword_140C67388 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67388, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C67388, v7, (__int64)&qword_140C67388);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  MiIterateOverPartitions(MiMirrorPurgePartitionPages, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67388, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67388);
  KeAbPostRelease((ULONG_PTR)&qword_140C67388);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v5 )
    MiDereferencePageRunsEx(v5, 1);
  _InterlockedAdd(&dword_140C698E0, 0xFFFFFFFF);
  stru_140C67E68.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140C67E50, 0, 0);
}
