/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14041BD60
 * Callers:
 *     sub_140622200 @ 0x140622200 (sub_140622200.c)
 *     sub_1406CB6DC @ 0x1406CB6DC (sub_1406CB6DC.c)
 *     sub_1406CB908 @ 0x1406CB908 (sub_1406CB908.c)
 *     sub_140813C34 @ 0x140813C34 (sub_140813C34.c)
 *     sub_1409BA210 @ 0x1409BA210 (sub_1409BA210.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, *(_QWORD *)&DesiredAccess);
}
