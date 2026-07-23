/*
 * XREFs of ZwNotifyChangeSession @ 0x14041DBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwNotifyChangeSession(
        HANDLE SessionHandle,
        ULONG ChangeSequenceNumber,
        PLARGE_INTEGER ChangeTimeStamp,
        IO_SESSION_EVENT Event,
        IO_SESSION_STATE NewState,
        IO_SESSION_STATE PreviousState,
        PVOID Payload,
        ULONG PayloadSize)
{
  _disable();
  __readeflags();
  return sub_140433F80(SessionHandle, *(_QWORD *)&ChangeSequenceNumber);
}
