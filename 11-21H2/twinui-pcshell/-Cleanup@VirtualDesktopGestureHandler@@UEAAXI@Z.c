/*
 * XREFs of ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18054FF20
 * Callers:
 *     wil::details::ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___::_ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___ @ 0x18054F3C4 (wil--details--ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___--_ScopeExitFn__lambda_3d7c.c)
 *     ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18054FDE0 (-CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?CancelTouchSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18054FE80 (-CancelTouchSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x180551840 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x1805538B4 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x18054F540 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
 *     ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x1805563A4 (-Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ.c)
 */

void __fastcall VirtualDesktopGestureHandler::Cleanup(VirtualDesktopGestureHandler *this, int a2)
{
  VirtualDesktopGestureContext *v3; // rcx
  VirtualDesktopGestureContext *v4; // rbx

  v3 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 8);
  if ( v3 && (!a2 || a2 == *((_DWORD *)v3 + 47)) )
  {
    VirtualDesktopGestureContext::Uninitialize(v3);
    v4 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v4 )
    {
      VirtualDesktopGestureContext::~VirtualDesktopGestureContext(v4);
      operator delete(v4);
    }
  }
}
