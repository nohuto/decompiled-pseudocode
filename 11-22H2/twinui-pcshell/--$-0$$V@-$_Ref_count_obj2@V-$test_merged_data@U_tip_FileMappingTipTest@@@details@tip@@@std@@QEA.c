/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_FileMappingTipTest@@@details@tip@@@std@@QEAA@XZ @ 0x180708A98
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@U_tip_FileMappingTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_FileMappingTipTest@@@2@XZ @ 0x18071CC68 (-start_and_watch_errors@-$tip_test@U_tip_FileMappingTipTest@@@tip@@QEAA-AV-$test_watcher@U_tip_F.c)
 * Callees:
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_FileMappingTipTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_FileMappingTipTest>>(
        __int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_FileMappingTipTest>>::`vftable';
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<_tip_FileMappingTipTest>::c_details);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0LL;
  *v1 = &tip::details::test_merged_data<_tip_FileMappingTipTest>::`vftable';
  v1[22] = v1 + 8;
  return a1;
}
