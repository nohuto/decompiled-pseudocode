/*
 * XREFs of ??$MakeAndInitialize2@VSineEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Details@WRL2@Microsoft@@YAJPEAPEAVSineEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@@Z @ 0x180121894
 * Callers:
 *     ?CreateSineEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@PEAPEAUICompositionEasingFunction@345@@Z @ 0x180127320 (-CreateSineEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0SineEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180122C74 (--0SineEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VSineEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSineEasingFunction@Composition@UI@Windows@@@Z @ 0x180124AF0 (-Attach@-$ComPtr@VSineEasingFunction@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSineEasing.c)
 *     ?RuntimeClassInitialize@SineEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Z @ 0x18017D3DC (-RuntimeClassInitialize@SineEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Com.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::SineEasingFunction,Windows::UI::Composition::SineEasingFunction,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionEasingFunctionMode>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::SineEasingFunction *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0xB0uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::SineEasingFunction *)memset_0(v6, 0, 0xB0uLL);
  if ( v8 )
    v8 = (Windows::UI::Composition::SineEasingFunction *)Windows::UI::Composition::SineEasingFunction::SineEasingFunction(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::SineEasingFunction>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::SineEasingFunction::s_InterfaceType;
  v7 = Windows::UI::Composition::SineEasingFunction::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
