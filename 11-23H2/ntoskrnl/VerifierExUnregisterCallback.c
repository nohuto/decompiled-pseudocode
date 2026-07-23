/*
 * XREFs of VerifierExUnregisterCallback @ 0x140ACE2E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExUnregisterCallback()
{
  return ((__int64 (*)(void))pXdvExUnregisterCallback)();
}
