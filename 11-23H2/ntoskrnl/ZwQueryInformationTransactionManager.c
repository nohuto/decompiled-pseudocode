/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x14041DBF0
 * Callers:
 *     DifZwQueryInformationTransactionManagerWrapper @ 0x1405F52C0 (DifZwQueryInformationTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
