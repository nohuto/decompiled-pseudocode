/*
 * XREFs of ZwTerminateThread @ 0x14041BB50
 * Callers:
 *     RtlAssert @ 0x1405AA630 (RtlAssert.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
