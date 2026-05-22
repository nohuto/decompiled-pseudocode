/*
 * XREFs of ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_N@Z @ 0x180089BC4
 * Callers:
 *     ?CreateSharedResource@InteropCompositor@Composition@UI@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CA74 (-CreateSharedResource@InteropCompositor@Composition@UI@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0InteropVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18005E298 (--0InteropVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x180060C30 (-RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z.c)
 *     ?Attach@?$ComPtr@VInteropVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisual@Composition@UI@Windows@@@Z @ 0x180060D24 (-Attach@-$ComPtr@VInteropVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisual@C.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropCompositor *,bool>(
        Windows::UI::Composition::InteropVisual **a1,
        DirectComposition::CDevice ***a2,
        bool *a3)
{
  void *v6; // rax
  Windows::UI::Composition::InteropVisual *v7; // rax
  Windows::UI::Composition::InteropVisual *v8; // rbx
  Windows::UI::Composition::InteropVisual *v9; // rcx
  int v10; // edi
  Windows::UI::Composition::InteropVisual *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x148uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::InteropVisual *)memset_0(v6, 0, 0x148uLL);
    if ( v7 )
      v7 = Windows::UI::Composition::InteropVisual::InteropVisual(v7);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropVisual>::Attach(&v12, v7);
    v8 = v12;
    v13 = 0LL;
    v9 = v12;
    *((_QWORD *)v12 + 1) = &Windows::UI::Composition::InteropVisual::s_InterfaceType;
    v10 = Windows::UI::Composition::InteropVisual::RuntimeClassInitialize(v9, *a2, *a3, 0LL);
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
