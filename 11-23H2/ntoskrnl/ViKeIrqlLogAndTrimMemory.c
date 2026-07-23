/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140AD5DC8
 * Callers:
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140AC0270 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140ACF5F0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140AD5200 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140AD5300 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140AD53A0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeSynchronizeExecution @ 0x140AD5740 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140AD57C0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140AD5860 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD5A20 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD5D0C (ViKeAcquireSpinLockCommon.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 *     VfKeIrqlLogRaise @ 0x140AD5CD0 (VfKeIrqlLogRaise.c)
 *     MmVerifierTrimMemory @ 0x140AE80F0 (MmVerifierTrimMemory.c)
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
