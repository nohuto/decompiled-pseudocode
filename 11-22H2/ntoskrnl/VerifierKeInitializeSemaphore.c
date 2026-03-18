/*
 * XREFs of VerifierKeInitializeSemaphore @ 0x140AD6500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeSemaphore()
{
  return ((__int64 (*)(void))pXdvKeInitializeSemaphore)();
}
