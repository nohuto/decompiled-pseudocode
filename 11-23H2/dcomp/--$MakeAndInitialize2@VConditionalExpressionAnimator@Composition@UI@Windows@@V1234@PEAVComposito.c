/*
 * XREFs of ??$MakeAndInitialize2@VConditionalExpressionAnimator@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Details@WRL2@Microsoft@@YAJPEAPEAVConditionalExpressionAnimator@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAVCompositionAnimation@456@$$QEAPEAVConditionalExpressionAnimation@456@@Z @ 0x1801617E8
 * Callers:
 *     ?GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180161C60 (-GenerateInstance@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAni.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0CompositionPropertyAnimator@Composition@UI@Windows@@QEAA@XZ @ 0x1801618D8 (--0CompositionPropertyAnimator@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Z @ 0x18019AEA8 (-RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVComposito.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ConditionalExpressionAnimator,Windows::UI::Composition::ConditionalExpressionAnimator,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionAnimation * &,Windows::UI::Composition::ConditionalExpressionAnimation *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct Windows::UI::Composition::CompositionAnimation **a3,
        struct Windows::UI::Composition::ConditionalExpressionAnimation **a4)
{
  void *v8; // rax
  int v9; // edi
  Windows::UI::Composition::CompositionPropertyAnimator *v10; // rax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  struct Windows::UI::Composition::ConditionalExpressionAnimation *v12; // r9
  struct Windows::UI::Composition::CompositionAnimation *v13; // r8
  struct Windows::UI::Composition::Compositor *v14; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+20h] [rbp-28h] BYREF
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v8 = DefaultHeap::Alloc(0x138uLL);
  v17 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
    return (unsigned int)v9;
  }
  v10 = (Windows::UI::Composition::CompositionPropertyAnimator *)memset_0(v8, 0, 0x138uLL);
  v11 = v10;
  if ( v10 )
  {
    Windows::UI::Composition::CompositionPropertyAnimator::CompositionPropertyAnimator(v10);
    *(_QWORD *)v11 = &Windows::UI::Composition::ConditionalExpressionAnimator::`vftable';
    *((_QWORD *)v11 + 36) = 0LL;
    *((_QWORD *)v11 + 37) = 0LL;
    *((_QWORD *)v11 + 38) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v17 = 0LL;
  *((_QWORD *)v11 + 1) = &Windows::UI::Composition::CompositionPropertyAnimator::s_InterfaceType;
  v12 = *a4;
  v13 = *a3;
  v14 = *a2;
  v16 = v11;
  v9 = Windows::UI::Composition::ConditionalExpressionAnimator::RuntimeClassInitialize(v11, v14, v13, v12);
  if ( v9 < 0 )
    goto LABEL_7;
  *a1 = v11;
  return 0LL;
}
