/*
 * XREFs of ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_NAEAPEAX@Z @ 0x180121EE4
 * Callers:
 *     ?OpenSharedVisualFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisual@234@@Z @ 0x180128AE4 (-OpenSharedVisualFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisual@234@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 *     ??0Visual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D570 (--0Visual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisual@Composition@UI@Windows@@@Z @ 0x180086B2C (-Attach@-$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisual@Composition@UI@.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Visual,Windows::UI::Composition::Visual,Windows::UI::Composition::Compositor *,enum MIL_RESOURCE_TYPE,bool,void * &>(
        Windows::UI::Composition::Visual **a1,
        struct Windows::UI::Composition::Compositor **a2,
        unsigned int *a3,
        bool *a4,
        void **a5)
{
  void *v9; // rax
  int v10; // edi
  Microsoft::WRL2::NestableRuntimeClass *v11; // rax
  Windows::UI::Composition::Visual *v12; // rbx
  void *v14; // [rsp+30h] [rbp-28h] BYREF
  Windows::UI::Composition::Visual *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v9 = DefaultHeap::Alloc(0x128uLL);
  v14 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    return (unsigned int)v10;
  }
  v11 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v9, 0, 0x128uLL);
  if ( v11 )
    v11 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Visual::Visual((unsigned __int64)v11);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Visual>::Attach(&v15, v11);
  v12 = v15;
  v14 = 0LL;
  *((_QWORD *)v15 + 1) = &Windows::UI::Composition::Visual::s_InterfaceType;
  v10 = Windows::UI::Composition::Visual::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5);
  if ( v10 < 0 )
    goto LABEL_6;
  *a1 = v12;
  return 0LL;
}
