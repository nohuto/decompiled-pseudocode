/*
 * XREFs of ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x18049D2DC
 * Callers:
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x1804974D0 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18049BEE0 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?Initialize@CAppThumbnailWindow@@IEAAJXZ @ 0x18049CE2C (-Initialize@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCollection@@PEAUIVirtualDesktop@@@Z @ 0x18049DB2C (-DoesHaveVisibleNonIconicViews@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationViewCo.c)
 */

__int64 __fastcall CAppThumbnailWindow::Open(
        MultitaskingViewGestureHandlerHelpers **this,
        __int64 a2,
        struct IVirtualDesktop *a3)
{
  int AppThumbnail; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 168) && !*((_BYTE *)this + 169) )
  {
    if ( !MultitaskingViewGestureHandlerHelpers::DoesHaveVisibleNonIconicViews(this[4], this[16], a3) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)0x80004004LL);
      return 2147500036LL;
    }
    AppThumbnail = CAppThumbnailWindow::Initialize((CAppThumbnailWindow *)this);
    if ( AppThumbnail < 0 )
    {
      v6 = 24LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)AppThumbnail);
      return (unsigned int)AppThumbnail;
    }
    AppThumbnail = CAppThumbnailWindow::CreateAppThumbnail((CAppThumbnailWindow *)this);
    if ( AppThumbnail < 0 )
    {
      v6 = 26LL;
      goto LABEL_7;
    }
    AppThumbnail = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, __int64, __int64))(*(_QWORD *)this[8] + 184LL))(
                     this[8],
                     v7,
                     29LL);
    if ( AppThumbnail < 0 )
    {
      v6 = 28LL;
      goto LABEL_7;
    }
    *((_BYTE *)this + 169) = 1;
  }
  return 0LL;
}
