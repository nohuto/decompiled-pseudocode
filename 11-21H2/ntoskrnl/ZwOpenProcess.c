/*
 * XREFs of ZwOpenProcess @ 0x14041BC20
 * Callers:
 *     sub_140622490 @ 0x140622490 (sub_140622490.c)
 *     sub_14064CD50 @ 0x14064CD50 (sub_14064CD50.c)
 *     sub_14083B480 @ 0x14083B480 (sub_14083B480.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, *(_QWORD *)&DesiredAccess);
}
