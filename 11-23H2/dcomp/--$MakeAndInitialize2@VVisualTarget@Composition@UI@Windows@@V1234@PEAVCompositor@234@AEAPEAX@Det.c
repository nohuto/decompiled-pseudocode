/*
 * XREFs of ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18000B520
 * Callers:
 *     ?OpenSharedTargetFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualTarget@234@@Z @ 0x18000B4C8 (-OpenSharedTargetFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualTarge.c)
 *     ?Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@PEAX@Z @ 0x180111E48 (-Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVComposit.c)
 * Callees:
 *     ?Attach@?$ComPtr@VVisualTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualTarget@Composition@UI@Windows@@@Z @ 0x18000B5CC (-Attach@-$ComPtr@VVisualTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualTarget@Com.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x18005D944 (-RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z.c)
 *     ??0VisualTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18005DD68 (--0VisualTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualTarget,Windows::UI::Composition::VisualTarget,Windows::UI::Composition::Compositor *,void * &>(
        Windows::UI::Composition::VisualTarget **a1,
        struct Windows::UI::Composition::Compositor **a2,
        void **a3)
{
  void *v6; // rax
  Windows::UI::Composition::VisualTarget *v7; // rax
  Windows::UI::Composition::VisualTarget *v8; // rbx
  Windows::UI::Composition::VisualTarget *v9; // rcx
  int v10; // edi
  Windows::UI::Composition::VisualTarget *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0xB8uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::VisualTarget *)memset_0(v6, 0, 0xB8uLL);
    if ( v7 )
      v7 = (Windows::UI::Composition::VisualTarget *)Windows::UI::Composition::VisualTarget::VisualTarget(v7);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::VisualTarget>::Attach(&v12, v7);
    v8 = v12;
    v13 = 0LL;
    v9 = v12;
    *((_QWORD *)v12 + 1) = &Windows::UI::Composition::VisualTarget::s_InterfaceType;
    v10 = Windows::UI::Composition::VisualTarget::RuntimeClassInitialize(v9, *a2, *a3);
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
