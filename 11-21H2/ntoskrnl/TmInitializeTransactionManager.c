/*
 * XREFs of TmInitializeTransactionManager @ 0x1403DFFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmInitializeTransactionManager(
        PRKTM TransactionManager,
        PCUNICODE_STRING LogFileName,
        PGUID TmId,
        ULONG CreateOptions)
{
  return TmInitializeTransactionManager_0(TransactionManager, LogFileName, TmId, CreateOptions);
}
