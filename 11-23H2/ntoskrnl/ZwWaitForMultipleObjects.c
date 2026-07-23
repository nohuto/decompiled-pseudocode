/*
 * XREFs of ZwWaitForMultipleObjects @ 0x14041BC50
 * Callers:
 *     DifZwWaitForMultipleObjectsWrapper @ 0x1405F8750 (DifZwWaitForMultipleObjectsWrapper.c)
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
  return KiServiceInternal(*(_QWORD *)&Count);
}
