/*
 * XREFs of ??1?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802876EC
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$7 @ 0x1802C51B4 (_GetPidlsFromTaskbarLayout_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(
        void **a1)
{
  return wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(a1);
}
