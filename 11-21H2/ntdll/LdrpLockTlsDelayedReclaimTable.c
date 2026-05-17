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
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r9
  char *v3; // rbx
  __int64 v4; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v3 = (char *)&unk_18017ACC8;
  v4 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v3, v0, v1, v2);
    v3 += 16;
    --v4;
  }
  while ( v4 );
}
