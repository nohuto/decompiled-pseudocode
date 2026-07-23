/*
 * XREFs of ZwAlertResumeThread @ 0x14041B460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
