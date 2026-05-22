/*
 * XREFs of ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEA_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEA_NAEAPEAX@Z @ 0x18015B318
 * Callers:
 *     ?CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RESOURCE_TYPE@@_NPEAXPEAIPEAPEAUIUnknown@@1@Z @ 0x18015B730 (-CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RE.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0InteropVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18005E298 (--0InteropVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z @ 0x180060C30 (-RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z.c)
 *     ?Attach@?$ComPtr@VInteropVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisual@Composition@UI@Windows@@@Z @ 0x180060D24 (-Attach@-$ComPtr@VInteropVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisual@C.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropDwmCompositor *,bool &,void * &>(
        Windows::UI::Composition::InteropVisual **a1,
        DirectComposition::CDevice ***a2,
        bool *a3,
        void **a4)
{
  void *v8; // rax
  int v9; // edi
  Windows::UI::Composition::InteropVisual *v10; // rax
  Windows::UI::Composition::InteropVisual *v11; // rbx
  Windows::UI::Composition::InteropVisual *v12; // rcx
  void *v14; // [rsp+20h] [rbp-28h] BYREF
  Windows::UI::Composition::InteropVisual *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v8 = DefaultHeap::Alloc(0x148uLL);
  v14 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    return (unsigned int)v9;
  }
  v10 = (Windows::UI::Composition::InteropVisual *)memset_0(v8, 0, 0x148uLL);
  if ( v10 )
    v10 = Windows::UI::Composition::InteropVisual::InteropVisual(v10);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropVisual>::Attach(&v15, v10);
  v11 = v15;
  v14 = 0LL;
  v12 = v15;
  *((_QWORD *)v15 + 1) = &Windows::UI::Composition::InteropVisual::s_InterfaceType;
  v9 = Windows::UI::Composition::InteropVisual::RuntimeClassInitialize(v12, *a2, *a3, *a4);
  if ( v9 < 0 )
    goto LABEL_6;
  *a1 = v11;
  return 0LL;
}
