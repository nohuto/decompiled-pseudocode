/*
 * XREFs of NtOpenTransaction @ 0x1403DFB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  return NtOpenTransaction_0(TransactionHandle, DesiredAccess, ObjectAttributes, Uow, TmHandle);
}
