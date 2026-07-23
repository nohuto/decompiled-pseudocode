/*
 * XREFs of VerifierKeRemoveQueueDpc @ 0x140AD56E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeRemoveQueueDpc()
{
  return ((__int64 (*)(void))pXdvKeRemoveQueueDpc)();
}
