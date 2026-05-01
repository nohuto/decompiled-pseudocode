/*
 * XREFs of ?RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ @ 0x18054F8A4
 * Callers:
 *     _lambda_02ea2976da830b140e60944cbaaa9176_::operator() @ 0x18054C920 (_lambda_02ea2976da830b140e60944cbaaa9176_--operator().c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged @ 0x1805597C0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f_ea_1805597C0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall MultitaskingViewGestureHandlerHelpers::RaiseDesktop(MultitaskingViewGestureHandlerHelpers *this)
{
  HWND WindowW; // rax

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  return PostMessageW(WindowW, 0x579u, 3uLL, 0LL);
}
