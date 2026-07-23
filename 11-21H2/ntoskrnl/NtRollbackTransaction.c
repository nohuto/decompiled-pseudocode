/*
 * XREFs of NtRollbackTransaction @ 0x1403DFDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return NtRollbackTransaction_0(TransactionHandle, Wait);
}
