/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@@std@@QEAA@XZ @ 0x180701CD8
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_BootToCloudPCTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@@std@@XZ @ 0x180707DA8 (-ensure_data@-$tip_test@U_tip_BootToCloudPCTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@.c)
 * Callees:
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_BootToCloudPCTest@@QEAA@XZ @ 0x180705310 (--0_tip_BootToCloudPCTest@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_BootToCloudPCTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_BootToCloudPCTest>>(
        __int64 a1)
{
  _QWORD *v2; // rdi

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_BootToCloudPCTest>>::`vftable';
  v2 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<_tip_BootToCloudPCTest>::c_details);
  _tip_BootToCloudPCTest::_tip_BootToCloudPCTest((_tip_BootToCloudPCTest *)(v2 + 22));
  *v2 = &tip::details::test_merged_data<_tip_BootToCloudPCTest>::`vftable';
  v2[22] = v2 + 8;
  return a1;
}
