/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x180287684
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     GetEnterprisePinDataFromRegistry @ 0x180287B1C (GetEnterprisePinDataFromRegistry.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180287EFC (PersistEnterprisePinDataToRegistry.c)
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$3 @ 0x1802880F3 (_PersistEnterprisePinDataToRegistry_--_1_--catch$3.c)
 *     ShouldAddEnterprisePinToOutput @ 0x1802883A8 (ShouldAddEnterprisePinToOutput.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$15 @ 0x18028875A (_ShouldAddEnterprisePinToOutput_--_1_--catch$15.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180288BF4 (-end_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180289158 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(
        void **a1)
{
  char *v2; // rcx

  v2 = (char *)*a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,1>::end_update(v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(a1);
}
