/*
 * XREFs of VerifierZwWaitForSingleObject @ 0x140AE6AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwWaitForSingleObject()
{
  return ((__int64 (*)(void))pXdvZwWaitForSingleObject)();
}
