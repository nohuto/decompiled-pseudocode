/*
 * XREFs of ZwNotifyChangeSession @ 0x14041CB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(SessionHandle);
}
