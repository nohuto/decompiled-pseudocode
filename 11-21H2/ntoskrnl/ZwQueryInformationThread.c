/*
 * XREFs of ZwQueryInformationThread @ 0x14041BC00
 * Callers:
 *     sub_140624D40 @ 0x140624D40 (sub_140624D40.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(ThreadHandle, *(_QWORD *)&ThreadInformationClass);
}
