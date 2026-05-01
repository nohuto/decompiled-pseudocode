/*
 * XREFs of ??1?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1803D522C
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$14 @ 0x180217A9C (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$14.c)
 *     _SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor$1 @ 0x18021BEAC (_SnapFlyoutHost--SnapFlyoutHost_--_1_--dtor$1.c)
 *     _PeoplePaneViewManager::ClosePeoplePane_::_1_::dtor$1 @ 0x1803D6246 (_PeoplePaneViewManager--ClosePeoplePane_--_1_--dtor$1.c)
 *     _TouchKeyboardExperienceManager::HideAllInputViews_::_1_::dtor$0 @ 0x18045F884 (_TouchKeyboardExperienceManager--HideAllInputViews_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::OnInputAppChangeApproved_::_1_::dtor$2 @ 0x1804629E4 (_TouchKeyboardExperienceManager--OnInputAppChangeApproved_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4898 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 */

void __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::~vector<std::shared_ptr<PeoplePaneViewInfo>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
      (__int64)v2,
      *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
