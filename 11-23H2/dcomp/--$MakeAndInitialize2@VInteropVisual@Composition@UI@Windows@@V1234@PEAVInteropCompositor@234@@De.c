/*
 * XREFs of ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x18000D058
 * Callers:
 *     ?CreateInteropVisual@InteropCompositor@Composition@UI@Windows@@QEAAJPEAPEAVInteropVisual@234@@Z @ 0x18000CFF4 (-CreateInteropVisual@InteropCompositor@Composition@UI@Windows@@QEAAJPEAPEAVInteropVisual@234@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0InteropVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18005E298 (--0InteropVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x180060C30 (-RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z.c)
 *     ?Attach@?$ComPtr@VInteropVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisual@Composition@UI@Windows@@@Z @ 0x180060D24 (-Attach@-$ComPtr@VInteropVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisual@C.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropCompositor *>(
        Windows::UI::Composition::InteropVisual **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::InteropVisual *v5; // rax
  Windows::UI::Composition::InteropVisual *v6; // rbx
  Windows::UI::Composition::InteropVisual *v7; // rcx
  int v8; // edi
  Windows::UI::Composition::InteropVisual *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x148uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::InteropVisual *)memset_0(v4, 0, 0x148uLL);
    if ( v5 )
      v5 = (Windows::UI::Composition::InteropVisual *)Windows::UI::Composition::InteropVisual::InteropVisual(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropVisual>::Attach(&v10, v5);
    v6 = v10;
    v11 = 0LL;
    v7 = v10;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::InteropVisual::s_InterfaceType;
    v8 = Windows::UI::Composition::InteropVisual::RuntimeClassInitialize(v7, *a2, 0, 0LL);
    if ( v8 >= 0 )
    {
      *a1 = v6;
      return 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
  return (unsigned int)v8;
}
