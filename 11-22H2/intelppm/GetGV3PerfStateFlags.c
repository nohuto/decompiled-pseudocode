/*
 * XREFs of GetGV3PerfStateFlags @ 0x1C0001140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetGV3PerfStateFlags(__int64 a1, unsigned int a2)
{
  return (a2 >> 3) & 1;
}
