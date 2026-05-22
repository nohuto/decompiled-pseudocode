/*
 * XREFs of ?GetAnimatablePropertyInfo@ComponentTransform3D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180152FA0
 * Callers:
 *     ?GetAnimatablePropertyInfo@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180180E50 (-GetAnimatablePropertyInfo@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAA_NPEAUHSTR.c)
 *     ?GetAnimatablePropertyInfo@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180192AD0 (-GetAnimatablePropertyInfo@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAA_NPEAUHSTRING_.c)
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@Composition@UI@Windows@@YA_NPEAUHSTRING__@@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAW4AnimationBindingDirection@234@PEAI3PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005D894 (-FindAnimatablePropertyInfo@AnimationHelper@Composition@UI@Windows@@YA_NPEAUHSTRING__@@AEBV-$spa.c)
 */

char __fastcall Windows::UI::Composition::ComponentTransform3D::GetAnimatablePropertyInfo(
        HSTRING a1,
        enum Windows::UI::Composition::AnimationBindingDirection *a2,
        unsigned int *a3,
        unsigned int *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = 9LL;
  v6[1] = &Windows::UI::Composition::ComponentTransform3D::k_rgAnimDef;
  return Windows::UI::Composition::AnimationHelper::FindAnimatablePropertyInfo(a1, v6, a2, a3, a4, a5);
}
