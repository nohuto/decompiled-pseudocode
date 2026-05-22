/*
 * XREFs of ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUIGraphicsEffect@Effects@Graphics@4@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUIGraphicsEffect@Effects@Graphics@6@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@6@@Z @ 0x180019F38
 * Callers:
 *     ?CreateEffectFactory@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAVCompositionEffectFactory@234@@Z @ 0x180019C84 (-CreateEffectFactory@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIGraphicsEffect@Effects@G.c)
 * Callees:
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z @ 0x180019CDC (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 *     ??0CompositionEffectFactory@Composition@UI@Windows@@QEAA@XZ @ 0x18001A0A4 (--0CompositionEffectFactory@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCompositionEffectFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionEffectFactory@Composition@UI@Windows@@@Z @ 0x18001A924 (-Attach@-$ComPtr@VCompositionEffectFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVComp.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionEffectFactory,Windows::UI::Composition::CompositionEffectFactory,Windows::UI::Composition::Compositor *,Windows::Graphics::Effects::IGraphicsEffect * &,Windows::Foundation::Collections::IIterable<HSTRING__ *> * &>(
        Windows::UI::Composition::CompositionEffectFactory **a1,
        struct Windows::UI::Composition::Compositor **a2,
        __int64 *a3,
        __int64 *a4)
{
  void *v8; // rax
  Windows::UI::Composition::CompositionEffectFactory *v9; // rax
  Windows::UI::Composition::CompositionEffectFactory *v10; // rbx
  Windows::UI::Composition::CompositionEffectFactory *v11; // rcx
  int v12; // edi
  void *v14; // [rsp+20h] [rbp-28h] BYREF
  Windows::UI::Composition::CompositionEffectFactory *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v8 = DefaultHeap::Alloc(0xF0uLL);
  v14 = v8;
  if ( v8 )
  {
    v9 = (Windows::UI::Composition::CompositionEffectFactory *)memset_0(v8, 0, 0xF0uLL);
    if ( v9 )
      v9 = (Windows::UI::Composition::CompositionEffectFactory *)Windows::UI::Composition::CompositionEffectFactory::CompositionEffectFactory(v9);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionEffectFactory>::Attach(&v15, v9);
    v10 = v15;
    v14 = 0LL;
    v11 = v15;
    *((_QWORD *)v15 + 1) = &Windows::UI::Composition::CompositionEffectFactory::s_InterfaceType;
    v12 = Windows::UI::Composition::CompositionEffectFactory::RuntimeClassInitialize(v11, *a2, *a3, *a4);
    if ( v12 >= 0 )
    {
      *a1 = v10;
      return 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
  return (unsigned int)v12;
}
