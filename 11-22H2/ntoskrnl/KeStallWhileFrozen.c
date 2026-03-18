/*
 * XREFs of KeStallWhileFrozen @ 0x140576C10
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x1402C2660 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall((__int64)KeGetCurrentPrcb(), 0);
}
