/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewInvocationAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x180184DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MultitaskingViewInvocationAnimationCoordinator::GetAnimationParameters(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = MultitaskingViewInvocationAnimationCoordinator::animationParameters;
  a2[1] = xmmword_180699B70;
  a2[2] = xmmword_180699B80;
  a2[3] = xmmword_180699B90;
  return result;
}
