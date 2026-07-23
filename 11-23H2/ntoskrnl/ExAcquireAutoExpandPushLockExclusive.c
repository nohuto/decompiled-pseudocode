/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x14022F850
 * Callers:
 *     MiLockLoaderEntry @ 0x1402923F4 (MiLockLoaderEntry.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402FD660 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402FD750 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerFileContext @ 0x140363E30 (FsRtlInsertPerFileContext.c)
 *     FsRtlRemovePerFileContext @ 0x14053D500 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x14053D600 (FsRtlRemovePerStreamContext.c)
 *     MiFreePhysicalPages @ 0x14064AA90 (MiFreePhysicalPages.c)
 *     MiLockAwePagesExclusive @ 0x14064B540 (MiLockAwePagesExclusive.c)
 *     MiLockAweVadsExclusive @ 0x14064B588 (MiLockAweVadsExclusive.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407915B0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1407BB0F0 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403D01AC (ExpAcquireFannedOutPushLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 result; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v13; // [rsp+58h] [rbp+10h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, CurrentThread)) != 0 )
    {
      _BitScanForward(&v6, AbEntrySummary);
      v13 = v6;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v2 = (__int64)(&CurrentThread[1].Process + 12 * v13);
      if ( BugCheckParameter2 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v2 + 8) = SessionId;
      *(_QWORD *)v2 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, BugCheckParameter2);
  result = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (result & 1) != 0 )
    result = ExpAcquireFannedOutPushLockExclusive((unsigned int)result & 0xFFFFFFF8, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
