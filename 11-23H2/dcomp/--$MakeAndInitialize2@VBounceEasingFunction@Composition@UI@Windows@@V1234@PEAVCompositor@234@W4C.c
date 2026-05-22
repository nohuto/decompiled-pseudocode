/*
 * XREFs of ??$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBounceEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18011F854
 * Callers:
 *     ?CreateBounceEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAVCompositionEasingFunction@234@@Z @ 0x180124ECC (-CreateBounceEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0BounceEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x1801226F0 (--0BounceEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VBounceEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVBounceEasingFunction@Composition@UI@Windows@@@Z @ 0x1801249B8 (-Attach@-$ComPtr@VBounceEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVBounceEa.c)
 *     ?RuntimeClassInitialize@BounceEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@HM@Z @ 0x180175400 (-RuntimeClassInitialize@BounceEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4C.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::BounceEasingFunction,Windows::UI::Composition::BounceEasingFunction,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionEasingFunctionMode,int &,float &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5)
{
  void *v9; // rax
  int v10; // edi
  Windows::UI::Composition::BounceEasingFunction *v11; // rax
  Microsoft::WRL2::NestableRuntimeClass *v12; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v13; // rcx
  void *v15; // [rsp+30h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v9 = DefaultHeap::Alloc(0xB8uLL);
  v15 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v15);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
    return (unsigned int)v10;
  }
  v11 = (Windows::UI::Composition::BounceEasingFunction *)memset_0(v9, 0, 0xB8uLL);
  if ( v11 )
    v11 = (Windows::UI::Composition::BounceEasingFunction *)Windows::UI::Composition::BounceEasingFunction::BounceEasingFunction(v11);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::BounceEasingFunction>::Attach(&v16, v11);
  v12 = v16;
  v15 = 0LL;
  v13 = v16;
  *((_QWORD *)v16 + 1) = &Windows::UI::Composition::BounceEasingFunction::s_InterfaceType;
  v10 = Windows::UI::Composition::BounceEasingFunction::RuntimeClassInitialize(v13, *a2, *a3, *a4, *a5);
  if ( v10 < 0 )
    goto LABEL_6;
  *a1 = v12;
  return 0LL;
}
