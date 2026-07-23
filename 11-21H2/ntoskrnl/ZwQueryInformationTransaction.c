/*
 * XREFs of ZwQueryInformationTransaction @ 0x14041E1E0
 * Callers:
 *     sub_140625160 @ 0x140625160 (sub_140625160.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(TransactionHandle, *(_QWORD *)&TransactionInformationClass);
}
