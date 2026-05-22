/*
 * XREFs of ??$MakeAndInitialize2@VCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAVExpressionAnimation@345@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAVExpressionAnimation@567@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x180120064
 * Callers:
 *     ?CreateAnimationTriggerPartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@345@PEAU?$IIterable@PEAVCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@Collections@Foundation@5@PEAPEAUICompositionAnimationTriggerPartner@1345@@Z @ 0x18010E7E0 (-CreateAnimationTriggerPartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUIExpressionA.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122828 (--0CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVExpressionAnimation@345@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801873DC (-RuntimeClassInitialize@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAA.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,Windows::UI::Composition::Compositor *,Windows::UI::Composition::ExpressionAnimation * &,gsl::span<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *,-1> const &>(
        Microsoft::WRL2::NestableRuntimeClass **a1)
{
  void *v2; // rax
  int v3; // edi
  Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *v4; // rax
  Microsoft::WRL2::NestableRuntimeClass *v5; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+20h] [rbp-28h] BYREF
  void *v8; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v7 = 0LL;
  v2 = DefaultHeap::Alloc(0x108uLL);
  v8 = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v8);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v7);
    return (unsigned int)v3;
  }
  v4 = (Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *)memset_0(v2, 0, 0x108uLL);
  if ( v4 )
    v5 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::CompositionAnimationTriggerPartner(v4);
  else
    v5 = 0LL;
  v8 = 0LL;
  *((_QWORD *)v5 + 1) = &Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::s_InterfaceType;
  v7 = v5;
  v3 = Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::RuntimeClassInitialize(v5);
  if ( v3 < 0 )
    goto LABEL_7;
  *a1 = v5;
  return 0LL;
}
