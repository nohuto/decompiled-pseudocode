/*
 * XREFs of ?EvtCompleteTransmittedNbls@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C5300
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteTransmittedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C5264 (-CompleteTransmittedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 */

void __fastcall NdisPoll::EvtCompleteTransmittedNbls(NdisPoll *a1, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  NdisPoll::CompleteTransmittedNbls(a1, a2);
}
