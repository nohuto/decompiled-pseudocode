/*
 * XREFs of VfMiscPluginUnload @ 0x1405D2520
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteLookasideTree @ 0x140AE2244 (VfDeleteLookasideTree.c)
 *     VfDeleteResourceTree @ 0x140AE45E8 (VfDeleteResourceTree.c)
 */

__int64 VfMiscPluginUnload()
{
  if ( (VfRuleClasses & 0x400000) == 0 )
    _InterlockedAnd(&ExpPoolFlags, 0xFFFFFDF9);
  VfDeleteResourceTree();
  return VfDeleteLookasideTree();
}
