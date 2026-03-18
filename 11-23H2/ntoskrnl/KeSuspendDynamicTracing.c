/*
 * XREFs of KeSuspendDynamicTracing @ 0x14057EC68
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeSuspendDynamicTracing()
{
  _InterlockedOr(&KiDynamicTraceMask, 4u);
}
