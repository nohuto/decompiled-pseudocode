/*
 * XREFs of ??$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAUIDXGISwapChain1@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSwapChain@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAUIDXGISwapChain1@@@Z @ 0x180120834
 * Callers:
 *     ?CreateCompositionSurfaceForSwapChain@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@234@@Z @ 0x18012564C (-CreateCompositionSurfaceForSwapChain@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIUnknown.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0CompositionSwapChain@Composition@UI@Windows@@QEAA@XZ @ 0x180122A0C (--0CompositionSwapChain@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCompositionSwapChain@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionSwapChain@Composition@UI@Windows@@@Z @ 0x180124A20 (-Attach@-$ComPtr@VCompositionSwapChain@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVComposit.c)
 *     ?RuntimeClassInitialize@CompositionSwapChain@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIDXGISwapChain1@@@Z @ 0x1801757D4 (-RuntimeClassInitialize@CompositionSwapChain@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionSwapChain,Windows::UI::Composition::CompositionSwapChain,Windows::UI::Composition::Compositor *,IDXGISwapChain1 *>(
        Windows::UI::Composition::CompositionSwapChain **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct IDXGISwapChain1 **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::CompositionSwapChain *v8; // rax
  Windows::UI::Composition::CompositionSwapChain *v9; // rbx
  Windows::UI::Composition::CompositionSwapChain *v10; // rcx
  Windows::UI::Composition::CompositionSwapChain *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x98uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::CompositionSwapChain *)memset_0(v6, 0, 0x98uLL);
  if ( v8 )
    v8 = (Windows::UI::Composition::CompositionSwapChain *)Windows::UI::Composition::CompositionSwapChain::CompositionSwapChain(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionSwapChain>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::CompositionSwapChain::s_InterfaceType;
  v7 = Windows::UI::Composition::CompositionSwapChain::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
