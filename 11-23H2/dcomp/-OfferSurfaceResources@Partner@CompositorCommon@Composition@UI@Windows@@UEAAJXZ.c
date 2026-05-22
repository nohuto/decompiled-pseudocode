/*
 * XREFs of ?OfferSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJXZ @ 0x180128660
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@QEAA_NXZ @ 0x18009B900 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferRecl.c)
 *     ?OfferSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJXZ @ 0x1801285B4 (-OfferSurfaceResources@CompositorCommon@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Partner::OfferSurfaceResources(
        Windows::UI::Composition::CompositorCommon::Partner *this)
{
  Windows::UI::Composition::CompositorCommon *v1; // rbx
  unsigned int v2; // edi

  v1 = (Windows::UI::Composition::CompositorCommon::Partner *)((char *)this - 296);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 296));
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    v2 = 0;
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::GetImpl'::`2'::impl) )
      Windows::UI::Composition::CompositorCommon::OfferSurfaceResources(v1);
  }
  else
  {
    v2 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v1);
  return v2;
}
