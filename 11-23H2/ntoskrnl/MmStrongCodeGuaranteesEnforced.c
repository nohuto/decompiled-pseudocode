/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140B75E70
 * Callers:
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140B17BF4 (KeFreeInitializationCode.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned int)MiFlags >> 15) & 1;
}
