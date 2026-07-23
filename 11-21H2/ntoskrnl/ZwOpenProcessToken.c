/*
 * XREFs of ZwOpenProcessToken @ 0x14041DD40
 * Callers:
 *     sub_140622350 @ 0x140622350 (sub_140622350.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, *(_QWORD *)&DesiredAccess);
}
