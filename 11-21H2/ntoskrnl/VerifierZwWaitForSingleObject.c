/*
 * XREFs of VerifierZwWaitForSingleObject @ 0x140AA3B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwWaitForSingleObject()
{
  return ((__int64 (*)(void))pXdvZwWaitForSingleObject)();
}
