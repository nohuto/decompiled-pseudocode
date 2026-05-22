/*
 * XREFs of ?Thunk_Message_BooleanAnimationEnded_0@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180082DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimationEnded@CompositionPropertyAnimator@Composition@UI@Windows@@AEAAJW4AnimationEventType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004FB60 (-AnimationEnded@CompositionPropertyAnimator@Composition@UI@Windows@@AEAAJW4AnimationEventType@@W.c)
 */

__int64 __fastcall IAnimationEvent_Receive<Windows::UI::Composition::CompositionPropertyAnimator>::Thunk_Message_BooleanAnimationEnded_0(
        __int64 *a1,
        unsigned int **a2)
{
  return Windows::UI::Composition::CompositionPropertyAnimator::AnimationEnded(a1, **a2, 0x11u);
}
