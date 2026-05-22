/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@QEAA_NXZ @ 0x18009B900
 * Callers:
 *     ?ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z @ 0x180013F00 (-ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z.c)
 *     ?OfferSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x18008BFB0 (-OfferSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 *     ?OfferSurfaceResources@CDevice@DirectComposition@@UEAAJXZ @ 0x1800F2680 (-OfferSurfaceResources@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?ReclaimSurfaceResources@CDevice@DirectComposition@@UEAAJPEAH@Z @ 0x1800F3B10 (-ReclaimSurfaceResources@CDevice@DirectComposition@@UEAAJPEAH@Z.c)
 *     ?OfferSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJXZ @ 0x180128660 (-OfferSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?ReclaimSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x1801291F0 (-ReclaimSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAH@Z.c)
 *     ?OfferSurfaceResources@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x18015F210 (-OfferSurfaceResources@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?ReclaimSurfaceResources@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x18015F2D0 (-ReclaimSurfaceResources@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009AEBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectComposition.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009B5E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@de.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
