/*
 * XREFs of RtlWakeAddressSingleNoFence @ 0x1801114D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWakeAddressSingleNoFence(unsigned __int64 a1)
{
  return RtlpWakeByAddress(a1, 0);
}
