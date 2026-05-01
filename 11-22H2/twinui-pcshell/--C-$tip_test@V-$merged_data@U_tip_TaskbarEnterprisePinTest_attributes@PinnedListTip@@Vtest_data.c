/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x1802877C4
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     GetEnterprisePinDataFromRegistry @ 0x180287B1C (GetEnterprisePinDataFromRegistry.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180287EFC (PersistEnterprisePinDataToRegistry.c)
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$3 @ 0x1802880F3 (_PersistEnterprisePinDataToRegistry_--_1_--catch$3.c)
 *     ShouldAddEnterprisePinToOutput @ 0x1802883A8 (ShouldAddEnterprisePinToOutput.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$15 @ 0x18028875A (_ShouldAddEnterprisePinToOutput_--_1_--catch$15.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180288D54 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::ensure_data(a1);
  v4 = *v3;
  *a2 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 328));
  tip2::details::shared_data<0,0,1>::begin_update(*a2 + 8);
  return a2;
}
