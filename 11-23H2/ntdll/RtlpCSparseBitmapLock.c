/*
 * XREFs of RtlpCSparseBitmapLock @ 0x18004AC54
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x18004AB70 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180064CC8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlLockHeapManagerForCloning @ 0x1800FEBF0 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpCSparseBitmapLock(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  volatile signed __int64 *v6; // rcx
  int v7; // edi

  v6 = (volatile signed __int64 *)(a1 + 24);
  v7 = a2;
  if ( (_DWORD)a2 == 1 )
    RtlAcquireSRWLockExclusive(v6);
  else
    RtlAcquireSRWLockShared(v6, a2, a3, a4);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = v7;
}
