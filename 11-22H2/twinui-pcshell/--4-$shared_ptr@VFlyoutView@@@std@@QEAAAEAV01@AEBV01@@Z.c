/*
 * XREFs of ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804B226C
 * Callers:
 *     ??$_Copy_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00@Z @ 0x18014B6B0 (--$_Copy_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@UKBViewIn.c)
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z @ 0x1802096BC (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB1F8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB2A6 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802DC360 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B30FC (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B31BC (-FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePan.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B33FC (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B34C8 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1806B1570 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806C0C38 (-SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 *__fastcall std::shared_ptr<FlyoutView>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
         v9,
         a2);
  v4 = *v3;
  *v3 = *a1;
  v5 = a1[1];
  *a1 = v4;
  v6 = v3[1];
  v3[1] = v5;
  v7 = v9[1];
  a1[1] = v6;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
