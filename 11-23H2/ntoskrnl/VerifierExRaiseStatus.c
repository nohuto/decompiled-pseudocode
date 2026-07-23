/*
 * XREFs of VerifierExRaiseStatus @ 0x140ACE200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRaiseStatus()
{
  return ((__int64 (*)(void))pXdvExRaiseStatus)();
}
