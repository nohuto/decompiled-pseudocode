/*
 * XREFs of ??4?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F85A8
 * Callers:
 *     ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0 (-AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z.c)
 *     ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPEBE@Z @ 0x180184EB4 (-AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPE.c)
 *     ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJI_NIPEBE@Z @ 0x1801853EC (-SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 */

DirectComposition::CDelayedDestructionObject **__fastcall Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>::operator=(
        DirectComposition::CDelayedDestructionObject **a1,
        DirectComposition::CDelayedDestructionObject **a2)
{
  DirectComposition::CDelayedDestructionObject *v3; // rcx
  DirectComposition::CDelayedDestructionObject *v4; // rax
  DirectComposition::CDelayedDestructionObject *v5; // rax
  DirectComposition::CDelayedDestructionObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v7);
  return a1;
}
