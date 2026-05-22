/*
 * XREFs of ?DisposeOnDelayedDestruction@CGenericInk@DirectComposition@@MEAAXXZ @ 0x1800F8AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestructionObject@2@@Z @ 0x180063C1C (-SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestru.c)
 */

void __fastcall DirectComposition::CGenericInk::DisposeOnDelayedDestruction(unsigned __int64 this)
{
  DirectComposition::CTransformGroupProxy **v1; // rbx

  v1 = (DirectComposition::CTransformGroupProxy **)(this + 16);
  DirectComposition::CResourceProxy::SetDeletedNotificationTag(
    *(struct IUnknown **)(this + 16),
    (struct DirectComposition::CDelayedDestructionObject *)(this & ((unsigned __int128)-(__int128)(this - 8) >> 64)));
  Microsoft::WRL::ComPtr<DirectComposition::CGenericInkProxy>::InternalRelease(v1);
}
