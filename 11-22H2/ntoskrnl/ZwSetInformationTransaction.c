/*
 * XREFs of ZwSetInformationTransaction @ 0x14041DC00
 * Callers:
 *     DifZwSetInformationTransactionWrapper @ 0x1405F7630 (DifZwSetInformationTransactionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
