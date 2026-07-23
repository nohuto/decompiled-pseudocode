/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x140460830
 * Callers:
 *     IopQueueIrpToFileObject @ 0x14022E530 (IopQueueIrpToFileObject.c)
 *     IopQueueThreadIrp @ 0x14022EE70 (IopQueueThreadIrp.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x1402AF9C0 (IopDequeueIrpFromThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AFBD0 (IopCancelIrpsInFileObjectList.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     KiCallInterruptServiceRoutine @ 0x140324BE0 (KiCallInterruptServiceRoutine.c)
 *     PsGetThreadProperty @ 0x140332780 (PsGetThreadProperty.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140250FE0 (KxWaitForSpinLockAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x140601254 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // ebp
  int v4; // r14d
  int v5; // r9d
  int v6; // edi
  char v7; // si
  unsigned __int64 v8; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = 0;
  v5 = 0;
  v6 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v7 = 1;
    result = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = result;
  }
  else
  {
    v7 = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    result = KxWaitForSpinLockAndAcquire(a1);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v5 = result;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v7 )
  {
    v8 = __rdtsc();
    return PerfLogSpinLockAcquire(v6, v8, (int)v8 - v4, v5, InterruptCount, 0);
  }
  return result;
}
