/*
 * XREFs of TpSetPoolThreadCpuSets @ 0x180125810
 * Callers:
 *     TpAllocPoolInternal @ 0x18004C170 (TpAllocPoolInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlNumberOfSetBits @ 0x18007FD00 (RtlNumberOfSetBits.c)
 *     NtSetInformationWorkerFactory @ 0x1800A23A0 (NtSetInformationWorkerFactory.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1801258C0 (TppAdjustRunningThreadGoalWithLock.c)
 */

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v6; // rsi
  int v7; // r14d
  int v8; // ebp
  int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  v7 = 8 * a3;
  v8 = NtSetInformationWorkerFactory();
  if ( v8 >= 0 )
  {
    v10 = v7;
    v11 = a2;
    *(_DWORD *)(a1 + 440) = RtlNumberOfSetBits((unsigned int *)&v10);
    TppAdjustRunningThreadGoalWithLock(a1);
  }
  RtlReleaseSRWLockExclusive(v6);
  return (unsigned int)v8;
}
