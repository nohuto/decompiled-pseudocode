/*
 * XREFs of KeStallWhileFrozen @ 0x140573650
 * Callers:
 *     <none>
 * Callees:
 *     sub_140302560 @ 0x140302560 (sub_140302560.c)
 */

__int64 KeStallWhileFrozen()
{
  return sub_140302560((__int64)KeGetCurrentPrcb(), 0);
}
