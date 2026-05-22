/*
 * XREFs of ??$MakeAndInitialize2@VSceneModelTransform@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneModelTransform@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180140350
 * Callers:
 *     ?EnsureTransform@SceneNode@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x180142254 (-EnsureTransform@SceneNode@Scenes@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180192C4C (-RuntimeClassInitialize@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@3.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneModelTransform,Windows::UI::Composition::Scenes::SceneModelTransform,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::CompositionObject **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::CompositionObject *v6; // rax
  Windows::UI::Composition::CompositionObject *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0xB0uLL);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::CompositionObject *)memset_0(v4, 0, 0xB0uLL);
  v7 = v6;
  if ( v6 )
  {
    Windows::UI::Composition::CompositionObject::CompositionObject(v6);
    *((_QWORD *)v7 + 17) = &Windows::UI::Composition::Internal::VisualReference::Api::`vftable';
    *((_QWORD *)v7 + 19) = 0LL;
    *(_QWORD *)v7 = &Windows::UI::Composition::Scenes::SceneModelTransform::`vftable';
    *((_QWORD *)v7 + 20) = &Windows::UI::Composition::Scenes::SceneModelTransform::Api::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v10 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::Scenes::SceneModelTransform::s_InterfaceType;
  v8 = *a2;
  v11 = v7;
  v5 = Windows::UI::Composition::Scenes::SceneModelTransform::RuntimeClassInitialize(v7, v8);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v7;
  return 0LL;
}
