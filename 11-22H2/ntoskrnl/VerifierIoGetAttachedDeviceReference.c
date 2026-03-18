/*
 * XREFs of VerifierIoGetAttachedDeviceReference @ 0x140AC0E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetAttachedDeviceReference()
{
  return ((__int64 (*)(void))pXdvIoGetAttachedDeviceReference)();
}
