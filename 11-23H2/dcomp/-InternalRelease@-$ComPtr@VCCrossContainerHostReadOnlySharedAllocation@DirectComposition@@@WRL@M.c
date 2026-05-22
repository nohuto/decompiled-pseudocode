/*
 * XREFs of ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4
 * Callers:
 *     ??1CGenericInk@DirectComposition@@EEAA@XZ @ 0x1800ED878 (--1CGenericInk@DirectComposition@@EEAA@XZ.c)
 *     ??4?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F85A8 (--4-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0 (-AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z.c)
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750 (-CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ??1CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x1801230E4 (--1CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@0@@Z @ 0x180177D90 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@.c)
 *     ?MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z @ 0x180178740 (-MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnim.c)
 *     ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPEBE@Z @ 0x180184EB4 (-AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPE.c)
 *     ?Destroy@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x180185200 (-Destroy@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJI_NIPEBE@Z @ 0x1801853EC (-SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wi.c)
 *     ?EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@@III0III0@Z @ 0x180185BDC (-EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@.c)
 *     ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BE08 (-MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V-$span@.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(
        DirectComposition::CDelayedDestructionObject **a1)
{
  DirectComposition::CDelayedDestructionObject *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return DirectComposition::CDelayedDestructionObject::Release(v1);
  }
  return result;
}
