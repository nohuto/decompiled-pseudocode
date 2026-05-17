/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x1800854A0
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180059290 (RtlpHpHeapExtendContext.c)
 *     RtlCompleteProcessCloning @ 0x1800A2E60 (RtlCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2990 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlAcquireReleaseSRWLockExclusive(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  signed __int64 result; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v6, 0);
  result = *a1;
  if ( (*a1 & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)a1, a2, a3, a4);
    return RtlReleaseSRWLockExclusive(a1);
  }
  return result;
}
