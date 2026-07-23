/*
 * XREFs of ViIrqlPluginUnload @ 0x140AE8630
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void ViIrqlPluginUnload()
{
  _InterlockedExchange(&ViIrqlTrimAndLog, 0);
  if ( ViTrackIrqlQueue )
  {
    ExFreePoolWithTag(ViTrackIrqlQueue, 0x6C717249u);
    ViTrackIrqlQueue = 0LL;
  }
  if ( VfKeCriticalRegionTraces )
  {
    ExFreePoolWithTag(VfKeCriticalRegionTraces, 0x52436656u);
    VfKeCriticalRegionTraces = 0LL;
  }
}
