/*
 * XREFs of ZwWaitForMultipleObjects @ 0x14041C2C0
 * Callers:
 *     sub_140628590 @ 0x140628590 (sub_140628590.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return sub_140433F80(*(_QWORD *)&Count, Handles);
}
