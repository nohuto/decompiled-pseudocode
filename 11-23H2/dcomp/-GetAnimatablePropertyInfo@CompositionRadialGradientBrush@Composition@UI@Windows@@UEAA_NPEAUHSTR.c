/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionRadialGradientBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180175BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimatablePropertyInfoImpl@ProxyObject@Composition@UI@Windows@@IEBA_NPEAUHSTRING__@@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005C480 (-GetAnimatablePropertyInfoImpl@ProxyObject@Composition@UI@Windows@@IEBA_NPEAUHSTRING__@@AEBV-$sp.c)
 *     ?GetAnimatablePropertyInfo@CompositionGradientBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180092964 (-GetAnimatablePropertyInfo@CompositionGradientBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@.c)
 */

bool __fastcall Windows::UI::Composition::CompositionRadialGradientBrush::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionRadialGradientBrush *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 3LL;
  v10[1] = &Windows::UI::Composition::CompositionRadialGradientBrush::k_rgAnimDef;
  return Windows::UI::Composition::ProxyObject::GetAnimatablePropertyInfoImpl((__int64)this, a2, v10, a3, a4, a5)
      || Windows::UI::Composition::CompositionGradientBrush::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
}
