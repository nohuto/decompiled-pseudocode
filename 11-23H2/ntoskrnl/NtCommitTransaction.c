/*
 * XREFs of NtCommitTransaction @ 0x1403D8190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  return __imp_NtCommitTransaction(TransactionHandle, Wait);
}
