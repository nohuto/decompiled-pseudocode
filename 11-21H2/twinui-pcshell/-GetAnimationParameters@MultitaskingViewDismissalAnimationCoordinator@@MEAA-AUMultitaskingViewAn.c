/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewDismissalAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x180184E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MultitaskingViewDismissalAnimationCoordinator::GetAnimationParameters(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = MultitaskingViewDismissalAnimationCoordinator::animationParameters;
  a2[1] = xmmword_180699BB0;
  a2[2] = xmmword_180699BC0;
  a2[3] = xmmword_180699BD0;
  return result;
}
