/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x180081370
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180063FE0 (RtlpHpHeapExtendContext.c)
 *     RtlCompleteProcessCloning @ 0x18009E920 (RtlCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E2930 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlAcquireReleaseSRWLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v3, 0);
  result = *a1;
  if ( (*a1 & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(a1);
    return RtlReleaseSRWLockExclusive(a1);
  }
  return result;
}
