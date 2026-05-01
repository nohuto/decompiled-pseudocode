/*
 * XREFs of ?StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@NotificationCenterUITelemetry@@W4InputType@3@@Z @ 0x180040204
 * Callers:
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DCA70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180418A50 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180419B80 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?ensure_data@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@std@@XZ @ 0x180040350 (-ensure_data@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_mer.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18008D6C8 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ @ 0x1802D442C (-complete@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::StartNotificationCenterShowTest(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  std::_Ref_count_base *v18; // [rsp+28h] [rbp-8h]

  v3 = (_QWORD *)(a1 + 784);
  if ( (unsigned __int8)tip::tip_test<_tip_TouchGestureTest>::operator bool(a1 + 784) )
  {
    v14 = tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data(v3);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v17,
      v14);
    v15 = v17;
    tip::details::test_common_data<1>::begin_update(v17 + 8);
    v16 = v15 + 193;
    if ( !v15 )
      v16 = 17LL;
    *(_BYTE *)v16 = 1;
    if ( v15 )
    {
      tip::details::test_common_data<1>::end_update(v15 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v17);
    }
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    tip::tip_test<_tip_NotificationCenterShowTest>::complete(v3);
  }
  std::shared_ptr<PeoplePaneViewInfo>::reset(v3);
  v6 = tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data(v3);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v17,
    v6);
  v7 = v17;
  tip::details::test_common_data<1>::begin_update(v17 + 8);
  v8 = v7 + 184;
  if ( !v7 )
    v8 = 8LL;
  *(_DWORD *)v8 = a3;
  if ( v7 )
  {
    tip::details::test_common_data<1>::end_update(v7 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v17);
  }
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  v9 = tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data(v3);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v17,
    v9);
  v10 = v17;
  tip::details::test_common_data<1>::begin_update(v17 + 8);
  v11 = v10 + 188;
  if ( !v10 )
    v11 = 12LL;
  *(_DWORD *)v11 = a2;
  if ( v10 )
  {
    tip::details::test_common_data<1>::end_update(v10 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v17);
  }
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( *v3 && (unsigned __int8)tip::details::test_common_data<1>::has_ever_started(*v3 + 8LL) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(v3);
  v12 = (_QWORD *)tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data(v3);
  return tip::details::test_common_data<1>::start(*v12 + 8LL, &v17);
}
