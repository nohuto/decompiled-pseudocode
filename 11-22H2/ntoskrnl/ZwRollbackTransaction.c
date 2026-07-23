/*
 * XREFs of ZwRollbackTransaction @ 0x14041D840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
