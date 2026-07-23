/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x14051C7A0
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x1406131B0 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
