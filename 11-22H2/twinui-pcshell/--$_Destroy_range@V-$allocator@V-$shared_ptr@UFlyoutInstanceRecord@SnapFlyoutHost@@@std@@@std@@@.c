/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1802D7364
 * Callers:
 *     ?TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800AD80C (-TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ??1MultitaskingViewGestureHandler@@UEAA@XZ @ 0x1801453DC (--1MultitaskingViewGestureHandler@@UEAA@XZ.c)
 *     ??1JsonGameMruManager@@QEAA@XZ @ 0x180165690 (--1JsonGameMruManager@@QEAA@XZ.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo__const_&__::_1_::catch$0 @ 0x1803E1E15 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_PeoplePaneViewIn.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@YAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803E23DC (--$_Uninitialized_move@PEAV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UGameMruItem@@@2@_K1@Z @ 0x1803E47D0 (-_Change_array@-$vector@V-$shared_ptr@UGameMruItem@@@std@@V-$allocator@V-$shared_ptr@UGameMruIte.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch$3 @ 0x1804B19C8 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_Peo_ea_1804B19C8.c)
 *     ??1?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1804B1F30 (--1-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneViewI.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1804B204C (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1804B2DA0 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     _std::vector_std::shared_ptr_CAppThumbnailWindow__std::allocator_std::shared_ptr_CAppThumbnailWindow_____::_Emplace_reallocate_std::shared_ptr_CAppThumbnailWindow__const_&__::_1_::catch$0 @ 0x18054BA0B (_std--vector_std--shared_ptr_CAppThumbnailWindow__std--allocator_std--shared_ptr_CAppThumbnailWi.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ??1SnapFlyoutHost@@UEAA@XZ @ 0x18065F4D8 (--1SnapFlyoutHost@@UEAA@XZ.c)
 *     _std::vector_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord__std::allocator_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_____::_Emplace_reallocate_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord____::_1_::catch$3 @ 0x180678E07 (_std--vector_std--shared_ptr_SnapFlyoutHost--FlyoutInstanceRecord__std--allocator_std--shared_pt.c)
 *     ?erase@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@0@Z @ 0x18067DEC8 (-erase@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$shared.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
