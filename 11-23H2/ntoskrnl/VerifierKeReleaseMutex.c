/*
 * XREFs of VerifierKeReleaseMutex @ 0x140AD56A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseMutex()
{
  return ((__int64 (*)(void))pXdvKeReleaseMutex)();
}
