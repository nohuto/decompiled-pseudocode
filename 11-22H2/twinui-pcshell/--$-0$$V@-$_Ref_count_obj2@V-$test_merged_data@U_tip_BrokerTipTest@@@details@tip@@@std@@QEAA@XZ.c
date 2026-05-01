/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_BrokerTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x18072A7AC
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@U_tip_BrokerTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_BrokerTipTest@@@2@XZ @ 0x18072B018 (-start_and_watch_errors@-$tip_test@U_tip_BrokerTipTest@@@tip@@QEAA-AV-$test_watcher@U_tip_Broker.c)
 * Callees:
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_BrokerTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_BrokerTipTest>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::`vftable';
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<_tip_BrokerTipTest>::c_details);
  *(_QWORD *)(a1 + 208) = 0LL;
  *v1 = &tip::details::test_merged_data<_tip_BrokerTipTest>::`vftable';
  v1[22] = v1 + 8;
  result = a1;
  *(_BYTE *)(a1 + 200) = 0;
  *(_BYTE *)(a1 + 216) = 1;
  return result;
}
