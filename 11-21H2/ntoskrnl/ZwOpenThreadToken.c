/*
 * XREFs of ZwOpenThreadToken @ 0x14041BBE0
 * Callers:
 *     sub_140622B00 @ 0x140622B00 (sub_140622B00.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(ThreadHandle, *(_QWORD *)&DesiredAccess);
}
