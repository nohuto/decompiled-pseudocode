/*
 * XREFs of ??C?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SnapFlyoutShowTest@@@1@XZ @ 0x1805AEEA4
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@XZ @ 0x1805B1964 (-ensure_data@-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_SnapFlyoutShowTest>::operator->(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(a1);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a2,
    v3);
  tip::details::test_common_data<1>::begin_update(*a2 + 8LL);
  return a2;
}
