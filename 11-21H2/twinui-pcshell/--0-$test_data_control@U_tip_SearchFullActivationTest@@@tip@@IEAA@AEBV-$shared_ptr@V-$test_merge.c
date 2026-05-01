/*
 * XREFs of ??0?$test_data_control@U_tip_SearchFullActivationTest@@@tip@@IEAA@AEBV?$shared_ptr@V?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@std@@@Z @ 0x18019B784
 * Callers:
 *     ?data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchFullActivationTest@@@2@XZ @ 0x18019C174 (-data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchFu.c)
 *     ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0 (-data@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchHideTest@@@2.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 */

_QWORD *__fastcall tip::test_data_control<_tip_SearchFullActivationTest>::test_data_control<_tip_SearchFullActivationTest>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx

  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a1,
    a2);
  tip::details::test_common_data<0>::begin_update(*v3 + 8LL);
  return a1;
}
