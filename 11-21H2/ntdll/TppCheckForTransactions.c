/*
 * XREFs of TppCheckForTransactions @ 0x1800169AC
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180017958 (TppCallbackCheckThreadAfterCallback.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x180082C4C (TppCallbackCheckThreadBeforeCallback.c)
 * Callees:
 *     <none>
 */

char TppCheckForTransactions()
{
  struct _TEB *v0; // rcx
  char result; // al

  v0 = NtCurrentTeb();
  if ( (((unsigned __int64)v0->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 1;
  result = 0;
  if ( v0->TxnScopeEnterCallback || v0->TxnScopeExitCallback || v0->TxnScopeContext || v0->TxFsContext != 65534 )
    return 1;
  return result;
}
