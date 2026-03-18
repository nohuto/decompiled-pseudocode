/*
 * XREFs of VerifierZwEnumerateDriverEntries @ 0x140AE5A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwEnumerateDriverEntries()
{
  return ((__int64 (*)(void))pXdvZwEnumerateDriverEntries)();
}
