/*
 * XREFs of VfDeleteResourceTree @ 0x140AE45E8
 * Callers:
 *     VfMiscPluginUnload @ 0x1405D2520 (VfMiscPluginUnload.c)
 * Callees:
 *     VfAvlDeleteAllTreeNodes @ 0x140ADC260 (VfAvlDeleteAllTreeNodes.c)
 */

__int64 VfDeleteResourceTree()
{
  __int64 result; // rax

  VfAvlDeleteAllTreeNodes(qword_140D70750);
  result = (unsigned int)_InterlockedExchange(&ViResourceInitialized, 0);
  _InterlockedExchange(&ViResourceNotTracked, 0);
  return result;
}
