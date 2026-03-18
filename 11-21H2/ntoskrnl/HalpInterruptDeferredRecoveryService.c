/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x14051F590
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x140645AB0 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
