/*
 * XREFs of ExTryAcquirePushLockSharedEx @ 0x140220540
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x140220664 (ExfTryAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int AbEntrySummary; // eax
  __int64 v7; // rcx
  int SessionId; // eax

  v2 = 0LL;
  v3 = BugCheckParameter1;
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
      _BitScanForward((unsigned int *)&v7, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
      _enable();
      v2 = (__int64)(&CurrentThread[1].Process + 12 * v7);
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v2 + 8) = SessionId;
      *(_QWORD *)v2 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockSharedEx(BugCheckParameter2, v3) )
  {
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    return 1;
  }
  else
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2);
    return 0;
  }
}
