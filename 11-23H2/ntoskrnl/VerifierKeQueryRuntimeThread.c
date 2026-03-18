/*
 * XREFs of VerifierKeQueryRuntimeThread @ 0x140ACF830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeQueryRuntimeThread()
{
  return ((__int64 (*)(void))pXdvKeQueryRuntimeThread)();
}
