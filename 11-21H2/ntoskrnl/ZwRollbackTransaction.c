/*
 * XREFs of ZwRollbackTransaction @ 0x14041E8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  _disable();
  __readeflags();
  return sub_140433F80(TransactionHandle, Wait);
}
