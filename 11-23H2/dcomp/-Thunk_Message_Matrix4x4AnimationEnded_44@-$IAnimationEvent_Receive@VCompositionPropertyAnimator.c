/*
 * XREFs of ?Thunk_Message_Matrix4x4AnimationEnded_44@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18000C960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IAnimationEvent_Receive<Windows::UI::Composition::CompositionPropertyAnimator>::Thunk_Message_Matrix4x4AnimationEnded_44(
        __int64 a1,
        unsigned int **a2)
{
  return Windows::UI::Composition::CompositionPropertyAnimator::AnimationEnded(a1, **a2, 265LL, a2[1]);
}
