/*
 * XREFs of ??$MakeAndInitialize2@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@PEAVSceneMeshRendererComponent@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@$$QEAPEAVSceneMeshRendererComponent@4567@@Z @ 0x180133048
 * Callers:
 *     ?RuntimeClassInitialize@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x1801339CC (-RuntimeClassInitialize@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAAJPEAVCompo.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x1801332C4 (--0SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVSceneMeshRendererComponent@2345@@Z @ 0x18018F348 (-RuntimeClassInitialize@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAVCo.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap,Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::Scenes::SceneMeshRendererComponent *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct Windows::UI::Composition::Scenes::SceneMeshRendererComponent **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  struct Windows::UI::Composition::Scenes::SceneMeshRendererComponent *v10; // r8
  struct Windows::UI::Composition::Compositor *v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0xC0uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap *)memset_0(v6, 0, 0xC0uLL);
  if ( v8 )
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::SceneMeshMaterialAttributeMap(v8);
  else
    v9 = 0LL;
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
