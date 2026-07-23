/*
 * XREFs of VerifierZwEnumerateDriverEntries @ 0x140AE59F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwEnumerateDriverEntries()
{
  return ((__int64 (*)(void))pXdvZwEnumerateDriverEntries)();
}
