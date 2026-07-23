/*
 * XREFs of ZwCreateTransaction @ 0x14041D0E0
 * Callers:
 *     sub_14061F370 @ 0x14061F370 (sub_14061F370.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle,
        ULONG CreateOptions,
        ULONG IsolationLevel,
        ULONG IsolationFlags,
        PLARGE_INTEGER Timeout,
        PUNICODE_STRING Description)
{
  _disable();
  __readeflags();
  return sub_140433F80(TransactionHandle, *(_QWORD *)&DesiredAccess);
}
