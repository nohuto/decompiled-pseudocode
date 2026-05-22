/*
 * XREFs of ??$MakeAndInitialize2@VShapeVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVShapeVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005D4B4
 * Callers:
 *     ?CreateShapeVisual@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIShapeVisual@345@@Z @ 0x18005D750 (-CreateShapeVisual@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIShapeVisual@345@@Z.c)
 * Callees:
 *     ??0ShapeVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D430 (--0ShapeVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShapeVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18005D6B4 (-RuntimeClassInitialize@ShapeVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ShapeVisual,Windows::UI::Composition::ShapeVisual,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::ShapeVisual **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  Windows::UI::Composition::ShapeVisual *v6; // rax
  Windows::UI::Composition::ShapeVisual *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  int v9; // edi
  void *v11; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::ShapeVisual *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x178uLL);
  v11 = v5;
  if ( v5 )
  {
    v6 = (Windows::UI::Composition::ShapeVisual *)memset_0(v5, 0, 0x178uLL);
    if ( v6 )
      v7 = Windows::UI::Composition::ShapeVisual::ShapeVisual(v6);
    else
      v7 = 0LL;
    v11 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::ShapeVisual::s_InterfaceType;
    v8 = *a2;
    v12 = v7;
    v9 = Windows::UI::Composition::ShapeVisual::RuntimeClassInitialize(v7, v8);
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
