/*
 * XREFs of ?GetAnimatablePropertyInfo@CompositionClip@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180010360
 * Callers:
 *     ?GetAnimatablePropertyInfo@InsetClip@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180072C30 (-GetAnimatablePropertyInfo@InsetClip@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4Animation.c)
 *     ?GetAnimatablePropertyInfo@RectangleClip@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18017B590 (-GetAnimatablePropertyInfo@RectangleClip@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4Anima.c)
 * Callees:
 *     ?GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAI2PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180071D5C (-GetAnimatablePropertyInfo@ComponentTransform2D@Composition@UI@Windows@@SA_NPEAUHSTRING__@@PEAW4.c)
 *     ?EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ @ 0x180072A0C (-EnsureComponentTransform@CompositionClip@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 */

bool __fastcall Windows::UI::Composition::CompositionClip::GetAnimatablePropertyInfo(
        Windows::UI::Composition::CompositionClip *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  bool result; // al

  if ( !Windows::UI::Composition::ComponentTransform2D::GetAnimatablePropertyInfo(
          a2,
          a3,
          (unsigned int *)a4 + 1,
          (unsigned int *)a4 + 2,
          a5) )
    return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
  if ( Windows::UI::Composition::CompositionClip::EnsureComponentTransform(this) < 0 )
    return 0;
  result = 1;
  *(_DWORD *)a4 = *(_DWORD *)(*((_QWORD *)this + 20) + 128LL);
  return result;
}
