/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@QEAA@XZ @ 0x1805FCAC0
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@XZ @ 0x1806078E8 (-ensure_data@-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 * Callees:
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_VDSlideAnimationPerfTest@@QEAA@XZ @ 0x1806001E4 (--0_tip_VDSlideAnimationPerfTest@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>>(
        __int64 a1)
{
  _QWORD *v2; // rdi

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>>::`vftable';
  v2 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>::c_details);
  _tip_VDSlideAnimationPerfTest::_tip_VDSlideAnimationPerfTest((_tip_VDSlideAnimationPerfTest *)(v2 + 22));
  *v2 = &tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>::`vftable';
  v2[22] = v2 + 8;
  return a1;
}
