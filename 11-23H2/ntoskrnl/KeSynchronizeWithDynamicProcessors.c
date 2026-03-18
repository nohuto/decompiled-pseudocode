/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x1407D5C8C
 * Callers:
 *     ExpGetNextProcessThread @ 0x140742838 (ExpGetNextProcessThread.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x140943F9C (IoEnableIrpCredits.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A007D0 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 */

void KeSynchronizeWithDynamicProcessors()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v0, 0);
    if ( (KiDynamicProcessorLock.Count & 1) == 0 )
    {
      ExAcquireFastMutex(&KiDynamicProcessorLock);
      ExReleaseFastMutex(&KiDynamicProcessorLock);
    }
  }
}
