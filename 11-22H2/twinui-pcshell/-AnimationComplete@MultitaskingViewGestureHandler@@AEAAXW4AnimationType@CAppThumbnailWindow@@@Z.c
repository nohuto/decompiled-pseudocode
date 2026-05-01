/*
 * XREFs of ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660
 * Callers:
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x180066690 (-NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ.c)
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1 @ 0x18020D440 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_ResumeCoro$1.c)
 *     wil::details::ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___::_ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___ @ 0x18054C410 (wil--details--ScopeExitFn__lambda_9ceef84ca83957a7a86ba8936cef00f3___--_ScopeExitFn__lambda_9cee.c)
 *     _lambda_79a607d44e9569d9530329be2636626a_::operator() @ 0x18054D08C (_lambda_79a607d44e9569d9530329be2636626a_--operator().c)
 *     ?CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ @ 0x18054D880 (-CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ.c)
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054DCC0 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054DDD4 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054E37C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?ResolveThumbnailWindow@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x18054FD98 (-ResolveThumbnailWindow@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGes.c)
 * Callees:
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18004039C (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1802D7364 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_AppThumbnailTest@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x18054AE7C (--$-0$$TAEAW4TestRetrievalOptions@@@-$_Ref_count_obj2@V-$test_merged_data@U_tip_AppThumbnailTest.c)
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1805555C8 (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewGestureHandler::AnimationComplete(__int64 a1, int a2)
{
  CAppThumbnailWindow **v3; // rsi
  CAppThumbnailWindow **i; // rbx
  std::_Ref_count_base *v5; // rax
  std::_Ref_count_base *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-20h]
  std::_Ref_count_base *v9[2]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+70h] [rbp+28h] BYREF
  int v11; // [rsp+78h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+38h] BYREF
  void *v13; // [rsp+88h] [rbp+40h]

  v11 = a2;
  v3 = *(CAppThumbnailWindow ***)(a1 + 104);
  for ( i = *(CAppThumbnailWindow ***)(a1 + 96); i != v3; i += 2 )
    CAppThumbnailWindow::Close(*i, (const enum CAppThumbnailWindow::AnimationType *)&v11);
  std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
    *(_QWORD *)(a1 + 96),
    *(_QWORD *)(a1 + 104));
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(a1 + 232) = 0;
  *(_OWORD *)v9 = 0LL;
  v10 = 0;
  v12 = 0LL;
  v13 = operator new(0xC8uLL);
  v5 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppThumbnailTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppThumbnailTest>>(
                                 (__int64)v13,
                                 &v12,
                                 &v10);
  v7 = (__int64)v5 + 16;
  v8 = v5;
  std::shared_ptr<KBViewInfo>::operator=(v9, &v7);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v6 = v9[0];
  if ( v9[0] && tip::details::test_common_data<1>::is_running((__int64)v9[0] + 8) && v6 )
    tip::details::test_common_data<1>::complete((__int64)v6 + 8);
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
}
