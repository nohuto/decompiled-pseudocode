/*
 * XREFs of VfKeIrqlLogLower @ 0x140AD5CB4
 * Callers:
 *     VerifierKeLowerIrql @ 0x140AC0380 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140AC03F0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140AC0470 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x140ACF8B0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140AD5AF0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140AD5B40 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     VerifierExReleaseFastMutex @ 0x140ADD250 (VerifierExReleaseFastMutex.c)
 * Callees:
 *     ViKeIrqlLogCommon @ 0x140AC0682 (ViKeIrqlLogCommon.c)
 */

void __fastcall VfKeIrqlLogLower(__int64 a1)
{
  if ( ViIrqlTrimAndLog )
  {
    if ( a1 )
      ViKeIrqlLogCommon(a1, 1u);
  }
}
