/*
 * XREFs of ?SetOwningTrigger@CompositionPropertyAnimator@Composition@UI@Windows@@QEAAXPEAVCompositionAnimationTriggerPartner@Internal@234@@Z @ 0x1801910E0
 * Callers:
 *     ?GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ @ 0x180186C5C (-GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionPropertyAnimator::SetOwningTrigger(
        Windows::UI::Composition::CompositionPropertyAnimator *this,
        struct Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      525LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpropertyanimator.cpp",
      a4);
  *((_QWORD *)this + 35) = a2;
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    10,
    1LL);
}
