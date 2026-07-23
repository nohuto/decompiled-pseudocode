/*
 * XREFs of ZwQueryInformationTransaction @ 0x14041D180
 * Callers:
 *     DifZwQueryInformationTransactionWrapper @ 0x1405F4F40 (DifZwQueryInformationTransactionWrapper.c)
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
