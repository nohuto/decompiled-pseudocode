/*
 * XREFs of ?DisposeOnDelayedDestruction@CFilterEffect@DirectComposition@@UEAAXXZ @ 0x1800F1720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CFilterEffect::DisposeOnDelayedDestruction(struct IUnknown **this)
{
  DirectComposition::CResourceProxy::SetDeletedNotificationTag(
    this[8],
    (struct DirectComposition::CDelayedDestructionObject *)this);
}
