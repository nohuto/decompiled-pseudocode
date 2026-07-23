/*
 * XREFs of MmDecodeExportSection @ 0x14034BC6C
 * Callers:
 *     RtlFindExportedRoutineByName @ 0x1406AD420 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageImports @ 0x1407BCD10 (MiResolveImageImports.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiGetExportSectionExtents @ 0x14034BFA8 (MiGetExportSectionExtents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char MmDecodeExportSection()
{
  $C71981A45BEB2B45F82C232A7085991E *v0; // rax
  __int64 v1; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v3; // rsi
  __int64 v4; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned int v15; // [rsp+40h] [rbp+8h]
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0LL;
  LODWORD(v0) = MiGetExportSectionExtents(&v16);
  if ( (_DWORD)v0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v3 = KeGetCurrentThread();
    v4 = 0LL;
    _disable();
    AbEntrySummary = v3->AbEntrySummary;
    if ( v3->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v1, (__int64)v3)) != 0 )
    {
      _BitScanForward(&v6, AbEntrySummary);
      v15 = v6;
      v3->AbEntrySummary = AbEntrySummary & ~(1 << v6);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v4 = (__int64)(&v3[1].Process + 12 * v15);
      if ( (unsigned __int64)&qword_140C658E8 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v4 + 8) = SessionId;
      *(_QWORD *)v4 = (unsigned __int64)&qword_140C658E8 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C658E8, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C658E8, v4, (__int64)&qword_140C658E8);
    if ( v4 )
      *(_BYTE *)(v4 + 18) = 1;
    --dword_140C658F0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C658E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C658E8);
    LOBYTE(v0) = KeAbPostRelease((ULONG_PTR)&qword_140C658E8);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v0 = &CurrentThread->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v0->ApcState.ApcListHead[0].Flink != v0 )
        LOBYTE(v0) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v0;
}
