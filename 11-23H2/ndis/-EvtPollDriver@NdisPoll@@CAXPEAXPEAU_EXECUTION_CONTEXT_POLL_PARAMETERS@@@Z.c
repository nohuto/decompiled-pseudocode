/*
 * XREFs of ?EvtPollDriver@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C5360
 * Callers:
 *     <none>
 * Callees:
 *     ?PollDriver@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C5474 (-PollDriver@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 */

void __fastcall NdisPoll::EvtPollDriver(NdisPoll *a1, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  NdisPoll::PollDriver(a1, a2);
}
