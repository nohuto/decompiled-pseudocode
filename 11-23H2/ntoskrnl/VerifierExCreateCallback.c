/*
 * XREFs of VerifierExCreateCallback @ 0x140ACE050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExCreateCallback()
{
  return ((__int64 (*)(void))pXdvExCreateCallback)();
}
