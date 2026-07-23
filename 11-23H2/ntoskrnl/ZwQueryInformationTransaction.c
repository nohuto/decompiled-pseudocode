/*
 * XREFs of ZwQueryInformationTransaction @ 0x14041DBD0
 * Callers:
 *     DifZwQueryInformationTransactionWrapper @ 0x1405F5420 (DifZwQueryInformationTransactionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
