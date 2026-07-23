/*
 * XREFs of ZwOpenKeyTransacted @ 0x14041DC60
 * Callers:
 *     sub_140621F80 @ 0x140621F80 (sub_140621F80.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, *(_QWORD *)&DesiredAccess);
}
