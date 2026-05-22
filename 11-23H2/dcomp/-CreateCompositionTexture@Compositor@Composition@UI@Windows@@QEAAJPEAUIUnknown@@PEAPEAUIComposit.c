/*
 * XREFs of ?CreateCompositionTexture@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUICompositionTexture@234@@Z @ 0x1800A24A8
 * Callers:
 *     ?CreateCompositionTexture@CompositionTextures@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUICompositionTexture@345@@Z @ 0x1800A23F0 (-CreateCompositionTexture@CompositionTextures@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ??$MakeAndInitialize2@VCompositionTexture@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCCompositionTexture@DirectComposition@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionTexture@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCCompositionTexture@DirectComposition@@@Z @ 0x1800A1D00 (--$MakeAndInitialize2@VCompositionTexture@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::CreateCompositionTexture(
        Windows::UI::Composition::Compositor *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::ICompositionTexture **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, struct IUnknown *, struct DirectComposition::CCompositionTexture **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  struct DirectComposition::CCompositionTexture *v10; // rax
  int v11; // eax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rax
  struct DirectComposition::CCompositionTexture *v14; // [rsp+20h] [rbp-20h] BYREF
  struct DirectComposition::CCompositionTexture *v15; // [rsp+28h] [rbp-18h] BYREF
  struct Windows::UI::Composition::Compositor *v16; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+78h] [rbp+38h] BYREF

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl) )
    return 2147500033LL;
  v6 = *((_QWORD *)this + 57);
  v14 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, struct DirectComposition::CCompositionTexture **))(*(_QWORD *)(v6 + 8) + 304LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v14);
  v8 = v7(v6 + 8, a2, &v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v18 = 0LL;
    v10 = v14;
    if ( v14 )
      v10 = (struct DirectComposition::CCompositionTexture *)((char *)v14 - 16);
    v15 = v10;
    v16 = this;
    v11 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionTexture,Windows::UI::Composition::CompositionTexture,Windows::UI::Composition::Compositor *,DirectComposition::CCompositionTexture *>(
            &v18,
            &v16,
            &v15);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v12 = v18;
      v18 = 0LL;
      *a3 = (struct Windows::UI::Composition::ICompositionTexture *)(((unsigned __int64)v12 + 128) & -(__int64)(v12 != 0LL));
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v18);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B1,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v18);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AA,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v14);
  return v9;
}
