/*
 * XREFs of ZwSetInformationTransaction @ 0x14041EC40
 * Callers:
 *     sub_140627910 @ 0x140627910 (sub_140627910.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(TransactionHandle, *(_QWORD *)&TransactionInformationClass);
}
