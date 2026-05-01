/*
 * XREFs of ?RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ @ 0x18049719C
 * Callers:
 *     _lambda_75bac987ac5f971a4d8840925317feb1_::operator() @ 0x180495E0C (_lambda_75bac987ac5f971a4d8840925317feb1_--operator().c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged @ 0x18049D170 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f_ea_18049D170.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall MultitaskingViewGestureHandlerHelpers::RaiseDesktop(MultitaskingViewGestureHandlerHelpers *this)
{
  HWND WindowW; // rax

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  return PostMessageW(WindowW, 0x579u, 3uLL, 0LL);
}
