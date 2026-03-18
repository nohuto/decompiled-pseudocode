/*
 * XREFs of ViPtPluginUnload @ 0x140ADF1E0
 * Callers:
 *     VfPoolTrackingEntry @ 0x1405D2128 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x140606C5C (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140ADEC20 (ViPtDeleteAvlTrees.c)
 */

void ViPtPluginUnload()
{
  ExClearPoolFlags(16);
  if ( (VfOptionFlags & 0x1000) != 0 )
    ViPtDeleteAvlTrees();
  if ( VfPoolTraces )
  {
    ExFreePoolWithTag(VfPoolTraces, 0x6E496956u);
    VfPoolTraces = 0LL;
  }
  VfPoolTracesLength = 0;
  VfPoolTracesIndex = 0;
}
