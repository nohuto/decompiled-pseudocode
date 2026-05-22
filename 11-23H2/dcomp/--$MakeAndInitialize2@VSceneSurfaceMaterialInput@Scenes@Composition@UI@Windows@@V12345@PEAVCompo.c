/*
 * XREFs of ??$MakeAndInitialize2@VSceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180144EFC
 * Callers:
 *     ?Create@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUISceneSurfaceMaterialInput@2345@@Z @ 0x180145060 (-Create@SceneSurfaceMaterialInputFactory@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositor@345.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180122D34 (--0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18014518C (-RuntimeClassInitialize@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAVCompos.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput,Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput,Windows::UI::Composition::Compositor *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::Scenes::SceneObject *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0xD0uLL);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::Scenes::SceneObject *)memset_0(v4, 0, 0xD0uLL);
  v7 = v6;
  if ( v6 )
  {
    Windows::UI::Composition::Scenes::SceneObject::SceneObject(v6);
    *((_QWORD *)v7 + 19) = &Windows::UI::Composition::Scenes::SceneMaterialInput::Api::`vftable';
    *(_QWORD *)v7 = &Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::`vftable';
    *((_QWORD *)v7 + 23) = 0LL;
    *((_QWORD *)v7 + 21) = &Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::Api::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  v10 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::s_InterfaceType;
  v8 = *a2;
  v11 = v7;
  v5 = Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput::RuntimeClassInitialize(v7, v8);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v7;
  return 0LL;
}
