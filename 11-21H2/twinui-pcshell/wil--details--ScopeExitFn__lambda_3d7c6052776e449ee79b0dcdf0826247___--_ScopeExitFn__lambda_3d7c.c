/*
 * XREFs of wil::details::ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___::_ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___ @ 0x18054F3C4
 * Callers:
 *     ?FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180551920 (-FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     _VirtualDesktopGestureHandler::FinishTouchSwipe_::_1_::dtor$0 @ 0x180551A1A (_VirtualDesktopGestureHandler--FinishTouchSwipe_--_1_--dtor$0.c)
 * Callees:
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18054FF20 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___::_ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___(
        _BYTE *a1)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)(*(_QWORD *)a1 + 16LL), 0);
  }
}
