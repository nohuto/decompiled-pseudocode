/*
 * XREFs of ??$MakeAndInitialize2@VCompositionEffectBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionEffectFactory@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionEffectFactory@456@@Z @ 0x18002E024
 * Callers:
 *     ?CreateBrush@Api@CompositionEffectFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositionEffectBrush@345@@Z @ 0x18002DF90 (-CreateBrush@Api@CompositionEffectFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositionEffect.c)
 * Callees:
 *     ??0CompositionEffectBrush@Composition@UI@Windows@@QEAA@XZ @ 0x18002E0E0 (--0CompositionEffectBrush@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionEffectFactory@234@@Z @ 0x18002E13C (-RuntimeClassInitialize@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@P.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionEffectFactory *>(
        Windows::UI::Composition::CompositionEffectBrush **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct Windows::UI::Composition::CompositionEffectFactory **a3)
{
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  Windows::UI::Composition::CompositionEffectBrush *v8; // rax
  Windows::UI::Composition::CompositionEffectBrush *v9; // rbx
  struct Windows::UI::Composition::CompositionEffectFactory *v10; // r8
  struct Windows::UI::Composition::Compositor *v11; // rdx
  int v12; // edi
  void *v14; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionEffectBrush *v15; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0xC0uLL);
  v14 = v7;
  if ( v7 )
  {
    v8 = (Windows::UI::Composition::CompositionEffectBrush *)memset_0(v7, 0, 0xC0uLL);
    if ( v8 )
      v9 = (Windows::UI::Composition::CompositionEffectBrush *)Windows::UI::Composition::CompositionEffectBrush::CompositionEffectBrush(v8);
    else
      v9 = 0LL;
    v14 = 0LL;
    *((_QWORD *)v9 + 1) = &Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType;
    v10 = *a3;
    v11 = *a2;
    v15 = v9;
    v12 = Windows::UI::Composition::CompositionEffectBrush::RuntimeClassInitialize(v9, v11, v10);
    if ( v12 >= 0 )
    {
      *a1 = v9;
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
