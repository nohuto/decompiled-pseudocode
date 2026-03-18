/*
 * XREFs of VerifierIoRegisterDeviceInterface @ 0x140ACF200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterDeviceInterface()
{
  return ((__int64 (*)(void))pXdvIoRegisterDeviceInterface)();
}
