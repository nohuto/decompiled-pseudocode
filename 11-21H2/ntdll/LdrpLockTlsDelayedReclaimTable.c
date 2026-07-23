/*
 * XREFs of LdrpLockTlsDelayedReclaimTable @ 0x1800E1C5C
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x1800A2FA0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2990 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 */

void LdrpLockTlsDelayedReclaimTable()
{
  _RTL_SRWLOCK *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v0 = &stru_18017ACC8;
  v1 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
}
