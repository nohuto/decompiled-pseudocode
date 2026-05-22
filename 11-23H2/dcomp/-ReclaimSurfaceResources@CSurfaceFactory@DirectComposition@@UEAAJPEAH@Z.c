/*
 * XREFs of ?ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z @ 0x180013F00
 * Callers:
 *     ?ReclaimSurfaceResources@CDevice@DirectComposition@@UEAAJPEAH@Z @ 0x1800F3B10 (-ReclaimSurfaceResources@CDevice@DirectComposition@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?ReclaimSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJPEA_N@Z @ 0x180013FD4 (-ReclaimSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJPEA_N@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim@@@details@wil@@QEAA_NXZ @ 0x18009B900 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableDirectCompositionOfferRecl.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::ReclaimSurfaceResources(
        DirectComposition::CSurfaceFactory *this,
        int *a2)
{
  int v5; // ebx
  int v6; // eax
  BOOL v7; // ebp
  __int64 v8; // rax
  DirectComposition::CSurfaceManager *v9; // rcx
  bool v10; // [rsp+50h] [rbp+18h] BYREF
  DirectComposition::CDeviceLock *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DisableDirectCompositionOfferReclaim>::GetImpl'::`2'::impl) )
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
    v11 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
    DirectComposition::CDeviceLock::Enter(v11);
    v5 = 0;
    if ( a2 )
    {
      *a2 = 0;
      v6 = *((_DWORD *)this + 86);
      if ( v6 )
      {
        v7 = 1;
        if ( v6 == 1 )
        {
          v8 = *((_QWORD *)this + 3);
          *((_DWORD *)this + 86) = 0;
          --*(_DWORD *)(v8 + 372);
        }
        else
        {
          v9 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 39);
          v10 = 0;
          v5 = DirectComposition::CSurfaceManager::ReclaimSurfaceResources(v9, &v10);
          if ( v5 >= 0 )
            v7 = v10;
          *a2 = v7;
          *((_DWORD *)this + 86) = 0;
        }
      }
      else
      {
        v5 = -2147483634;
      }
    }
    else
    {
      v5 = -2147024809;
    }
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v11);
    return (unsigned int)v5;
  }
}
