/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x14041E090
 * Callers:
 *     DifZwRemoveIoCompletionExWrapper @ 0x1405F6430 (DifZwRemoveIoCompletionExWrapper.c)
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
  return KiServiceInternal(IoCompletionHandle);
}
