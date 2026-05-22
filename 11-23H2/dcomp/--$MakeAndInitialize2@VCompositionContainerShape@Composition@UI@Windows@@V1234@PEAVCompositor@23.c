/*
 * XREFs of ??$MakeAndInitialize2@VCompositionContainerShape@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionContainerShape@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18005CD24
 * Callers:
 *     ?CreateContainerShape@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionContainerShape@345@@Z @ 0x18005CEF0 (-CreateContainerShape@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionConta.c)
 * Callees:
 *     ??0CompositionContainerShape@Composition@UI@Windows@@QEAA@XZ @ 0x18005CDE0 (--0CompositionContainerShape@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionContainerShape@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18005CE64 (-RuntimeClassInitialize@CompositionContainerShape@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::CompositionContainerShape **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  HANDLE ProcessHeap; // rax
  void *v5; // rax
  Windows::UI::Composition::CompositionContainerShape *v6; // rax
  Windows::UI::Composition::CompositionContainerShape *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  int v9; // edi
  void *v11; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionContainerShape *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0xD8uLL);
  v11 = v5;
  if ( v5 )
  {
    v6 = (Windows::UI::Composition::CompositionContainerShape *)memset_0(v5, 0, 0xD8uLL);
    if ( v6 )
      v7 = (Windows::UI::Composition::CompositionContainerShape *)Windows::UI::Composition::CompositionContainerShape::CompositionContainerShape(v6);
    else
      v7 = 0LL;
    v11 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::CompositionContainerShapeT<Windows::UI::Composition::CompositionContainerShape,Windows::UI::Composition::CompositionShape>::s_InterfaceType;
    v8 = *a2;
    v12 = v7;
    v9 = Windows::UI::Composition::CompositionContainerShape::RuntimeClassInitialize(v7, v8);
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
