/*
 * XREFs of ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_NAEAPEAX@Z @ 0x1800608A4
 * Callers:
 *     ?OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x18002B2B0 (-OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0InteropVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18005E298 (--0InteropVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x180060C30 (-RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z.c)
 *     ?Attach@?$ComPtr@VInteropVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisual@Composition@UI@Windows@@@Z @ 0x180060D24 (-Attach@-$ComPtr@VInteropVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisual@C.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropCompositor *,bool,void * &>(
        Windows::UI::Composition::InteropVisual **a1,
        struct Windows::UI::Composition::Compositor **a2,
        bool *a3,
        void **a4)
{
  void *v8; // rax
  Windows::UI::Composition::InteropVisual *v9; // rax
  Windows::UI::Composition::InteropVisual *v10; // rbx
  Windows::UI::Composition::InteropVisual *v11; // rcx
  int v12; // edi
  void *v14; // [rsp+20h] [rbp-28h] BYREF
  Windows::UI::Composition::InteropVisual *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v8 = DefaultHeap::Alloc(0x148uLL);
  v14 = v8;
  if ( v8 )
  {
    v9 = (Windows::UI::Composition::InteropVisual *)memset_0(v8, 0, 0x148uLL);
    if ( v9 )
      v9 = Windows::UI::Composition::InteropVisual::InteropVisual(v9);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropVisual>::Attach(&v15, v9);
    v10 = v15;
    v14 = 0LL;
    v11 = v15;
    *((_QWORD *)v15 + 1) = &Windows::UI::Composition::InteropVisual::s_InterfaceType;
    v12 = Windows::UI::Composition::InteropVisual::RuntimeClassInitialize(v11, *a2, *a3, *a4);
    if ( v12 >= 0 )
    {
      *a1 = v10;
      return 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
  return (unsigned int)v12;
}
