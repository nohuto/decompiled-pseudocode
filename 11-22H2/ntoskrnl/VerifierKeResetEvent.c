/*
 * XREFs of VerifierKeResetEvent @ 0x140AC14C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeResetEvent()
{
  return ((__int64 (*)(void))pXdvKeResetEvent)();
}
