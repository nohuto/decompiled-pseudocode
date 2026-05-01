/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_EduDefaultThemeApplied@@@details@tip@@@std@@QEAA@XZ @ 0x1806E049C
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@U_tip_EduDefaultThemeApplied@@@tip@@QEAA?AV?$test_watcher@U_tip_EduDefaultThemeApplied@@@2@XZ @ 0x1806E4C6C (-start_and_watch_errors@-$tip_test@U_tip_EduDefaultThemeApplied@@@tip@@QEAA-AV-$test_watcher@U_t.c)
 * Callees:
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_EduDefaultThemeApplied>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_EduDefaultThemeApplied>>(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 16;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_EduDefaultThemeApplied>>::`vftable';
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<_tip_EduDefaultThemeApplied>::c_details);
  *(_BYTE *)(v1 + 184) = 0;
  *(_QWORD *)v1 = &tip::details::test_merged_data<_tip_EduDefaultThemeApplied>::`vftable';
  *(_QWORD *)(v1 + 176) = v1 + 64;
  return a1;
}
