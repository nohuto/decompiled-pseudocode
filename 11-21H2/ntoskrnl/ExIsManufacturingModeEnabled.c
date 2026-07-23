/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x14067AFA0
 * Callers:
 *     sub_140B110B4 @ 0x140B110B4 (sub_140B110B4.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return xmmword_140C15C80 & 1;
}
