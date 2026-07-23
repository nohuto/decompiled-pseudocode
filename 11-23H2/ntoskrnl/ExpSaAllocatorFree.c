/*
 * XREFs of ExpSaAllocatorFree @ 0x14035CB14
 * Callers:
 *     ExSaFree @ 0x14035CA7C (ExSaFree.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035CD34 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x1403D5C98 (ExpSaAllocatorOptimizeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

signed __int32 __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // r14
  char v10; // r12
  unsigned int v11; // eax
  unsigned int v12; // ecx
  struct _KPRCB *v13; // rcx
  signed __int32 *v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  unsigned int AbEntrySummary; // eax
  unsigned int v22; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  int SessionId; // eax
  __int64 *v28; // rcx
  __int64 **v29; // rax
  __int64 **v30; // rcx
  unsigned int v31; // [rsp+20h] [rbp-48h]
  unsigned int v32; // [rsp+78h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( *((_DWORD *)a2 + 10) == 1 )
  {
    v10 = 1;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward(&v22, AbEntrySummary);
      v32 = v22;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v22);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v25 = *SchedulerAssist;
        do
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange(SchedulerAssist, v25 & 0xFFDFFFFF, v25);
        }
        while ( v26 != v25 );
        if ( (v25 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v9 = (__int64)(&CurrentThread[1].Process + 12 * v32);
      if ( BugCheckParameter2 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v9 + 8) = SessionId;
      *(_QWORD *)v9 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    *((_DWORD *)a2 + 10) = 0;
    v28 = (__int64 *)*a2;
    v29 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2
      || *v29 != a2
      || (*v29 = v28,
          v28[1] = (__int64)v29,
          v30 = *(__int64 ***)(BugCheckParameter2 + 16),
          *v30 != (__int64 *)(BugCheckParameter2 + 8)) )
    {
      __fastfail(3u);
    }
    *a2 = BugCheckParameter2 + 8;
    a2[1] = (__int64)v30;
    *v30 = a2;
    *(_QWORD *)(BugCheckParameter2 + 16) = a2;
  }
  else
  {
    v10 = 0;
    _disable();
    v11 = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (v11 = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward(&v12, v11);
      v31 = v12;
      CurrentThread->AbEntrySummary = v11 & ~(1 << v12);
      v13 = KeGetCurrentPrcb();
      v14 = (signed __int32 *)v13->SchedulerAssist;
      if ( v14 )
      {
        _m_prefetchw(v14);
        v19 = *v14;
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange(v14, v19 & 0xFFDFFFFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
      _enable();
      v9 = (__int64)(&CurrentThread[1].Process + 12 * v31);
      if ( BugCheckParameter2 - qword_140C659E8 < 0x8000000000LL )
        v15 = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        v15 = -1;
      *(_DWORD *)(v9 + 8) = v15;
      *(_QWORD *)v9 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0LL, v9, BugCheckParameter2);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    LOBYTE(v17) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v17 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v17 & 2) != 0 )
  {
    if ( !v10 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
LABEL_15:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      return KeAbPostRelease(BugCheckParameter2);
    }
  }
  else if ( !v10 )
  {
    goto LABEL_15;
  }
  ExpSaAllocatorOptimizeList(BugCheckParameter2, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  return KeAbPostRelease(BugCheckParameter2);
}
