/*
 * XREFs of RaidAdapterMarkChildrenMissing @ 0x1C0036930
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C00375F4 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1C0037714 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterMarkChildrenMissing(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterSurpriseRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterSurpriseRemove);
}
