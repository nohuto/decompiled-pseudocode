/*
 * XREFs of KeResumeDynamicTracing @ 0x14057ECE8
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeResumeDynamicTracing()
{
  _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFB);
}
