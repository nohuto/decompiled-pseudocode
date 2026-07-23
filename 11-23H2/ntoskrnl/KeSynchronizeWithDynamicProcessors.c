/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x1407D5F5C
 * Callers:
 *     ExpGetNextProcessThread @ 0x140742A28 (ExpGetNextProcessThread.c)
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x14094419C (IoEnableIrpCredits.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A00A60 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
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
