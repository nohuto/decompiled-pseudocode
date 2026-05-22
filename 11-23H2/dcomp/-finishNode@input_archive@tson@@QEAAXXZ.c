/*
 * XREFs of ?finishNode@input_archive@tson@@QEAAXXZ @ 0x18009E42C
 * Callers:
 *     ??$?RV?$nvp@AEAVtest_data_basic@tip2@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAVtest_data_basic@tip2@@@1@@Z @ 0x18009C854 (--$-RV-$nvp@AEAVtest_data_basic@tip2@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAVtes.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x18009CCA8 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18009CFCC (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18009DE68 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

void __fastcall tson::input_archive::finishNode(tson::input_archive *this)
{
  tson::input_archive *v1; // r11
  __int64 v2; // rax

  v1 = this;
  if ( !*((_BYTE *)this + 25) )
  {
    v2 = *((_QWORD *)this + 17);
    if ( v2 )
      *((_QWORD *)this + 17) = v2 - 1;
    else
      *((_BYTE *)this + 32) = 1;
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
  }
  *((_BYTE *)v1 + 25) = 0;
}
