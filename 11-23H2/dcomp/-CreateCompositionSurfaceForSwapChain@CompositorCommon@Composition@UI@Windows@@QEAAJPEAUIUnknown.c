/*
 * XREFs of ?CreateCompositionSurfaceForSwapChain@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@234@@Z @ 0x18012564C
 * Callers:
 *     ?CreateCompositionSurfaceForSwapChain@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@345@@Z @ 0x18010ED70 (-CreateCompositionSurfaceForSwapChain@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAUIDXGISwapChain1@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSwapChain@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAUIDXGISwapChain1@@@Z @ 0x180120834 (--$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEA.c)
 *     ??$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionSwapChain@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801223CC (--$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionSwapChain@Composition@UI@Windo.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateCompositionSurfaceForSwapChain(
        Windows::UI::Composition::CompositorCommon *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::ICompositionSurface **a3)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  struct Windows::UI::Composition::ICompositionSurface *v10; // rax
  struct IDXGISwapChain1 *v12; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::UI::Composition::Compositor *v13; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Windows::UI::Composition::ICompositionSurface *v15; // [rsp+58h] [rbp+28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+60h] [rbp+30h] BYREF
  struct IDXGISwapChain1 *v17; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  lpVtbl = a2->lpVtbl;
  v17 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IDXGISwapChain1 **))lpVtbl->QueryInterface)(
         a2,
         &GUID_790a45f7_0d42_4876_983a_0a55cfe6f4aa,
         &v17);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v16 = 0LL;
    v12 = v17;
    v13 = this;
    v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionSwapChain,Windows::UI::Composition::CompositionSwapChain,Windows::UI::Composition::Compositor *,IDXGISwapChain1 *>(
           &v16,
           &v13,
           &v12);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v9 = v16;
      v15 = 0LL;
      Windows::UI::Composition::CompositionSwapChain::ToApi<Windows::UI::Composition::ICompositionSurface>(
        v16,
        (__int64 *)&v15);
      v10 = v15;
      v15 = 0LL;
      *a3 = v10;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v15);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F7,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F1,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v17);
  return v7;
}
