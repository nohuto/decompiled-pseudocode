/*
 * XREFs of ZwOpenEnlistment @ 0x14041DBC0
 * Callers:
 *     sub_1406217A0 @ 0x1406217A0 (sub_1406217A0.c)
 *     sub_14091BA74 @ 0x14091BA74 (sub_14091BA74.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenEnlistment(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE RmHandle,
        LPGUID EnlistmentGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, *(_QWORD *)&DesiredAccess);
}
