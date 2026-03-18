/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x1405FDFF0
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140A8B238 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140A8B320 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x140A9CF00 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1402DB890 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(struct _SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
