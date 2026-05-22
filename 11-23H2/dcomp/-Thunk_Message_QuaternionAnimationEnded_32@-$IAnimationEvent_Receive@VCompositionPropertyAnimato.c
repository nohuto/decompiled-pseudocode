/*
 * XREFs of ?Thunk_Message_QuaternionAnimationEnded_32@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180191410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IAnimationEvent_Receive<Windows::UI::Composition::CompositionPropertyAnimator>::Thunk_Message_QuaternionAnimationEnded_32(
        __int64 *a1,
        unsigned int **a2)
{
  return Windows::UI::Composition::CompositionPropertyAnimator::AnimationEnded(a1, **a2, 0x47u);
}
