/*
 * XREFs of ??$MakeAndInitialize2@VInteropVisualReference@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReference@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_NAEAPEAX@Z @ 0x18015C080
 * Callers:
 *     ?OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x18002B2B0 (-OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180122D34 (--0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InteropVisualReference@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x18019A9E0 (-RuntimeClassInitialize@InteropVisualReference@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualReference,Windows::UI::Composition::InteropVisualReference,Windows::UI::Composition::InteropCompositor *,bool,void * &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        char *a3,
        void **a4)
{
  void *v8; // rax
  int v9; // edi
  Windows::UI::Composition::Scenes::SceneObject *v10; // rax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  void *v12; // r9
  char v13; // r8
  struct Windows::UI::Composition::Compositor *v14; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+20h] [rbp-28h] BYREF
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v8 = DefaultHeap::Alloc(0xB8uLL);
  v17 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
    return (unsigned int)v9;
  }
  v10 = (Windows::UI::Composition::Scenes::SceneObject *)memset_0(v8, 0, 0xB8uLL);
  v11 = v10;
  if ( v10 )
  {
    Windows::UI::Composition::Scenes::SceneObject::SceneObject(v10);
    *(_QWORD *)v11 = &Windows::UI::Composition::InteropVisualReference::`vftable';
    *((_QWORD *)v11 + 19) = &Windows::UI::Composition::InteropVisualReference::Api::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  v17 = 0LL;
  *((_QWORD *)v11 + 1) = &Windows::UI::Composition::InteropVisualReference::s_InterfaceType;
  v12 = *a4;
  v13 = *a3;
  v14 = *a2;
  v16 = v11;
  v9 = Windows::UI::Composition::InteropVisualReference::RuntimeClassInitialize(v11, v14, v13, v12);
  if ( v9 < 0 )
    goto LABEL_7;
  *a1 = v11;
  return 0LL;
}
