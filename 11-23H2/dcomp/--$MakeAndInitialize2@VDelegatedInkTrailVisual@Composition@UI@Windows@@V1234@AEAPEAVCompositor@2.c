/*
 * XREFs of ??$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVCompositionSwapChain@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVCompositionSwapChain@456@@Z @ 0x18011AED4
 * Callers:
 *     ?CreateForSwapChain@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJPEAUICompositor@234@PEAUICompositionSurface@234@PEAPEAUIDelegatedInkTrailVisual@234@@Z @ 0x18011B460 (-CreateForSwapChain@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJPEAUICompositor@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0DelegatedInkTrailVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18011B054 (--0DelegatedInkTrailVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VDelegatedInkTrailVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@@Z @ 0x18011B2F0 (-Attach@-$ComPtr@VDelegatedInkTrailVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVDeleg.c)
 *     ?RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionSwapChain@234@@Z @ 0x18011B6E4 (-RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::DelegatedInkTrailVisual,Windows::UI::Composition::DelegatedInkTrailVisual,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::CompositionSwapChain *>(
        Windows::UI::Composition::DelegatedInkTrailVisual **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct Windows::UI::Composition::CompositionSwapChain **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::DelegatedInkTrailVisual *v8; // rax
  Windows::UI::Composition::DelegatedInkTrailVisual *v9; // rbx
  Windows::UI::Composition::DelegatedInkTrailVisual *v10; // rcx
  Windows::UI::Composition::DelegatedInkTrailVisual *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x140uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::DelegatedInkTrailVisual *)memset_0(v6, 0, 0x140uLL);
  if ( v8 )
    v8 = (Windows::UI::Composition::DelegatedInkTrailVisual *)Windows::UI::Composition::DelegatedInkTrailVisual::DelegatedInkTrailVisual(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::DelegatedInkTrailVisual>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::DelegatedInkTrailVisual::s_InterfaceType;
  v7 = Windows::UI::Composition::DelegatedInkTrailVisual::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
