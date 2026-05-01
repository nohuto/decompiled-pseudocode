/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x180708B94
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_SwitchToRemoteTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@@std@@XZ @ 0x18071B1A4 (-ensure_data@-$tip_test@U_tip_SwitchToRemoteTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 * Callees:
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_SwitchToRemoteTipTest@@QEAA@XZ @ 0x18070E4C4 (--0_tip_SwitchToRemoteTipTest@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwitchToRemoteTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwitchToRemoteTipTest>>(
        __int64 a1)
{
  _QWORD *v2; // rdi

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwitchToRemoteTipTest>>::`vftable';
  v2 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<_tip_SwitchToRemoteTipTest>::c_details);
  _tip_SwitchToRemoteTipTest::_tip_SwitchToRemoteTipTest((_tip_SwitchToRemoteTipTest *)(v2 + 22));
  *v2 = &tip::details::test_merged_data<_tip_SwitchToRemoteTipTest>::`vftable';
  v2[22] = v2 + 8;
  return a1;
}
