/*
 * XREFs of ZwAlertThread @ 0x14041C540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThread(HANDLE ThreadHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(ThreadHandle, v1);
}
