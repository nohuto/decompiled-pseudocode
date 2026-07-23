/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x14041E200
 * Callers:
 *     sub_140625000 @ 0x140625000 (sub_140625000.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(TransactionManagerHandle, *(_QWORD *)&TransactionManagerInformationClass);
}
