/*
 * XREFs of ??$MakeAndInitialize2@VSharedSectionWrapper@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAV?$span@E$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVSharedSectionWrapper@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAV?$span@E$0?0@gsl@@@Z @ 0x180131F68
 * Callers:
 *     ?FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W4DirectXPixelFormat@DirectX@Graphics@5@PEAUIMemoryBuffer@Foundation@5@@Z @ 0x18013254C (-FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@SharedSectionWrapper@Composition@UI@Windows@@QEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BF64 (-RuntimeClassInitialize@SharedSectionWrapper@Composition@UI@Windows@@QEAAJPEAVCompositor@234@V-$.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::SharedSectionWrapper,Windows::UI::Composition::SharedSectionWrapper,Windows::UI::Composition::Compositor *,gsl::span<unsigned char,-1> &>(
        Windows::UI::Composition::CompositionObject **a1)
{
  void *v2; // rax
  int v3; // edi
  Windows::UI::Composition::CompositionObject *v4; // rax
  Windows::UI::Composition::CompositionObject *v5; // rbx
  void *v7; // [rsp+50h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v8 = 0LL;
  v2 = DefaultHeap::Alloc(0xA0uLL);
  v7 = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v8);
    return (unsigned int)v3;
  }
  v4 = (Windows::UI::Composition::CompositionObject *)memset_0(v2, 0, 0xA0uLL);
  v5 = v4;
  if ( v4 )
  {
    Windows::UI::Composition::CompositionObject::CompositionObject(v4);
    *(_QWORD *)v5 = &Windows::UI::Composition::SharedSectionWrapper::`vftable';
    *((_QWORD *)v5 + 17) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v7 = 0LL;
  *((_QWORD *)v5 + 1) = &Windows::UI::Composition::CompositionObject::s_InterfaceType;
  v8 = v5;
  v3 = Windows::UI::Composition::SharedSectionWrapper::RuntimeClassInitialize(v5);
  if ( v3 < 0 )
    goto LABEL_7;
  *a1 = v5;
  return 0LL;
}
