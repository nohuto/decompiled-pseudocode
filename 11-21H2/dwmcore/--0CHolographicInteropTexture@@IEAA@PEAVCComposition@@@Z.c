/*
 * XREFs of ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x18029A8E8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007D878 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4R.c)
 */

CHolographicInteropTexture *__fastcall CHolographicInteropTexture::CHolographicInteropTexture(
        CHolographicInteropTexture *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  CHolographicInteropTexture *result; // rax

  *((_QWORD *)this + 9) = &CHolographicInteropTexture::`vbtable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CResource::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = &IVisualTreeClient::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CHolographicInteropTexture::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 352;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = (char *)this + 144;
  *((_QWORD *)this + 16) = (char *)this + 144;
  *((_QWORD *)this + 17) = (char *)this + 208;
  *((_QWORD *)this + 42) = (char *)this + 344;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 86) = 0;
  InitializeSRWLock((PSRWLOCK)this + 51);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
    0,
    v4,
    v5);
  result = this;
  *((_DWORD *)this + 62) = 1;
  return result;
}
