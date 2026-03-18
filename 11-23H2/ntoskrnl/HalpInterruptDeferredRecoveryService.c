/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x14051C250
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x140612C60 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
