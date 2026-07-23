/*
 * XREFs of LdrpLockTlsDelayedReclaimTable @ 0x1800E046C
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009E120 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

void LdrpLockTlsDelayedReclaimTable()
{
  _RTL_SRWLOCK *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v0 = &stru_180184F08;
  v1 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
}
