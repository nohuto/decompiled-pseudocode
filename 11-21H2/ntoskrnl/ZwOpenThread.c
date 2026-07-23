/*
 * XREFs of ZwOpenThread @ 0x14041DE00
 * Callers:
 *     sub_140622C50 @ 0x140622C50 (sub_140622C50.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return sub_140433F80(ThreadHandle, *(_QWORD *)&DesiredAccess);
}
