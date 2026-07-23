/*
 * XREFs of VerifierIoGetAttachedDeviceReference @ 0x140ABFE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetAttachedDeviceReference()
{
  return ((__int64 (*)(void))pXdvIoGetAttachedDeviceReference)();
}
