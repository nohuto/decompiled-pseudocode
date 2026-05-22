/*
 * XREFs of ??$MakeAndInitialize2@VCompositionSurfaceBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSurfaceBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180045644
 * Callers:
 *     ?CreateSurfaceBrushWithSurface@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@345@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1800454A0 (-CreateSurfaceBrushWithSurface@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionSurfa.c)
 * Callees:
 *     ?RuntimeClassInitialize@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180045580 (-RuntimeClassInitialize@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@.c)
 *     ??0CompositionSurfaceBrush@Composition@UI@Windows@@QEAA@XZ @ 0x180045700 (--0CompositionSurfaceBrush@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::Compositor *>(
        __int64 *a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  Windows::UI::Composition::CompositionSurfaceBrush *v6; // rax
  __int64 v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  int v9; // edi
  void *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x130uLL);
  v11 = v5;
  if ( v5 )
  {
    v6 = (Windows::UI::Composition::CompositionSurfaceBrush *)memset_0(v5, 0, 0x130uLL);
    if ( v6 )
      v7 = Windows::UI::Composition::CompositionSurfaceBrush::CompositionSurfaceBrush(v6);
    else
      v7 = 0LL;
    v11 = 0LL;
    *(_QWORD *)(v7 + 8) = &Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType;
    v8 = *a2;
    v12 = v7;
    v9 = Windows::UI::Composition::CompositionSurfaceBrush::RuntimeClassInitialize(
           (Microsoft::WRL2::NestableRuntimeClass **)v7,
           v8);
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
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
  return (unsigned int)v9;
}
