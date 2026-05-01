/*
 * XREFs of wil::details::ScopeExitFn__lambda_e02b3e986b74e5865b03aaf013303600___::_ScopeExitFn__lambda_e02b3e986b74e5865b03aaf013303600___ @ 0x180495C88
 * Callers:
 *     _MultitaskingViewGestureHandler::CreateAppThumbnailWindows_::_1_::dtor$1 @ 0x180496BE0 (_MultitaskingViewGestureHandler--CreateAppThumbnailWindows_--_1_--dtor$1.c)
 *     _MultitaskingViewGestureHandler::StartTouchSwipe_::_1_::dtor$1 @ 0x1804977BF (_MultitaskingViewGestureHandler--StartTouchSwipe_--_1_--dtor$1.c)
 * Callees:
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180496420 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_e02b3e986b74e5865b03aaf013303600___::_ScopeExitFn__lambda_e02b3e986b74e5865b03aaf013303600___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return MultitaskingViewGestureHandler::AnimationComplete(*(_QWORD *)a1, 0LL);
  }
  return result;
}
