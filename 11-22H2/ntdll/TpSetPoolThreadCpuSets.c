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

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, void *a2, int a3)
{
  _RTL_SRWLOCK *v6; // rsi
  ULONG v7; // r14d
  NTSTATUS v8; // ebp
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = (_RTL_SRWLOCK *)(a1 + 72);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v7 = 8 * a3;
  v8 = NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryThreadCpuSets, a2, v7);
  if ( v8 >= 0 )
  {
    BitMapHeader.SizeOfBitMap = v7;
    BitMapHeader.Buffer = (unsigned int *)a2;
    *(_DWORD *)(a1 + 440) = RtlNumberOfSetBits(&BitMapHeader);
    TppAdjustRunningThreadGoalWithLock(a1);
  }
  RtlReleaseSRWLockExclusive(v6);
  return (unsigned int)v8;
}
