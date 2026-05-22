/*
 * XREFs of ??4?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionAnimation@Composition@UI@Windows@@@Z @ 0x1800B7560
 * Callers:
 *     ?put_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013D9F0 (-put_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@.c)
 *     ?put_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z @ 0x18013DF60 (-put_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIE.c)
 *     ?put_NaturalMotion@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIScalarNaturalMotionAnimation@456@@Z @ 0x18013E530 (-put_NaturalMotion@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Window.c)
 *     ?put_NaturalMotion@Api@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIVector2NaturalMotionAnimation@456@@Z @ 0x18013EBA0 (-put_NaturalMotion@Api@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI.c)
 *     ?Add@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@234@@Z @ 0x180151838 (-Add@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@234@@Z.c)
 *     ?AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimation@234@PEAVCompositionAnimation@234@@Z @ 0x180161B08 (-AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimatio.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>::operator=(
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
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v5);
  }
  return a1;
}
