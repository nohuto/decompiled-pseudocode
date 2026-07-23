/*
 * XREFs of MiReferenceRemovePartition @ 0x14061C2FC
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140A2D4C0 (MmRemovePhysicalMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReferencePagePartition @ 0x140629B54 (MiReferencePagePartition.c)
 */

__int64 __fastcall MiReferenceRemovePartition(unsigned __int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int SessionId; // eax
  __int64 v14; // rax
  unsigned int v15; // ebx
  bool v16; // zf
  unsigned int v18; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  AbEntrySummary = v5->AbEntrySummary;
  if ( v5->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, (__int64)v5)) != 0 )
  {
    _BitScanForward(&v8, AbEntrySummary);
    v18 = v8;
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v6 = (unsigned __int64)(&v5[1].Process + 12 * v18);
    if ( (unsigned __int64)&qword_140C6B518 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)&qword_140C6B518 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B518, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B518, 0LL, v6, (__int64)&qword_140C6B518);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  if ( a1 <= qword_140C65BA0 && _bittest64((const signed __int64 *)(48 * a1 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v14 = MiReferencePagePartition(48 * a1 - 0x220000000000LL, 0LL);
    if ( v14 )
    {
      *a2 = v14;
      v15 = 0;
    }
    else
    {
      v15 = -1073741558;
    }
  }
  else
  {
    v15 = -1073741811;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B518, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C6B518);
  KeAbPostRelease((ULONG_PTR)&qword_140C6B518);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v15;
}
