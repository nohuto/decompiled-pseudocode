/*
 * XREFs of VerifierIoUnregisterShutdownNotification @ 0x140ACF4F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoUnregisterShutdownNotification()
{
  return ((__int64 (*)(void))pXdvIoUnregisterShutdownNotification)();
}
