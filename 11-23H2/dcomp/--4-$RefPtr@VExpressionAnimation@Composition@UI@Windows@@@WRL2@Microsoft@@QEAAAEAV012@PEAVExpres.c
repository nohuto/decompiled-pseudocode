/*
 * XREFs of ??4?$RefPtr@VExpressionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x1800B6908
 * Callers:
 *     ?put_Condition@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18012D3F0 (-put_Condition@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIEx.c)
 *     ?put_Value@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18012D4E0 (-put_Value@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpres.c)
 *     ?put_Condition@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013D910 (-put_Condition@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UE.c)
 *     ?put_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013D9F0 (-put_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@.c)
 *     ?put_Condition@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013DE80 (-put_Condition@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEA.c)
 *     ?put_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013DF60 (-put_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIE.c)
 *     ?put_Condition@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013E450 (-put_Condition@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@U.c)
 *     ?put_Condition@Api@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013EAC0 (-put_Condition@Api@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Win.c)
 *     ?AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimation@234@PEAVCompositionAnimation@234@@Z @ 0x180161B08 (-AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimatio.c)
 *     ?RuntimeClassInitialize@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVExpressionAnimation@345@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1801873DC (-RuntimeClassInitialize@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAA.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::ExpressionAnimation>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v5);
  }
  return a1;
}
