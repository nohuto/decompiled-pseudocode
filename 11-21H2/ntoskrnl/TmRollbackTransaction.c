/*
 * XREFs of TmRollbackTransaction @ 0x1403E0200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackTransaction(PKTRANSACTION Transaction, BOOLEAN Wait)
{
  return TmRollbackTransaction_0(Transaction, Wait);
}
