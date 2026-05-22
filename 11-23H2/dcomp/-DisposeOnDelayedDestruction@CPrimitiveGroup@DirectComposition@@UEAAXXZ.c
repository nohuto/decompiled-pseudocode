/*
 * XREFs of ?DisposeOnDelayedDestruction@CPrimitiveGroup@DirectComposition@@UEAAXXZ @ 0x180063C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CPrimitiveGroup::DisposeOnDelayedDestruction(unsigned __int64 this)
{
  DirectComposition::CResourceProxy::SetDeletedNotificationTag(
    *(struct IUnknown **)(this + 48),
    (struct DirectComposition::CDelayedDestructionObject *)(this & ((unsigned __int128)-(__int128)(this - 8) >> 64)));
}
