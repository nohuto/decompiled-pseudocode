/*
 * XREFs of MiLockDynamicMemoryNestedExclusive @ 0x14061BC14
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140A2CEFC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiLockDynamicMemoryNestedExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned int v4; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int SessionId; // eax
  unsigned int v10; // [rsp+30h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  LODWORD(result) = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (result = KiAbTryReclaimOrphanedEntries(a1, (__int64)CurrentThread), (_DWORD)result) )
  {
    _BitScanForward(&v4, result);
    v10 = v4;
    CurrentThread->AbEntrySummary = result & ~(1 << v4);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v7 = *SchedulerAssist;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v2 = (__int64)(&CurrentThread[1].Process + 12 * v10);
    if ( (unsigned __int64)&qword_140C6B518 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    result = (unsigned __int64)&qword_140C6B518 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v2 = (unsigned __int64)&qword_140C6B518 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C6B518, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C6B518, v2, (__int64)&qword_140C6B518);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
