/*
 * XREFs of ?OfferSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x18008BFB0
 * Callers:
 *     ?OfferSurfaceResources@CDevice@DirectComposition@@UEAAJXZ @ 0x1800F2680 (-OfferSurfaceResources@CDevice@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@QEAA_NXZ @ 0x18009B900 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferRecl.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::OfferSurfaceResources(DirectComposition::CSurfaceFactory *this)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  DirectComposition::CDeviceLock *v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::GetImpl'::`2'::impl) )
    return 0LL;
  v5 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  DirectComposition::CDeviceLock::Enter(v5);
  if ( *((_DWORD *)this + 87) )
  {
    v2 = -2003302399;
  }
  else if ( *((_DWORD *)this + 86) )
  {
    v2 = -2147483634;
  }
  else
  {
    v4 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 86) = 1;
    ++*(_DWORD *)(v4 + 372);
  }
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v5);
  return v2;
}
