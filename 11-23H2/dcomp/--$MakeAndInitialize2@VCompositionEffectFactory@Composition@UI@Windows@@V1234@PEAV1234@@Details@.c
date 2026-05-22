/*
 * XREFs of ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAV1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAV3456@@Z @ 0x180019FF8
 * Callers:
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z @ 0x180019CDC (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 * Callees:
 *     ??0CompositionEffectFactory@Composition@UI@Windows@@QEAA@XZ @ 0x18001A0A4 (--0CompositionEffectFactory@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18001A114 (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?Attach@?$ComPtr@VCompositionEffectFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionEffectFactory@Composition@UI@Windows@@@Z @ 0x18001A924 (-Attach@-$ComPtr@VCompositionEffectFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVComp.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionEffectFactory,Windows::UI::Composition::CompositionEffectFactory,Windows::UI::Composition::CompositionEffectFactory *>(
        Windows::UI::Composition::CompositionEffectFactory **a1,
        struct Windows::UI::Composition::CompositionEffectFactory **a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionEffectFactory *v5; // rax
  Windows::UI::Composition::CompositionEffectFactory *v6; // rbx
  Windows::UI::Composition::CompositionEffectFactory *v7; // rcx
  int v8; // edi
  Windows::UI::Composition::CompositionEffectFactory *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0xF0uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionEffectFactory *)memset_0(v4, 0, 0xF0uLL);
    if ( v5 )
      v5 = (Windows::UI::Composition::CompositionEffectFactory *)Windows::UI::Composition::CompositionEffectFactory::CompositionEffectFactory(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionEffectFactory>::Attach(&v10, v5);
    v6 = v10;
    v11 = 0LL;
    v7 = v10;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::CompositionEffectFactory::s_InterfaceType;
    v8 = Windows::UI::Composition::CompositionEffectFactory::RuntimeClassInitialize(v7, *a2);
    if ( v8 >= 0 )
    {
      *a1 = v6;
      return 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
  return (unsigned int)v8;
}
