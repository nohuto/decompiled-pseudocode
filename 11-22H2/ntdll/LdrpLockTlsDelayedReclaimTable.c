/*
 * XREFs of LdrpLockTlsDelayedReclaimTable @ 0x1800E046C
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009E120 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall LdrpLockTlsDelayedReclaimTable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  volatile signed __int64 *v4; // rbx
  __int64 v5; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  v4 = (volatile signed __int64 *)&unk_180184F08;
  v5 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v4);
    v4 += 2;
    --v5;
  }
  while ( v5 );
}
