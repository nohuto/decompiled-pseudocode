/*
 * XREFs of ?AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimation@234@PEAVCompositionAnimation@234@@Z @ 0x180161B08
 * Callers:
 *     ?CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4SourceModifierIndex@@PEAPEAVCompositionPropertyAnimator@345@@Z @ 0x18011D350 (-CreateConditionalExpressionAnimator@VisualInteractionSource@Interactions@Composition@UI@Windows.c)
 *     ?ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUICompositionConditionalValue@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137548 (-ConfigureCenterPointInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AE.c)
 *     ?ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV?$span@PEAUIInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@W4ScrollAxis@@@Z @ 0x180137B44 (-ConfigureInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAJV-$span@.c)
 *     ?ConfigureVector2PositionInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJV?$span@PEAUIInteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x18013844C (-ConfigureVector2PositionInertiaModifiers@InteractionTracker@Interactions@Composition@UI@Windows.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??4?$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x1800B6908 (--4-$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVExpres.c)
 *     ??4?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionAnimation@Composition@UI@Windows@@@Z @ 0x1800B7560 (--4-$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompo.c)
 */

__int64 __fastcall Windows::UI::Composition::ConditionalExpressionAnimation::AddCondition(
        Windows::UI::Composition::ConditionalExpressionAnimation *this,
        struct Windows::UI::Composition::ExpressionAnimation *a2,
        struct Windows::UI::Composition::CompositionAnimation *a3)
{
  Microsoft::WRL2::NestableRuntimeClass **v6; // rax
  unsigned int v7; // edi
  Microsoft::WRL2::NestableRuntimeClass **v8; // rbx
  Microsoft::WRL2::NestableRuntimeClass ***v9; // rax

  v6 = (Microsoft::WRL2::NestableRuntimeClass **)DefaultHeap::Alloc(0x20uLL);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::ExpressionAnimation>::operator=(v6 + 2, a2);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>::operator=(v8 + 3, a3);
    v8[1] = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 44);
    *v8 = 0LL;
    v9 = (Microsoft::WRL2::NestableRuntimeClass ***)*((_QWORD *)this + 44);
    if ( v9 )
      *v9 = v8;
    else
      *((_QWORD *)this + 43) = v8;
    *((_QWORD *)this + 44) = v8;
  }
  else
  {
    v7 = -2147024882;
    DoStackCaptureDirect(-2147024882, 0xCAu);
  }
  return v7;
}
