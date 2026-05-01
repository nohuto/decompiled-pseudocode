/*
 * XREFs of ?StartControlCenterShowTest@CControlCenterExperienceManager@@AEAAXW4InvokeMethod@ControlCenterUITelemetry@@W4InputType@3@@Z @ 0x180424000
 * Callers:
 *     CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DFD20 (CControlCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18041F830 (-HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Wind.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18008D6C8 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ @ 0x1802D442C (-complete@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@XZ @ 0x180426B14 (-ensure_data@-$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 */

_OWORD *__fastcall CControlCenterExperienceManager::StartControlCenterShowTest(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-10h] BYREF

  v3 = (__int64 *)(a1 + 768);
  if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)(a1 + 768)) )
  {
    v6 = (_QWORD *)tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(v3);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v17,
      v6);
    v7 = v17;
    tip::details::test_common_data<1>::begin_update(v17 + 8);
    v8 = v7 + 193;
    if ( !v7 )
      v8 = 17LL;
    *(_BYTE *)v8 = 1;
    if ( v7 )
    {
      tip::details::test_common_data<1>::end_update(v7 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v17);
    }
    if ( *((_QWORD *)&v17 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v17 + 1));
    tip::tip_test<_tip_NotificationCenterShowTest>::complete(v3);
  }
  std::shared_ptr<PeoplePaneViewInfo>::reset(v3);
  v9 = (_QWORD *)tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(v3);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v17,
    v9);
  v10 = v17;
  tip::details::test_common_data<1>::begin_update(v17 + 8);
  v11 = v10 + 184;
  if ( !v10 )
    v11 = 8LL;
  *(_DWORD *)v11 = a3;
  if ( v10 )
  {
    tip::details::test_common_data<1>::end_update(v10 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v17);
  }
  if ( *((_QWORD *)&v17 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v17 + 1));
  v12 = (_QWORD *)tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(v3);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v17,
    v12);
  v13 = v17;
  tip::details::test_common_data<1>::begin_update(v17 + 8);
  v14 = v13 + 188;
  if ( !v13 )
    v14 = 12LL;
  *(_DWORD *)v14 = a2;
  if ( v13 )
  {
    tip::details::test_common_data<1>::end_update(v13 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v17);
  }
  if ( *((_QWORD *)&v17 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v17 + 1));
  if ( *v3 && tip::details::test_common_data<1>::has_ever_started(*v3 + 8) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(v3);
  v15 = (_QWORD *)tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(v3);
  return tip::details::test_common_data<1>::start(*v15 + 8LL, &v17);
}
