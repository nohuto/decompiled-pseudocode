/*
 * XREFs of ?_CancelPlacement@CDragVisual@@AEAAXXZ @ 0x1805EEE2C
 * Callers:
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x1805EF9B4 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1805F0228 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x1805EEEF0 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_CancelPlacement(CDragVisual *this)
{
  CDragVisual::_ClearVisualFeedback(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17));
}
