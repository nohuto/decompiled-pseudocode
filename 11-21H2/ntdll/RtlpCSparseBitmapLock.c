/*
 * XREFs of RtlpCSparseBitmapLock @ 0x180056664
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x180056588 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180058338 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FDAB4 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpCSparseBitmapLock(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  volatile signed __int64 *v6; // rcx
  int v7; // edi

  v6 = (volatile signed __int64 *)(a1 + 24);
  v7 = a2;
  if ( (_DWORD)a2 == 1 )
    RtlAcquireSRWLockExclusive((unsigned __int64)v6, a2, a3, a4);
  else
    RtlAcquireSRWLockShared(v6);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = v7;
}
