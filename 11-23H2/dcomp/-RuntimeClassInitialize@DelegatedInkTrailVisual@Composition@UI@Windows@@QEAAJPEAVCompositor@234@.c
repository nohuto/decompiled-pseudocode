/*
 * XREFs of ?RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionSwapChain@234@@Z @ 0x18011B6E4
 * Callers:
 *     ??$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVCompositionSwapChain@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVCompositionSwapChain@456@@Z @ 0x18011AED4 (--$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@2.c)
 *     ??$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@$$T@Details@WRL2@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA$$T@Z @ 0x18011AF94 (--$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E6968 (-Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@.c)
 *     ?InternalRelease@?$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E6BD8 (-InternalRelease@-$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::DelegatedInkTrailVisual::RuntimeClassInitialize(
        Windows::UI::Composition::DelegatedInkTrailVisual *this,
        struct DirectComposition::CDevice **a2,
        struct Windows::UI::Composition::CompositionSwapChain *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct DirectComposition::CCompositionSurfaceProxy **); // rcx
  int v9; // eax
  __int64 v10; // rdx
  struct DirectComposition::CDelegatedInkTrailImpl *v11; // rbx
  __int64 v12; // rax
  int v14; // eax
  struct DirectComposition::CCompositionSurfaceProxy *v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct DirectComposition::CDelegatedInkTrailImpl *v18; // [rsp+78h] [rbp+38h] BYREF

  v6 = Windows::UI::Composition::Visual::RuntimeClassInitialize(
         this,
         (struct Windows::UI::Composition::Compositor *)a2,
         0xB3u,
         0,
         0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v18 = 0LL;
    if ( a3 )
    {
      v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct DirectComposition::CCompositionSurfaceProxy **))*((_QWORD *)a3 + 18);
      v15 = 0LL;
      v9 = (**v8)(v8, &GUID_23d72676_66f2_11e0_b363_ef38dfd72085, &v15);
      v7 = v9;
      if ( v9 < 0 )
      {
        v10 = 42LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtdelegatedinktrailvisual.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v15);
LABEL_11:
        Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)&v18);
        return v7;
      }
      v9 = DirectComposition::CDelegatedInkTrailImpl::Create(a2[57], v15, &v18);
      v7 = v9;
      if ( v9 < 0 )
      {
        v10 = 48LL;
        goto LABEL_8;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v15);
    }
    else
    {
      v14 = DirectComposition::CDelegatedInkTrailImpl::Create(a2[57], 0LL, &v18);
      v7 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtdelegatedinktrailvisual.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_11;
      }
    }
    v11 = v18;
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 3) + 16LL) + 12LL));
    v12 = *((_QWORD *)this + 39);
    v18 = 0LL;
    v16 = v12;
    *((_QWORD *)this + 39) = v11;
    Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease(&v16);
    v7 = 0;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x21,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtdelegatedinktrailvisual.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
