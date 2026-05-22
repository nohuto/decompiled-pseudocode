/*
 * XREFs of ?DisposeOnDelayedDestruction@CSynchronousSuperWetInk@DirectComposition@@EEAAXXZ @ 0x1800FC990
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestructionObject@2@@Z @ 0x180063C1C (-SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestru.c)
 */

void __fastcall DirectComposition::CSynchronousSuperWetInk::DisposeOnDelayedDestruction(struct IUnknown **this)
{
  DirectComposition::CTransformGroupProxy **v1; // rbx

  v1 = (DirectComposition::CTransformGroupProxy **)(this + 2);
  DirectComposition::CResourceProxy::SetDeletedNotificationTag(
    this[2],
    (struct DirectComposition::CDelayedDestructionObject *)this);
  Microsoft::WRL::ComPtr<DirectComposition::CGenericInkProxy>::InternalRelease(v1);
}
