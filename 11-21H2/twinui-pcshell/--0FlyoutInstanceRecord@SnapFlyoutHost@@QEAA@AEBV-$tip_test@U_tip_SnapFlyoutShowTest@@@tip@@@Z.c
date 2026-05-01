/*
 * XREFs of ??0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@Z @ 0x1805AE5FC
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@XZ @ 0x1805B1964 (-ensure_data@-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data.c)
 */

_QWORD *__fastcall SnapFlyoutHost::FlyoutInstanceRecord::FlyoutInstanceRecord(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *result; // rax

  v3 = (_QWORD *)tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(a2);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a1,
    v3);
  result = a1;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
  return result;
}
