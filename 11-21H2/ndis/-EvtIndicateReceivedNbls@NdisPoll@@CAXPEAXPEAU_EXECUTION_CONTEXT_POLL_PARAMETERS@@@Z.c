/*
 * XREFs of ?EvtIndicateReceivedNbls@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C0740
 * Callers:
 *     <none>
 * Callees:
 *     ?IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C07C0 (-IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 */

void __fastcall NdisPoll::EvtIndicateReceivedNbls(NdisPoll *a1, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  NdisPoll::IndicateReceivedNbls(a1, a2);
}
