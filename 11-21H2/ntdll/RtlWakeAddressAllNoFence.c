/*
 * XREFs of RtlWakeAddressAllNoFence @ 0x18010FE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RtlWakeAddressAllNoFence(unsigned __int64 a1)
{
  return RtlpWakeByAddress(a1, 1);
}
