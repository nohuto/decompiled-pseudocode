/*
 * XREFs of LdrpLockTlsDelayedReclaimTable @ 0x1800E179C
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009EA60 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2930 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

void LdrpLockTlsDelayedReclaimTable()
{
  _RTL_SRWLOCK *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v0 = &stru_180188008;
  v1 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
}
