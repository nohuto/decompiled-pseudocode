/*
 * XREFs of MiLockDriverMappings @ 0x14020B4D8
 * Callers:
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiLockDriverMappings(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned int v4; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  unsigned int v10; // [rsp+30h] [rbp+8h]

  --*(_WORD *)(a1 + 486);
  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  LODWORD(result) = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (result = KiAbTryReclaimOrphanedEntries(a1, CurrentThread), (_DWORD)result) )
  {
    _BitScanForward(&v4, result);
    v10 = v4;
    CurrentThread->AbEntrySummary = result & ~(1 << v4);
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v2 = (__int64)(&CurrentThread[1].Process + 12 * v10);
    if ( (unsigned __int64)&qword_140C65938 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    result = (unsigned __int64)&qword_140C65938 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v2 = (unsigned __int64)&qword_140C65938 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65938, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C65938, v2, &qword_140C65938);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
