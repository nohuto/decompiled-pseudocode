/*
 * XREFs of IoEnqueueIrp @ 0x140947350
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x14022ED60 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}
