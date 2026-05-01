/*
 * XREFs of ?_CancelPlacement@CDragVisual@@AEAAXXZ @ 0x1805340AC
 * Callers:
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x180534C18 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180535480 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180534170 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_CancelPlacement(CDragVisual *this)
{
  CDragVisual::_ClearVisualFeedback(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17));
}
