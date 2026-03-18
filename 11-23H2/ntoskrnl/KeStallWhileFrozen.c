/*
 * XREFs of KeStallWhileFrozen @ 0x140576B80
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x1402C2690 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall((__int64)KeGetCurrentPrcb(), 0);
}
