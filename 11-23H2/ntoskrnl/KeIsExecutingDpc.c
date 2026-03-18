/*
 * XREFs of KeIsExecutingDpc @ 0x14033DF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 0x10001;
}
