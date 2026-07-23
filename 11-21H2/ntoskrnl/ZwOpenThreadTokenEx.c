/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14041BD40
 * Callers:
 *     sub_1406229B0 @ 0x1406229B0 (sub_1406229B0.c)
 *     sub_1406CBA3C @ 0x1406CBA3C (sub_1406CBA3C.c)
 *     sub_140813C34 @ 0x140813C34 (sub_140813C34.c)
 *     sub_1409BA210 @ 0x1409BA210 (sub_1409BA210.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(ThreadHandle, *(_QWORD *)&DesiredAccess);
}
