/*
 * XREFs of VerifierIoGetDeviceObjectPointer @ 0x140ACEFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceObjectPointer()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceObjectPointer)();
}
