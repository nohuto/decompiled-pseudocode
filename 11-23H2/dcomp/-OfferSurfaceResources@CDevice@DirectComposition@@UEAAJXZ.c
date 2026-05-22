/*
 * XREFs of ?OfferSurfaceResources@CDevice@DirectComposition@@UEAAJXZ @ 0x1800F2680
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?OfferSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x18008BFB0 (-OfferSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@QEAA_NXZ @ 0x18009B900 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferRecl.c)
 */

__int64 __fastcall DirectComposition::CDevice::OfferSurfaceResources(DirectComposition::CDevice *this)
{
  DirectComposition::CSurfaceFactory *v3; // rcx
  unsigned int v4; // ebx
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::GetImpl'::`2'::impl) )
    return 0LL;
  v5 = (_QWORD *)((char *)this + 80);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 80));
  v3 = (DirectComposition::CSurfaceFactory *)*((_QWORD *)this + 73);
  if ( v3 )
    v4 = DirectComposition::CSurfaceFactory::OfferSurfaceResources(v3);
  else
    v4 = -2147483634;
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v5);
  return v4;
}
