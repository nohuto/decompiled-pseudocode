/*
 * XREFs of VerifierKeReleaseMutex @ 0x140AD56B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseMutex()
{
  return ((__int64 (*)(void))pXdvKeReleaseMutex)();
}
