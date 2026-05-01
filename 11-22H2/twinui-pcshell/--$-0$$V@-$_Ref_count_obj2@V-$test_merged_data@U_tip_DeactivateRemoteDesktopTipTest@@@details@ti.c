/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x180708A20
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@XZ @ 0x18071B148 (-ensure_data@-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test.c)
 * Callees:
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_DeactivateRemoteDesktopTipTest@@QEAA@XZ @ 0x18070E490 (--0_tip_DeactivateRemoteDesktopTipTest@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // r8

  v1 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::`vftable';
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>::c_details);
  _tip_DeactivateRemoteDesktopTipTest::_tip_DeactivateRemoteDesktopTipTest((_tip_DeactivateRemoteDesktopTipTest *)(v1 + 22));
  *v3 = v1 + 8;
  *v1 = &tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>::`vftable';
  return a1;
}
