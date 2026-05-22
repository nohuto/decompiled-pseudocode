/*
 * XREFs of ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@AEBQEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@AEBQEAVCompositor@456@@Z @ 0x180015E88
 * Callers:
 *     ?EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x180015B98 (-EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@CompositionColorBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180015F5C (-RuntimeClassInitialize@CompositionColorBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?Attach@?$ComPtr@VCompositionColorBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionColorBrush@Composition@UI@Windows@@@Z @ 0x180016138 (-Attach@-$ComPtr@VCompositionColorBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVComposi.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::Compositor * const &>(
        Windows::UI::Composition::CompositionColorBrush **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionObject *v5; // rax
  Windows::UI::Composition::CompositionObject *v6; // rbx
  Windows::UI::Composition::CompositionColorBrush *v7; // rbx
  Windows::UI::Composition::CompositionColorBrush *v8; // rcx
  int v9; // edi
  Windows::UI::Composition::CompositionColorBrush *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0xB8uLL);
  v12 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionObject *)memset_0(v4, 0, 0xB8uLL);
    v6 = v5;
    if ( v5 )
    {
      Windows::UI::Composition::CompositionObject::CompositionObject(v5);
      *((_QWORD *)v6 + 17) = &Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::Api::`vftable';
      *((_QWORD *)v6 + 19) = &Windows::UI::Composition::CompositionColorBrushT<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionBrush>::Api::`vftable';
      *(_QWORD *)v6 = &Windows::UI::Composition::CompositionColorBrush::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionColorBrush>::Attach(&v11, v6);
    v7 = v11;
    v12 = 0LL;
    v8 = v11;
    *((_QWORD *)v11 + 1) = &Windows::UI::Composition::CompositionColorBrushT<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType;
    v9 = Windows::UI::Composition::CompositionColorBrush::RuntimeClassInitialize(v8, *a2);
    if ( v9 >= 0 )
    {
      *a1 = v7;
      return 0LL;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
  return (unsigned int)v9;
}
