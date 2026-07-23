/*
 * XREFs of ZwQueryInformationThread @ 0x14041AB40
 * Callers:
 *     DifZwQueryInformationThreadWrapper @ 0x1405F4B20 (DifZwQueryInformationThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
