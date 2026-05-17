/*
 * XREFs of RtlpOptimizeSRWLockList @ 0x180069E18
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x180069D38 (RtlpQueueWaitBlockToSRWLock.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpOptimizeSRWLockList(volatile signed __int64 *a1, signed __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  signed __int64 v7; // rtt

  result = a2;
  if ( (a2 & 1) == 0 )
    return RtlpWakeSRWLock(a1, result, 0);
  while ( 1 )
  {
    v4 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !*(_QWORD *)((result & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
    {
      do
      {
        v5 = v4;
        v4 = (_QWORD *)*v4;
        v4[2] = v5;
        v6 = v4[1];
      }
      while ( !v6 );
      if ( v4 != (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v6;
    }
    v7 = result;
    result = _InterlockedCompareExchange64(a1, result - 4, result);
    if ( v7 == result )
      break;
    if ( (result & 1) == 0 )
      return RtlpWakeSRWLock(a1, result, 0);
  }
  return result;
}
