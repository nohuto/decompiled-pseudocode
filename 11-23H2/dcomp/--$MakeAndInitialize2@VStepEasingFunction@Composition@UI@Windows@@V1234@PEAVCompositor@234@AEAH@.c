/*
 * XREFs of ??$MakeAndInitialize2@VStepEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAH@Details@WRL2@Microsoft@@YAJPEAPEAVStepEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAH@Z @ 0x180079828
 * Callers:
 *     ?CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVStepEasingFunction@234@@Z @ 0x1800797D0 (-CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVSte.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98 (--0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@StepEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@H@Z @ 0x180079DEC (-RuntimeClassInitialize@StepEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@H@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::StepEasingFunction,Windows::UI::Composition::StepEasingFunction,Windows::UI::Composition::Compositor *,int &>(
        Windows::UI::Composition::CompositionEasingFunction **a1,
        struct Windows::UI::Composition::Compositor **a2,
        int *a3)
{
  void *v6; // rax
  Windows::UI::Composition::CompositionEasingFunction *v7; // rax
  Windows::UI::Composition::CompositionEasingFunction *v8; // rbx
  int v9; // r8d
  struct Windows::UI::Composition::Compositor *v10; // rdx
  int v11; // edi
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionEasingFunction *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0xB8uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::CompositionEasingFunction *)memset_0(v6, 0, 0xB8uLL);
    v8 = v7;
    if ( v7 )
    {
      Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(v7);
      *(_QWORD *)v8 = &Windows::UI::Composition::StepEasingFunction::`vftable';
      *((_QWORD *)v8 + 19) = &Windows::UI::Composition::StepEasingFunction::Api::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    v13 = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::StepEasingFunction::s_InterfaceType;
    v9 = *a3;
    v10 = *a2;
    v14 = v8;
    v11 = Windows::UI::Composition::StepEasingFunction::RuntimeClassInitialize(v8, v10, v9);
    if ( v11 >= 0 )
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
  return (unsigned int)v11;
}
