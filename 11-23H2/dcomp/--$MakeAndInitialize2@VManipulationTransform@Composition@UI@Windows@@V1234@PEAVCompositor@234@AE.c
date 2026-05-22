/*
 * XREFs of ??$MakeAndInitialize2@VManipulationTransform@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVManipulationTransform@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180081FA4
 * Callers:
 *     ?OpenSharedManipulationTransformFromHandle@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUICompositionManipulationTransformPartner@345@@Z @ 0x180081E50 (-OpenSharedManipulationTransformFromHandle@DCPrivate@CompositorCommon@Composition@UI@Windows@@UE.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0ManipulationTransform@Composition@UI@Windows@@QEAA@XZ @ 0x18008222C (--0ManipulationTransform@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VManipulationTransform@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVManipulationTransform@Composition@UI@Windows@@@Z @ 0x180082330 (-Attach@-$ComPtr@VManipulationTransform@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVManipul.c)
 *     ?RuntimeClassInitialize@ManipulationTransform@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x180082364 (-RuntimeClassInitialize@ManipulationTransform@Composition@UI@Windows@@QEAAJPEAVComp_ea_180082364.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ManipulationTransform,Windows::UI::Composition::ManipulationTransform,Windows::UI::Composition::Compositor *,void * &>(
        Windows::UI::Composition::ManipulationTransform **a1,
        struct Windows::UI::Composition::Compositor **a2,
        void **a3)
{
  void *v6; // rax
  Windows::UI::Composition::ManipulationTransform *v7; // rax
  Windows::UI::Composition::ManipulationTransform *v8; // rbx
  Windows::UI::Composition::ManipulationTransform *v9; // rcx
  int v10; // edi
  Windows::UI::Composition::ManipulationTransform *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x98uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::ManipulationTransform *)memset_0(v6, 0, 0x98uLL);
    if ( v7 )
      v7 = (Windows::UI::Composition::ManipulationTransform *)Windows::UI::Composition::ManipulationTransform::ManipulationTransform(v7);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ManipulationTransform>::Attach(&v12, v7);
    v8 = v12;
    v13 = 0LL;
    v9 = v12;
    *((_QWORD *)v12 + 1) = &Windows::UI::Composition::ManipulationTransform::s_InterfaceType;
    v10 = Windows::UI::Composition::ManipulationTransform::RuntimeClassInitialize(v9, *a2, *a3);
    if ( v10 >= 0 )
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
  return (unsigned int)v10;
}
