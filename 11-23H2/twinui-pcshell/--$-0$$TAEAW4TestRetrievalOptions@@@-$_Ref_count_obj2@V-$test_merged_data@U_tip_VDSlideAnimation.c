/*
 * XREFs of ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x1805FCA14
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FE91C (--$open_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 * Callees:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1800925D4 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_VDSlideAnimationPerfTest@@QEAA@XZ @ 0x1806001E4 (--0_tip_VDSlideAnimationPerfTest@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>>(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  _QWORD *v4; // rsi
  int v5; // ebp
  __int64 v6; // r14

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>>::`vftable';
  v4 = (_QWORD *)(a1 + 16);
  v5 = *a3;
  v6 = *a2;
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>::c_details);
  _tip_VDSlideAnimationPerfTest::_tip_VDSlideAnimationPerfTest((_tip_VDSlideAnimationPerfTest *)(v4 + 22));
  *v4 = &tip::details::test_merged_data<_tip_VDSlideAnimationPerfTest>::`vftable';
  v4[22] = v4 + 8;
  tip::details::test_common_data<1>::open_without_lock((__int64)(v4 + 1), v6, v5);
  return a1;
}
