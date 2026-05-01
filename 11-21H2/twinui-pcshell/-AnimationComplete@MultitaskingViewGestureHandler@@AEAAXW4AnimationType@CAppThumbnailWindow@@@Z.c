/*
 * XREFs of ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180496420
 * Callers:
 *     wil::details::ScopeExitFn__lambda_e02b3e986b74e5865b03aaf013303600___::_ScopeExitFn__lambda_e02b3e986b74e5865b03aaf013303600___ @ 0x180495C88 (wil--details--ScopeExitFn__lambda_e02b3e986b74e5865b03aaf013303600___--_ScopeExitFn__lambda_e02b.c)
 *     ?CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ @ 0x1804965A0 (-CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ.c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x180496874 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180496DE0 (-FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x180497088 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x1804974D0 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180030534 (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4898 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_AppThumbnailTest@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x18049521C (--$-0$$TAEAW4TestRetrievalOptions@@@-$_Ref_count_obj2@V-$test_merged_data@U_tip_AppThumbnailTest.c)
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x18049BDDC (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MultitaskingViewGestureHandler::AnimationComplete(__int64 a1, int a2)
{
  CAppThumbnailWindow **v3; // rbx
  CAppThumbnailWindow **v4; // rsi
  std::_Ref_count_base *v5; // rax
  std::_Ref_count_base *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-20h]
  std::_Ref_count_base *v9[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+28h] BYREF
  int v11; // [rsp+78h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+38h] BYREF
  void *v13; // [rsp+88h] [rbp+40h]

  v11 = a2;
  v3 = *(CAppThumbnailWindow ***)(a1 + 96);
  v4 = *(CAppThumbnailWindow ***)(a1 + 104);
  if ( v3 != v4 )
  {
    do
    {
      CAppThumbnailWindow::Close(*v3, (const enum CAppThumbnailWindow::AnimationType *)&v11);
      v3 += 2;
    }
    while ( v3 != v4 );
    std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      *(_QWORD *)(a1 + 96),
      *(_QWORD *)(a1 + 104));
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 96);
    *(_OWORD *)v9 = 0LL;
    v10 = 0;
    v12 = 0LL;
    v13 = operator new(0xA8uLL);
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
}
