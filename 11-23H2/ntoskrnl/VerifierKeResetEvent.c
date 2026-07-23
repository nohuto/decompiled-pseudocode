/*
 * XREFs of VerifierKeResetEvent @ 0x140AC04B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeResetEvent()
{
  return ((__int64 (*)(void))pXdvKeResetEvent)();
}
