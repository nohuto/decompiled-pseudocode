/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x180080D00
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180064110 (RtlpHpHeapExtendContext.c)
 *     RtlCompleteProcessCloning @ 0x18009DFE0 (RtlCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
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
