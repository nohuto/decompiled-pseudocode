/*
 * XREFs of ?ReclaimSurfaceResources@CDevice@DirectComposition@@UEAAJPEAH@Z @ 0x1800F3B10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z @ 0x180013F00 (-ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@QEAA_NXZ @ 0x18009B900 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferRecl.c)
 */

__int64 __fastcall DirectComposition::CDevice::ReclaimSurfaceResources(DirectComposition::CDevice *this, int *a2)
{
  DirectComposition::CSurfaceFactory *v5; // rcx
  unsigned int v6; // ebx
  _QWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::GetImpl'::`2'::impl) )
  {
    if ( a2 )
    {
      *a2 = 0;
      return 0LL;
    }
    else
    {
      return 2147942487LL;
    }
  }
  else
  {
    v7 = (_QWORD *)((char *)this + 80);
    DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 80));
    v5 = (DirectComposition::CSurfaceFactory *)*((_QWORD *)this + 73);
    if ( v5 )
    {
      v6 = DirectComposition::CSurfaceFactory::ReclaimSurfaceResources(v5, a2);
    }
    else
    {
      if ( a2 )
        *a2 = 0;
      v6 = -2147483634;
    }
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v7);
    return v6;
  }
}
