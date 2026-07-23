/*
 * XREFs of RtlpCSparseBitmapLock @ 0x18004ADB4
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x18004ACD0 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180064DF8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FD7E0 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpCSparseBitmapLock(_RTL_SRWLOCK *a1, int a2, __int64 a3)
{
  _RTL_SRWLOCK *v5; // rcx

  v5 = a1 + 3;
  if ( a2 == 1 )
    RtlAcquireSRWLockExclusive(v5);
  else
    RtlAcquireSRWLockShared(v5);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = a2;
}
