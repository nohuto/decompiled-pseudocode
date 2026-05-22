/*
 * XREFs of ??$MakeAndInitialize2@VExponentialEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVExponentialEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18000C3F0
 * Callers:
 *     ?CreateExponentialEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAVCompositionEasingFunction@234@@Z @ 0x18000C398 (-CreateExponentialEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EA.c)
 * Callees:
 *     ??0ExponentialEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x18000C4B0 (--0ExponentialEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ExponentialEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@M@Z @ 0x18000C4E8 (-RuntimeClassInitialize@ExponentialEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?Attach@?$ComPtr@VExponentialEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVExponentialEasingFunction@Composition@UI@Windows@@@Z @ 0x18000C580 (-Attach@-$ComPtr@VExponentialEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVExp.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ExponentialEasingFunction,Windows::UI::Composition::ExponentialEasingFunction,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionEasingFunctionMode,float &>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  void *v6; // rax
  Windows::UI::Composition::ExponentialEasingFunction *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // edi
  void *v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v6 = DefaultHeap::Alloc(0xB0uLL);
  v12 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::ExponentialEasingFunction *)memset_0(v6, 0, 0xB0uLL);
    if ( v7 )
      v7 = (Windows::UI::Composition::ExponentialEasingFunction *)Windows::UI::Composition::ExponentialEasingFunction::ExponentialEasingFunction(v7);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ExponentialEasingFunction>::Attach(&v13, v7);
    v8 = v13;
    v12 = 0LL;
    v9 = v13;
    *(_QWORD *)(v13 + 8) = &Windows::UI::Composition::ExponentialEasingFunction::s_InterfaceType;
    v10 = Windows::UI::Composition::ExponentialEasingFunction::RuntimeClassInitialize(v9, *a2, *a3);
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
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
  return (unsigned int)v10;
}
