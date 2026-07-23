/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x14022F9A0
 * Callers:
 *     MiUnlockLoaderEntry @ 0x140292368 (MiUnlockLoaderEntry.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402FD660 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402FD750 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlInsertPerFileContext @ 0x140363E30 (FsRtlInsertPerFileContext.c)
 *     FsRtlRemovePerFileContext @ 0x14053D500 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x14053D600 (FsRtlRemovePerStreamContext.c)
 *     MiFreePhysicalPages @ 0x14064AA90 (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x14064C358 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14064C3D8 (MiUnlockAweVadsExclusive.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407915B0 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1407BB0F0 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14024B620 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x1403180D0 (KiAbThreadRemoveBoostsSlow.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1403CFEA0 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

signed __int32 __fastcall ExReleaseAutoExpandPushLockExclusive(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  int v4; // eax
  int v5; // ecx
  signed __int32 result; // eax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // edx
  char *p_Process; // rdi
  unsigned int i; // r8d
  int v11; // ebx
  struct _KPRCB *v12; // rcx
  signed __int32 *v13; // r8
  signed __int32 v14; // ett
  struct _KPRCB *v15; // rcx
  signed __int32 *v16; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  signed __int32 v21; // ett

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v4 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
  }
  else
  {
    v5 = *(_DWORD *)(BugCheckParameter2 + 12);
    if ( (v5 & 0xF0000u) < 0xF0000 )
      *(_DWORD *)(BugCheckParameter2 + 12) = v5 + 0x10000;
  }
  result = ExReleasePushLockEx(BugCheckParameter2, 2uLL);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( BugCheckParameter2 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (char *)&CurrentThread[1].Process;
    for ( i = 0; i < 6; ++i )
    {
      if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && p_Process[18]
        && (*(_DWORD *)p_Process & 1) == 0
        && *((_DWORD *)p_Process + 2) == SessionId )
      {
        p_Process[18] = 0;
        if ( *(__int64 *)p_Process < 0 )
        {
          *p_Process |= 2u;
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v19 = *SchedulerAssist;
            do
            {
              v20 = v19;
              v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
            }
            while ( v20 != v19 );
            if ( (v19 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          _enable();
          KiAbEntryRemoveFromTree(p_Process);
          _disable();
        }
        v11 = *((_DWORD *)p_Process + 22);
        *((_DWORD *)p_Process + 22) = 0;
        p_Process[17] = 0;
        *(_QWORD *)p_Process = 0LL;
        result = CurrentThread->AbEntrySummary | (1 << p_Process[16]);
        CurrentThread->AbEntrySummary = result;
        v12 = KeGetCurrentPrcb();
        v13 = (signed __int32 *)v12->SchedulerAssist;
        if ( v13 )
        {
          _m_prefetchw(v13);
          result = *v13;
          do
          {
            v14 = result;
            result = _InterlockedCompareExchange(v13, result & 0xFFDFFFFF, result);
          }
          while ( v14 != result );
          if ( (result & 0x200000) != 0 )
            result = KiRemoveSystemWorkPriorityKick(v12);
        }
        _enable();
        if ( v11 )
          return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread);
        return result;
      }
      p_Process += 96;
    }
    result = *(&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    v15 = KeGetCurrentPrcb();
    v16 = (signed __int32 *)v15->SchedulerAssist;
    if ( v16 )
    {
      _m_prefetchw(v16);
      result = *v16;
      do
      {
        v21 = result;
        result = _InterlockedCompareExchange(v16, result & 0xFFDFFFFF, result);
      }
      while ( v21 != result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(v15);
    }
    _enable();
  }
  return result;
}
