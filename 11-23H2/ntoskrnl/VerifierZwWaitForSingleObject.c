/*
 * XREFs of VerifierZwWaitForSingleObject @ 0x140AE6AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwWaitForSingleObject()
{
  return ((__int64 (*)(void))pXdvZwWaitForSingleObject)();
}
