/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x1405CE320
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140ACBB98 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140ACBC80 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x140ADDFE4 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14020A930 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(struct _SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
