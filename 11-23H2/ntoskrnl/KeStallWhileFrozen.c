/*
 * XREFs of KeStallWhileFrozen @ 0x140577070
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x1402C2920 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall((__int64)KeGetCurrentPrcb(), 0);
}
