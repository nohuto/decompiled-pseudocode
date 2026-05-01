/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_AppThumbnailTest@@@0@XZ @ 0x180495A34
 * Callers:
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x1804974D0 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA?AV?$test_watcher@U_tip_AppThumbnailTest@@@2@XZ @ 0x1804979F8 (-start_and_watch_errors@-$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA-AV-$test_watcher@U_tip_App.c)
 */

__int64 __fastcall tip::start_and_watch_errors<tip::tip_test<_tip_AppThumbnailTest>>(__int64 a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  tip::tip_test<_tip_AppThumbnailTest>::start_and_watch_errors(v3, a1);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  return a1;
}
