/*
 * XREFs of ZwSetInformationProcess @ 0x14041BAE0
 * Callers:
 *     sub_140627690 @ 0x140627690 (sub_140627690.c)
 *     sub_1406C9D2C @ 0x1406C9D2C (sub_1406C9D2C.c)
 *     sub_1407E4A98 @ 0x1407E4A98 (sub_1407E4A98.c)
 *     sub_140831BF4 @ 0x140831BF4 (sub_140831BF4.c)
 *     sub_140B263A0 @ 0x140B263A0 (sub_140B263A0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, *(_QWORD *)&ProcessInformationClass);
}
