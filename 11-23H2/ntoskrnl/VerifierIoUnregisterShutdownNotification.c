/*
 * XREFs of VerifierIoUnregisterShutdownNotification @ 0x140ACF4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoUnregisterShutdownNotification()
{
  return ((__int64 (*)(void))pXdvIoUnregisterShutdownNotification)();
}
