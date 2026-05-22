/*
 * XREFs of ?CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionDelegatedInkTrail@@@Z @ 0x1800FF760
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnknown@@@Z @ 0x180004714 (-CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnk.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkProxy@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E5C04 (-InternalRelease@-$ComPtr@VCGenericInkProxy@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E6968 (-Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@.c)
 *     ?InternalRelease@?$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E6BD8 (-InternalRelease@-$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateDelegatedInkTrailForSwapChain(
        DirectComposition::CDevice *this,
        struct IUnknown *a2,
        struct IDCompositionDelegatedInkTrail **a3)
{
  struct DirectComposition::CCompositionSurfaceProxy *v3; // rbx
  struct IUnknownVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int SurfaceFromDXGISwapChain; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  DirectComposition::CDevice *v12; // rdi
  int v13; // eax
  struct DirectComposition::CDelegatedInkTrailImpl *v14; // rax
  struct IUnknown *v16[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct DirectComposition::CDelegatedInkTrailImpl *v18; // [rsp+58h] [rbp+28h] BYREF
  struct IDXGISwapChain1 *v19; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0LL;
  v16[0] = 0LL;
  if ( a2 )
  {
    lpVtbl = a2->lpVtbl;
    v19 = 0LL;
    QueryInterface = lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v19);
    SurfaceFromDXGISwapChain = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IDXGISwapChain1 **))QueryInterface)(
                                 a2,
                                 &GUID_790a45f7_0d42_4876_983a_0a55cfe6f4aa,
                                 &v19);
    v10 = SurfaceFromDXGISwapChain;
    if ( SurfaceFromDXGISwapChain < 0 )
    {
      v11 = 244LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
        (const char *)(unsigned int)SurfaceFromDXGISwapChain);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v19);
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<DirectComposition::CGenericInkProxy>::InternalRelease((DirectComposition::CTransformGroupProxy **)v16);
    v12 = (DirectComposition::CDevice *)((char *)this - 56);
    SurfaceFromDXGISwapChain = DirectComposition::CDevice::CreateSurfaceFromDXGISwapChain(v12, v19, v16);
    v10 = SurfaceFromDXGISwapChain;
    if ( SurfaceFromDXGISwapChain < 0 )
    {
      v11 = 245LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v19);
    v3 = (struct DirectComposition::CCompositionSurfaceProxy *)v16[0];
  }
  else
  {
    v12 = (DirectComposition::CDevice *)((char *)this - 56);
  }
  v18 = 0LL;
  Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)&v18);
  v13 = DirectComposition::CDelegatedInkTrailImpl::Create(v12, v3, &v18);
  v10 = v13;
  if ( v13 >= 0 )
  {
    v14 = v18;
    v18 = 0LL;
    *a3 = (struct IDCompositionDelegatedInkTrail *)(((unsigned __int64)v14 + 16) & -(__int64)(v14 != 0LL));
    Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)&v18);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease((__int64 *)&v18);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<DirectComposition::CGenericInkProxy>::InternalRelease((DirectComposition::CTransformGroupProxy **)v16);
  return v10;
}
