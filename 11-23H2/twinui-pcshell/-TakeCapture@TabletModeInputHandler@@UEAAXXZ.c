/*
 * XREFs of ?TakeCapture@TabletModeInputHandler@@UEAAXXZ @ 0x1805D92C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModeInputHandler::TakeCapture(HWND *this)
{
  SetCapture(this[3]);
}
