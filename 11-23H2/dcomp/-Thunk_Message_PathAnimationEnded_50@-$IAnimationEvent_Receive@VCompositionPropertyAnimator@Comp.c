/*
 * XREFs of ?Thunk_Message_PathAnimationEnded_50@?$IAnimationEvent_Receive@VCompositionPropertyAnimator@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1801913C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimationEnded@CompositionPropertyAnimator@Composition@UI@Windows@@AEAAJW4AnimationEventType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004FB60 (-AnimationEnded@CompositionPropertyAnimator@Composition@UI@Windows@@AEAAJW4AnimationEventType@@W.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall IAnimationEvent_Receive<Windows::UI::Composition::CompositionPropertyAnimator>::Thunk_Message_PathAnimationEnded_50(
        gsl::details *a1,
        __int64 a2)
{
  if ( !*(_QWORD *)(a2 + 8) && *(_DWORD *)(a2 + 16) )
  {
    gsl::details::terminate(a1);
    __debugbreak();
  }
  return Windows::UI::Composition::CompositionPropertyAnimator::AnimationEnded((__int64 *)a1, **(_DWORD **)a2, 0xBu);
}
