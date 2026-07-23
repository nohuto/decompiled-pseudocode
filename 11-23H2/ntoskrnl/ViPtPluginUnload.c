/*
 * XREFs of ViPtPluginUnload @ 0x140ADF1D0
 * Callers:
 *     VfPoolTrackingEntry @ 0x1405D2698 (VfPoolTrackingEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x1406071AC (ExClearPoolFlags.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ViPtDeleteAvlTrees @ 0x140ADEC10 (ViPtDeleteAvlTrees.c)
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
