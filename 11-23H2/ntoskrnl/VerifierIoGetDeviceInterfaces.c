/*
 * XREFs of VerifierIoGetDeviceInterfaces @ 0x140ACEF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceInterfaces()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceInterfaces)();
}
