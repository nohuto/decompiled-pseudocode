/*
 * XREFs of ZwTerminateProcess @ 0x14041BCE0
 * Callers:
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, *(_QWORD *)&ExitStatus);
}
