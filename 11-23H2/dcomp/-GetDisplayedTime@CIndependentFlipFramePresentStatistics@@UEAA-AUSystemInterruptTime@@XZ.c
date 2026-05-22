/*
 * XREFs of ?GetDisplayedTime@CIndependentFlipFramePresentStatistics@@UEAA?AUSystemInterruptTime@@XZ @ 0x180091610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CIndependentFlipFramePresentStatistics::GetDisplayedTime(__int64 a1, _QWORD *a2)
{
  *a2 = *(_QWORD *)(a1 + 48);
  return a2;
}
