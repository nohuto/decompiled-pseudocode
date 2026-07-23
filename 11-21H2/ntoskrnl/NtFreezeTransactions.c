/*
 * XREFs of NtFreezeTransactions @ 0x1403DFB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl NtFreezeTransactions(PLARGE_INTEGER FreezeTimeout, PLARGE_INTEGER ThawTimeout)
{
  return NtFreezeTransactions_0(FreezeTimeout, ThawTimeout);
}
