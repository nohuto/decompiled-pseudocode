/*
 * XREFs of VerifierKeInitializeDeviceQueue @ 0x140ACF740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeDeviceQueue()
{
  return ((__int64 (*)(void))pXdvKeInitializeDeviceQueue)();
}
