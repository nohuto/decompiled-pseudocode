/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18028725C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180289180 (-serialize@-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_bas.c)
 * Callees:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180463C54 (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@output_archive@tson@@AEAA.c)
 */

__int64 __fastcall tip2::details::stored_flag_requirements::serialize<tson::output_archive>(__int64 a1, tson *a2)
{
  tson::output_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(a2);
  tson::output_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(a2);
  return tson::output_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(a2);
}
