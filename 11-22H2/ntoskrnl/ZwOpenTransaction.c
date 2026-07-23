/*
 * XREFs of ZwOpenTransaction @ 0x14041CDC0
 * Callers:
 *     DifZwOpenTransactionWrapper @ 0x1405F2EB0 (DifZwOpenTransactionWrapper.c)
 *     CmpRmUnDoPhase @ 0x140A1F108 (CmpRmUnDoPhase.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
