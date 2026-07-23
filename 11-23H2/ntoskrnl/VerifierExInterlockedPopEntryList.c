/*
 * XREFs of VerifierExInterlockedPopEntryList @ 0x140ACE140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExInterlockedPopEntryList()
{
  return ((__int64 (*)(void))pXdvExInterlockedPopEntryList)();
}
