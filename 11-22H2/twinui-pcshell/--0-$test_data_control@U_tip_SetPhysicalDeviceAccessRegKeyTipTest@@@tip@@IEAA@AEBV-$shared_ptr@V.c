/*
 * XREFs of ??0?$test_data_control@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@tip@@IEAA@AEBV?$shared_ptr@V?$test_merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@details@tip@@@std@@@Z @ 0x180276BD4
 * Callers:
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 */

_QWORD *__fastcall tip::test_data_control<_tip_SetPhysicalDeviceAccessRegKeyTipTest>::test_data_control<_tip_SetPhysicalDeviceAccessRegKeyTipTest>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx

  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a1,
    a2);
  tip::details::test_common_data<1>::begin_update(*v3 + 8LL);
  return a1;
}
