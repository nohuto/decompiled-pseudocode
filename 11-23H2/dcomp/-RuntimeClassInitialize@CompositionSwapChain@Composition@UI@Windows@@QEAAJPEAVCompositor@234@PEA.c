/*
 * XREFs of ?RuntimeClassInitialize@CompositionSwapChain@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIDXGISwapChain1@@@Z @ 0x1801757D4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAUIDXGISwapChain1@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSwapChain@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAUIDXGISwapChain1@@@Z @ 0x180120834 (--$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEA.c)
 * Callees:
 *     ?CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnknown@@@Z @ 0x180004714 (-CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnk.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSwapChain::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionSwapChain *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct IDXGISwapChain1 *a3)
{
  int SurfaceFromDXGISwapChain; // ebx
  __int64 v6; // rdx
  DirectComposition::CDevice *v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SurfaceFromDXGISwapChain = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  if ( SurfaceFromDXGISwapChain < 0 )
  {
    v6 = 40LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionswapchaing.cpp",
      (const char *)(unsigned int)SurfaceFromDXGISwapChain);
    return (unsigned int)SurfaceFromDXGISwapChain;
  }
  v8 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 18);
  SurfaceFromDXGISwapChain = DirectComposition::CDevice::CreateSurfaceFromDXGISwapChain(
                               v8,
                               a3,
                               (struct IUnknown **)this + 18);
  if ( SurfaceFromDXGISwapChain < 0 )
  {
    v6 = 44LL;
    goto LABEL_3;
  }
  return 0LL;
}
