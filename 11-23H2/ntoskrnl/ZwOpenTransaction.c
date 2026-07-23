/*
 * XREFs of ZwOpenTransaction @ 0x14041D810
 * Callers:
 *     DifZwOpenTransactionWrapper @ 0x1405F3390 (DifZwOpenTransactionWrapper.c)
 *     CmpRmUnDoPhase @ 0x140A1F308 (CmpRmUnDoPhase.c)
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
