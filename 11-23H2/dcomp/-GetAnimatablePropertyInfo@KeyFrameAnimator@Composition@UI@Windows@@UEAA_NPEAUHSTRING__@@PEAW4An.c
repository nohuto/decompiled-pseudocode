/*
 * XREFs of ?GetAnimatablePropertyInfo@KeyFrameAnimator@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B7D50
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z @ 0x18000C820 (-CompareAnimationNames@@YAHPEAUHSTRING__@@PEBG@Z.c)
 *     ?GetAnimatablePropertyInfoImpl@ProxyObject@Composition@UI@Windows@@IEBA_NPEAUHSTRING__@@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005C480 (-GetAnimatablePropertyInfoImpl@ProxyObject@Composition@UI@Windows@@IEBA_NPEAUHSTRING__@@AEBV-$sp.c)
 *     ?GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800745C0 (-GetAnimatablePropertyInfo@CompositionObject@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4A.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall Windows::UI::Composition::KeyFrameAnimator::GetAnimatablePropertyInfo(
        Windows::UI::Composition::KeyFrameAnimator *this,
        HSTRING a2,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 43)
    && (unsigned int)CompareAnimationNames(a2, L"Progress")
    && (*(unsigned __int8 (__fastcall **)(_QWORD, HSTRING, enum Windows::UI::Composition::AnimationBindingDirection *, struct ExpressionObjectPropertyInfo *, enum DCOMPOSITION_EXPRESSION_TYPE *))(**((_QWORD **)this + 43) + 200LL))(
         *((_QWORD *)this + 43),
         a2,
         a3,
         a4,
         a5) )
  {
    *(_DWORD *)a3 = 1;
    return 1;
  }
  v10[1] = &Windows::UI::Composition::KeyFrameAnimator::k_rgAnimDef;
  v10[0] = 4LL;
  if ( Windows::UI::Composition::ProxyObject::GetAnimatablePropertyInfoImpl((__int64)this, a2, v10, a3, a4, a5) )
    return 1;
  return Windows::UI::Composition::CompositionObject::GetAnimatablePropertyInfo(this, a2, a3, a4, a5);
}
