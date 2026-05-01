/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@details@tip@@@std@@QEAA@XZ @ 0x180203554
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18020C4D8 (-ensure_data@-$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@.c)
 * Callees:
 *     ??0?$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x180098704 (--0-$test_common_data@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::_Ref_count_obj2<tip::details::test_merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>(
        __int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::`vftable';
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip::details::test_common_data<0>::test_common_data<0>(
    a1 + 24,
    a1 + 16,
    (__int64)&tip::details::test_merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::c_details);
  *(_DWORD *)(a1 + 204) = -1;
  *(_WORD *)(a1 + 200) = 0;
  *(_BYTE *)(a1 + 202) = 0;
  *(_WORD *)(a1 + 208) = 0;
  *v1 = &tip::details::test_merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::`vftable';
  v1[22] = v1 + 8;
  return a1;
}
