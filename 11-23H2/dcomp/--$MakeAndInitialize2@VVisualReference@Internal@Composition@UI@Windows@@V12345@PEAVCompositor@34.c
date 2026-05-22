/*
 * XREFs of ??$MakeAndInitialize2@VVisualReference@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@W4MIL_RESOURCE_TYPE@@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReference@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_NAEAPEAX@Z @ 0x180121FC8
 * Callers:
 *     ?OpenSharedVisualReferenceFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualReference@Internal@234@@Z @ 0x180128D14 (-OpenSharedVisualReferenceFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVi.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180122D34 (--0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@I_NPEAX@Z @ 0x18015787C (-RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::VisualReference,Windows::UI::Composition::Internal::VisualReference,Windows::UI::Composition::Compositor *,enum MIL_RESOURCE_TYPE,bool,void * &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        unsigned int *a3,
        char *a4,
        void **a5)
{
  void *v9; // rax
  int v10; // edi
  Windows::UI::Composition::Scenes::SceneObject *v11; // rax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rbx
  char v13; // r9
  unsigned int v14; // r8d
  struct Windows::UI::Composition::Compositor *v15; // rdx
  void *v17; // [rsp+20h] [rbp-38h]
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+30h] [rbp-28h] BYREF
  void *v19; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v18 = 0LL;
  v9 = DefaultHeap::Alloc(0x98uLL);
  v19 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v19);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
    return (unsigned int)v10;
  }
  v11 = (Windows::UI::Composition::Scenes::SceneObject *)memset_0(v9, 0, 0x98uLL);
  if ( v11 )
    v12 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Scenes::SceneObject::SceneObject(v11);
  else
    v12 = 0LL;
  v19 = 0LL;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::Internal::VisualReference::s_InterfaceType;
  v13 = *a4;
  v14 = *a3;
  v15 = *a2;
  v17 = *a5;
  v18 = v12;
  v10 = Windows::UI::Composition::Internal::VisualReference::RuntimeClassInitialize(v12, v15, v14, v13, v17);
  if ( v10 < 0 )
    goto LABEL_7;
  *a1 = v12;
  return 0LL;
}
