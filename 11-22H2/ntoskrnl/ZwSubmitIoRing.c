/*
 * XREFs of ZwSubmitIoRing @ 0x14041DFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSubmitIoRing(HANDLE IoRingHandle, ULONG Flags, ULONG WaitOperations, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoRingHandle);
}
