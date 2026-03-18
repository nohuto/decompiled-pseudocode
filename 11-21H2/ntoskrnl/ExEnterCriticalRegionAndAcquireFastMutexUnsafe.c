/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140359B80
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 */

__int64 __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  int SessionId; // eax

  result = (__int64)KeGetCurrentThread();
  --*(_WORD *)(result + 484);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  _disable();
  LODWORD(result) = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (result = KiAbTryReclaimOrphanedEntries(a1, (__int64)CurrentThread), (_DWORD)result) )
  {
    _BitScanForward((unsigned int *)&v5, result);
    CurrentThread->AbEntrySummary = result & ~(1 << v5);
    _enable();
    v3 = (__int64)(&CurrentThread[1].Process + 12 * v5);
    if ( (unsigned __int64)(a1 - qword_140C50630) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    result = a1 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v3 = a1 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_interlockedbittestandreset((volatile signed __int32 *)a1, 0) )
    result = ExpAcquireFastMutexContended(a1, v3);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  *(_QWORD *)(a1 + 8) = CurrentThread;
  return result;
}
