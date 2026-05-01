/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1802871D0
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180288B90 (-deserialize@-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_b.c)
 * Callees:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180463C0C (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 */

__int64 __fastcall tip2::details::stored_flag_requirements::serialize<tson::input_archive>(__int64 a1, tson *a2)
{
  tson::input_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(a2);
  tson::input_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(a2);
  return tson::input_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(a2);
}
