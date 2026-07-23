/*
 * XREFs of ZwCommitTransaction @ 0x14041CAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  _disable();
  __readeflags();
  return sub_140433F80(TransactionHandle, Wait);
}
