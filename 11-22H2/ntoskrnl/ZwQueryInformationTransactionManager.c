/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x14041D1A0
 * Callers:
 *     DifZwQueryInformationTransactionManagerWrapper @ 0x1405F4DE0 (DifZwQueryInformationTransactionManagerWrapper.c)
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
