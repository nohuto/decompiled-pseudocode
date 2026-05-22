/*
 * XREFs of ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_N@Z @ 0x180121E0C
 * Callers:
 *     ?CreateSharedVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisual@234@@Z @ 0x180126EE8 (-CreateSharedVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisual@234@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 *     ??0Visual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D570 (--0Visual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisual@Composition@UI@Windows@@@Z @ 0x180086B2C (-Attach@-$ComPtr@VVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisual@Composition@UI@.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Visual,Windows::UI::Composition::Visual,Windows::UI::Composition::Compositor *,enum MIL_RESOURCE_TYPE,bool>(
        Windows::UI::Composition::Visual **a1,
        struct Windows::UI::Composition::Compositor **a2,
        unsigned int *a3,
        bool *a4)
{
  void *v8; // rax
  int v9; // edi
  Microsoft::WRL2::NestableRuntimeClass *v10; // rax
  Windows::UI::Composition::Visual *v11; // rbx
  Windows::UI::Composition::Visual *v12; // rcx
  void *v14; // [rsp+30h] [rbp-28h] BYREF
  Windows::UI::Composition::Visual *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v8 = DefaultHeap::Alloc(0x128uLL);
  v14 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    return (unsigned int)v9;
  }
  v10 = (Microsoft::WRL2::NestableRuntimeClass *)memset_0(v8, 0, 0x128uLL);
  if ( v10 )
    v10 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Visual::Visual((unsigned __int64)v10);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Visual>::Attach(&v15, v10);
  v11 = v15;
  v14 = 0LL;
  v12 = v15;
  *((_QWORD *)v15 + 1) = &Windows::UI::Composition::Visual::s_InterfaceType;
  v9 = Windows::UI::Composition::Visual::RuntimeClassInitialize(v12, *a2, *a3, *a4, 0LL);
  if ( v9 < 0 )
    goto LABEL_6;
  *a1 = v11;
  return 0LL;
}
