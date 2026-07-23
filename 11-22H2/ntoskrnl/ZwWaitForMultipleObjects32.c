/*
 * XREFs of ZwWaitForMultipleObjects32 @ 0x14041A9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwWaitForMultipleObjects32(
        ULONG Count,
        LONG Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Count);
}
