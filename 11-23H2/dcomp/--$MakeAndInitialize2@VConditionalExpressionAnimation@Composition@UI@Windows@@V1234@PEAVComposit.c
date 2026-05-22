/*
 * XREFs of ??$MakeAndInitialize2@VConditionalExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVConditionalExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x18011C3EC
 * Callers:
 *     ?CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@PEAPEAVCompositionPropertyAnimator@345@@Z @ 0x18011D350 (-CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows.c)
 *     ?ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137548 (-ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AE.c)
 *     ?ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137B44 (-ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV-$span@.c)
 *     ?ConfigureVector2PositionInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUIInteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x18013844C (-ConfigureVector2PositionInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005EFE4 (--0CompositionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Z @ 0x180161E74 (-RuntimeClassInitialize@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVComposit.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::ConditionalExpressionAnimation,Windows::UI::Composition::Compositor *,enum ConditionalExpressionAnimationSelectionMode::Enum>(
        Windows::UI::Composition::CompositionAnimation **a1,
        __int64 *a2,
        unsigned int *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::CompositionAnimation *v8; // rax
  Windows::UI::Composition::CompositionAnimation *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0x178uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::CompositionAnimation *)memset_0(v6, 0, 0x178uLL);
  v9 = v8;
  if ( v8 )
  {
    Windows::UI::Composition::CompositionAnimation::CompositionAnimation(v8);
    *(_QWORD *)v9 = &Windows::UI::Composition::ConditionalExpressionAnimation::`vftable';
    *((_QWORD *)v9 + 43) = 0LL;
    *((_QWORD *)v9 + 44) = 0LL;
    *((_QWORD *)v9 + 45) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::CompositionAnimation::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::ConditionalExpressionAnimation::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
