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

void __cdecl RtlAcquireReleaseSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  if ( (SRWLock->Value & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(SRWLock);
    RtlReleaseSRWLockExclusive(SRWLock);
  }
}
