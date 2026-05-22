/*
 * XREFs of ?GetAnimatablePropertyInfo@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18011D900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 *     ?GetAnimatablePropertyInfo@CompositionPointerEventRouter@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180153A10 (-GetAnimatablePropertyInfo@CompositionPointerEventRouter@Composition@UI@Windows@@UEAA_NPEAUHSTRI.c)
 *     ?GetAnimatablePropertyInfo@CompositionManipulation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180161380 (-GetAnimatablePropertyInfo@CompositionManipulation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@.c)
 */

bool __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionManipulation **this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  bool result; // al

  result = Windows::UI::Composition::CompositionManipulation::GetAnimatablePropertyInfo(this[31], a2, a3, a4, a5);
  if ( !result )
  {
    result = Windows::UI::Composition::CompositionPointerEventRouter::GetAnimatablePropertyInfo(
               this[30],
               a2,
               a3,
               a4,
               a5);
    if ( !result )
      return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(
               (Windows::UI::Composition::CompositionObject *)this,
               a2,
               a3,
               a4,
               a5);
  }
  return result;
}
