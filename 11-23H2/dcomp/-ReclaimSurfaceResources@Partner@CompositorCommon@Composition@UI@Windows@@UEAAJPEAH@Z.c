/*
 * XREFs of ?ReclaimSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x1801291F0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@QEAA_NXZ @ 0x18009B900 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferRecl.c)
 *     ?ReclaimSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJPEAH@Z @ 0x18012913C (-ReclaimSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJPEAH@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::ReclaimSurfaceResources(
        Windows::UI::Composition::CompositorCommon::Partner *this,
        int *a2)
{
  Windows::UI::Composition::CompositorCommon *v2; // rsi
  unsigned int v4; // ebx

  v2 = (Windows::UI::Composition::CompositorCommon::Partner *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 296));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v4 = 0;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::GetImpl'::`2'::impl) )
    {
      if ( a2 )
        *a2 = 0;
    }
    else
    {
      Windows::UI::Composition::CompositorCommon::ReclaimSurfaceResources(v2, a2);
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v4;
}
