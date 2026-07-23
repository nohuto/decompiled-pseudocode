/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x14041E6A0
 * Callers:
 *     sub_140626190 @ 0x140626190 (sub_140626190.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  _disable();
  __readeflags();
  return sub_140433F80(IoCompletionHandle, IoCompletionInformation);
}
