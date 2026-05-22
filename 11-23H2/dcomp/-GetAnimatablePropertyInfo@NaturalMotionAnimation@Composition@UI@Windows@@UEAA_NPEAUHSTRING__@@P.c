/*
 * XREFs of ?GetAnimatablePropertyInfo@NaturalMotionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180188CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@Composition@UI@Windows@@YA_NPEAUHSTRING__@@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAW4AnimationBindingDirection@234@PEAI3PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005D894 (-FindAnimatablePropertyInfo@AnimationHelper@Composition@UI@Windows@@YA_NPEAUHSTRING__@@AEBV-$spa.c)
 *     ?GetAnimatablePropertyInfo@CompositionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180093E80 (-GetAnimatablePropertyInfo@CompositionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall Windows::UI::Composition::NaturalMotionAnimation::GetAnimatablePropertyInfo(
        Windows::UI::Composition::NaturalMotionAnimation *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  _DWORD *v5; // rbx
  _QWORD *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF

  v5 = (_DWORD *)((char *)a4 + 8);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(Windows::UI::Composition::NaturalMotionAnimation *, __int64 *))(*(_QWORD *)this + 304LL))(
                    this,
                    &v12);
  return Windows::UI::Composition::AnimationHelper::FindAnimatablePropertyInfo(a2, v10, a3, (_DWORD *)a4 + 1, v5, a5)
      || Windows::UI::Composition::CompositionAnimation::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
}
