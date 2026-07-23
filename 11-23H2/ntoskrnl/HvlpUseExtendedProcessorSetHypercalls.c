/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x1403CC560
 * Callers:
 *     HvlFlushRangeListTb @ 0x1403CBF8C (HvlFlushRangeListTb.c)
 *     HvlFlushAddressSpaceTb @ 0x1403CC178 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     <none>
 */

bool HvlpUseExtendedProcessorSetHypercalls()
{
  bool result; // al

  result = 0;
  if ( (HvlpFlags & 0x80u) != 0 )
    return (unsigned __int16)KiActiveGroups > 1u;
  return result;
}
