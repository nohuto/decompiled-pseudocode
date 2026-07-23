/*
 * XREFs of PspLockJobsAndProcessExclusive @ 0x14069F70C
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     PspLockJobChain @ 0x1406A0CC8 (PspLockJobChain.c)
 */

void __fastcall PspLockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // esi
  unsigned int i; // ebx
  __int64 v7; // rcx

  --*(_WORD *)(a3 + 486);
  v4 = a4 & 1;
  if ( a2 )
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
  for ( i = 0; i < *a1; ++i )
  {
    v7 = *(_QWORD *)&a1[4 * i + 2];
    if ( LOBYTE(a1[4 * i + 4]) )
      PspLockJobChain(v7, 0LL, v4);
    else
      ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 56), 1u);
  }
}
