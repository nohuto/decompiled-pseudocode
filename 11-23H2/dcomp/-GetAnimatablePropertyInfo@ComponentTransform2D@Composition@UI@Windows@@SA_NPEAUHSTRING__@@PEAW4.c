/*
 * XREFs of ?GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071D5C
 * Callers:
 *     ?GetAnimatablePropertyInfo@CompositionClip@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180010360 (-GetAnimatablePropertyInfo@CompositionClip@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4Ani.c)
 *     ?GetAnimatablePropertyInfo@CompositionGradientBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180092964 (-GetAnimatablePropertyInfo@CompositionGradientBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@.c)
 *     ?GetAnimatablePropertyInfo@CompositionSurfaceBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180159600 (-GetAnimatablePropertyInfo@CompositionSurfaceBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@.c)
 *     ?SetFinalValueParameter@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180159A00 (-SetFinalValueParameter@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEA.c)
 *     ?SetFinalValueParameter@CompositionGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x1801742F8 (-SetFinalValueParameter@CompositionGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PE.c)
 *     ?SetFinalValueParameter@CompositionShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z @ 0x180189970 (-SetFinalValueParameter@CompositionShape@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompos.c)
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@Composition@UI@Windows@@YA_NPEAUHSTRING__@@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAW4AnimationBindingDirection@234@PEAI3PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005D894 (-FindAnimatablePropertyInfo@AnimationHelper@Composition@UI@Windows@@YA_NPEAUHSTRING__@@AEBV-$spa.c)
 */

char __fastcall Windows::UI::Composition::ComponentTransform2D::GetAnimatablePropertyInfo(
        HSTRING a1,
        enum Windows::UI::Composition::AnimationBindingDirection *a2,
        unsigned int *a3,
        unsigned int *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = 7LL;
  v6[1] = &Windows::UI::Composition::ComponentTransform2D::k_rgAnimDef;
  return Windows::UI::Composition::AnimationHelper::FindAnimatablePropertyInfo(a1, v6, a2, a3, a4, a5);
}
