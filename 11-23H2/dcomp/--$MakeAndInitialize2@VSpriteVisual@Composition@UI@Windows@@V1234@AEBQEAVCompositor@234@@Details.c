/*
 * XREFs of ??$MakeAndInitialize2@VSpriteVisual@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSpriteVisual@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015D30
 * Callers:
 *     ?EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x1800159D0 (-EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015B98 (-EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??0SpriteVisual@Composition@UI@Windows@@QEAA@XZ @ 0x180015DDC (--0SpriteVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpriteVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180015E28 (-RuntimeClassInitialize@SpriteVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?Attach@?$ComPtr@VSpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSpriteVisual@Composition@UI@Windows@@@Z @ 0x180015E54 (-Attach@-$ComPtr@VSpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSpriteVisual@Com.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::SpriteVisual,Windows::UI::Composition::Compositor * const &>(
        Windows::UI::Composition::SpriteVisual **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::SpriteVisual *v5; // rax
  Windows::UI::Composition::SpriteVisual *v6; // rbx
  Windows::UI::Composition::SpriteVisual *v7; // rcx
  int v8; // edi
  Windows::UI::Composition::SpriteVisual *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x158uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::SpriteVisual *)memset_0(v4, 0, 0x158uLL);
    if ( v5 )
      v5 = (Windows::UI::Composition::SpriteVisual *)Windows::UI::Composition::SpriteVisual::SpriteVisual(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::SpriteVisual>::Attach(&v10, v5);
    v6 = v10;
    v11 = 0LL;
    v7 = v10;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::SpriteVisual::s_InterfaceType;
    v8 = Windows::UI::Composition::SpriteVisual::RuntimeClassInitialize(v7, *a2);
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
