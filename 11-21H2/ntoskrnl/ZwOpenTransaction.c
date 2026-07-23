/*
 * XREFs of ZwOpenTransaction @ 0x14041DE40
 * Callers:
 *     sub_140623030 @ 0x140623030 (sub_140623030.c)
 *     sub_14091C5C4 @ 0x14091C5C4 (sub_14091C5C4.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  _disable();
  __readeflags();
  return sub_140433F80(TransactionHandle, *(_QWORD *)&DesiredAccess);
}
