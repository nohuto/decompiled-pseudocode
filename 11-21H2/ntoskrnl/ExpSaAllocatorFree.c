/*
 * XREFs of ExpSaAllocatorFree @ 0x140360FD4
 * Callers:
 *     ExSaFree @ 0x140360F40 (ExSaFree.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupFreeMemory @ 0x140361290 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x1403A0398 (ExpSaAllocatorOptimizeList.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // r15
  char v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 result; // rax
  struct _KTHREAD *v16; // rbp
  __int64 p_Process; // rbx
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned int AbEntrySummary; // eax
  __int64 v21; // rcx
  int SessionId; // eax
  __int64 *v23; // rax
  __int64 **v24; // rcx
  __int64 **v25; // rcx

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( *((_DWORD *)a2 + 10) == 1 )
  {
    v9 = 1;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    v11 = -1;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v21, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v21);
      _enable();
      v8 = (__int64)(&CurrentThread[1].Process + 12 * v21);
      if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      *(_DWORD *)(v8 + 8) = SessionId;
      *(_QWORD *)v8 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v8, BugCheckParameter2);
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
    *((_DWORD *)a2 + 10) = 0;
    v23 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v24 = (__int64 **)a2[1], *v24 != a2)
      || (*v24 = v23,
          v23[1] = (__int64)v24,
          v25 = *(__int64 ***)(BugCheckParameter2 + 16),
          *v25 != (__int64 *)(BugCheckParameter2 + 8)) )
    {
      __fastfail(3u);
    }
    *a2 = BugCheckParameter2 + 8;
    a2[1] = (__int64)v25;
    *v25 = a2;
    *(_QWORD *)(BugCheckParameter2 + 16) = a2;
  }
  else
  {
    v9 = 0;
    _disable();
    v10 = CurrentThread->AbEntrySummary;
    v11 = -1;
    if ( CurrentThread->AbEntrySummary
      || (v10 = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v12, v10);
      CurrentThread->AbEntrySummary = v10 & ~(1 << v12);
      _enable();
      v8 = (__int64)(&CurrentThread[1].Process + 12 * v12);
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        v13 = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        v13 = -1;
      *(_DWORD *)(v8 + 8) = v13;
      *(_QWORD *)v8 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v8, BugCheckParameter2);
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    LOBYTE(v14) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v14 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v14 & 2) != 0 )
  {
    if ( !v9 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
LABEL_14:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      return KeAbPostRelease(BugCheckParameter2);
    }
  }
  else if ( !v9 )
  {
    goto LABEL_14;
  }
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v16 = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
    v11 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  _disable();
  p_Process = (__int64)&v16[1].Process;
  v18 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v11 )
  {
    ++v18;
    p_Process += 96LL;
    if ( v18 >= 6 )
      goto LABEL_31;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_31:
    result = *((unsigned int *)&v16->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, BugCheckParameter2, v11, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v19 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  result = *(unsigned __int8 *)(p_Process + 16);
  v16->AbEntrySummary |= 1 << result;
  _enable();
  if ( v19 )
    return KiAbThreadRemoveBoostsSlow((ULONG_PTR)v16, BugCheckParameter2, v19);
  return result;
}
