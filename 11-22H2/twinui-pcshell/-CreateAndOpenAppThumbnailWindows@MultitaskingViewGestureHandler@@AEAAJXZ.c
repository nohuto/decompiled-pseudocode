/*
 * XREFs of ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054DCC0
 * Callers:
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180550220 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA?A_PXZ @ 0x18054BDBC (--$start_and_watch_errors@V-$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054DDD4 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x18055992C (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MultitaskingViewGestureHandler::CreateAndOpenAppThumbnailWindows(CAppThumbnailWindow ***this)
{
  char v2; // bp
  int AppThumbnailWindows; // eax
  unsigned int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  CAppThumbnailWindow **v7; // rdi
  CAppThumbnailWindow **v8; // r14
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-50h] BYREF
  int v12; // [rsp+50h] [rbp-38h]
  std::_Ref_count_base *v13; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  tip::start_and_watch_errors<tip::tip_test<_tip_AppThumbnailTest>>((struct wil::details::IFailureCallback *)&v10);
  v2 = 1;
  AppThumbnailWindows = MultitaskingViewGestureHandler::CreateAppThumbnailWindows((MultitaskingViewGestureHandler *)this);
  v4 = AppThumbnailWindows;
  if ( AppThumbnailWindows >= 0 )
  {
    v7 = this[12];
    v8 = this[13];
    if ( v7 == v8 )
    {
LABEL_7:
      v2 = 0;
      v4 = 0;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v4 = CAppThumbnailWindow::Open(*v7);
      if ( ((v4 + 0x80000000) & 0x80000000) == 0 && v4 != -2147467260 )
        break;
      v7 += 2;
      if ( v7 == v8 )
        goto LABEL_7;
    }
    v5 = v4;
    v6 = 289LL;
  }
  else
  {
    v5 = (unsigned int)AppThumbnailWindows;
    v6 = 277LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)v5);
LABEL_8:
  if ( v2 )
    MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 0);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  return v4;
}
