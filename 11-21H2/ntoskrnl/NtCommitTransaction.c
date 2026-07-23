/*
 * XREFs of NtCommitTransaction @ 0x1403DFA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return NtCommitTransaction_0(TransactionHandle, Wait);
}
