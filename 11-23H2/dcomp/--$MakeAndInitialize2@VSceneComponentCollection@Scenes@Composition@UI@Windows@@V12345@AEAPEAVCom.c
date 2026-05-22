/*
 * XREFs of ??$MakeAndInitialize2@VSceneComponentCollection@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@PEAVSceneNode@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneComponentCollection@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@$$QEAPEAVSceneNode@4567@@Z @ 0x180140294
 * Callers:
 *     ?RuntimeClassInitialize@SceneNode@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x1801440EC (-RuntimeClassInitialize@SceneNode@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0SceneComponentCollection@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x1801412A4 (--0SceneComponentCollection@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SceneComponentCollection@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVSceneNode@2345@@Z @ 0x180192958 (-RuntimeClassInitialize@SceneComponentCollection@Scenes@Composition@UI@Windows@@QEAAJPEAVComposi.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::Scenes::SceneNode *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct Windows::UI::Composition::Scenes::SceneNode **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Scenes::SceneComponentCollection *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  struct Windows::UI::Composition::Scenes::SceneNode *v10; // r8
  struct Windows::UI::Composition::Compositor *v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0xD0uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Scenes::SceneComponentCollection *)memset_0(v6, 0, 0xD0uLL);
  if ( v8 )
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Scenes::SceneComponentCollection::SceneComponentCollection(v8);
  else
    v9 = 0LL;
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::Scenes::SceneComponentCollection::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::Scenes::SceneComponentCollection::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
