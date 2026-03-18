/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140AD5DD8
 * Callers:
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140AC0280 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140ACF600 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140AD5210 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140AD5310 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140AD53B0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeSynchronizeExecution @ 0x140AD5750 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140AD57D0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140AD5870 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD5A30 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD5D1C (ViKeAcquireSpinLockCommon.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBD0 (KeAreInterruptsEnabled.c)
 *     VfKeIrqlLogRaise @ 0x140AD5CE0 (VfKeIrqlLogRaise.c)
 *     MmVerifierTrimMemory @ 0x140AE8100 (MmVerifierTrimMemory.c)
 */

char *__fastcall ViKeIrqlLogAndTrimMemory(char a1)
{
  char CurrentIrql; // di
  char *v4; // rsi

  if ( !ViIrqlTrimAndLog )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v4 = VfKeIrqlLogRaise(CurrentIrql, a1);
  if ( KeAreInterruptsEnabled() && (unsigned __int8)CurrentIrql < 2u && (unsigned __int8)a1 >= 2u )
  {
    if ( ViIrqlTrimAndLog )
      MmVerifierTrimMemory();
  }
  return v4;
}
