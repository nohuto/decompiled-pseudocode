/*
 * XREFs of ??$MakeAndInitialize2@VSceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013EC74
 * Callers:
 *     ?Create@SceneMetallicRoughnessMaterialFactory@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUISceneMetallicRoughnessMaterial@2345@@Z @ 0x18013F220 (-Create@SceneMetallicRoughnessMaterialFactory@Scenes@Composition@UI@Windows@@UEAAJPEAUIComposito.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18013EFB8 (--0SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18013F4E0 (-RuntimeClassInitialize@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVC.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial,Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial,Windows::UI::Composition::Compositor *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v4 = DefaultHeap::Alloc(0x128uLL);
  v10 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v10);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial *)memset_0(v4, 0, 0x128uLL);
  if ( v6 )
    v7 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::SceneMetallicRoughnessMaterial(v6);
  else
    v7 = 0LL;
  v10 = 0LL;
  *((_QWORD *)v7 + 1) = &Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::s_InterfaceType;
  v8 = *a2;
  v11 = v7;
  v5 = Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::RuntimeClassInitialize(v7, v8);
  if ( v5 < 0 )
    goto LABEL_7;
  *a1 = v7;
  return 0LL;
}
