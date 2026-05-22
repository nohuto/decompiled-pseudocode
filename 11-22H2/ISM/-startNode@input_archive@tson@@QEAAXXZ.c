/*
 * XREFs of ?startNode@input_archive@tson@@QEAAXXZ @ 0x18006D0EC
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180069368 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18006968C (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 *     ?deserialize@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18006B2E0 (-deserialize@-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@ti.c)
 * Callees:
 *     ?push_node@input_archive@tson@@AEAAXXZ @ 0x18006C1A0 (-push_node@input_archive@tson@@AEAAXXZ.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18006CB64 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

void __fastcall tson::input_archive::startNode(tson::input_archive *this)
{
  tson::input_archive::search(this);
  if ( !*((_BYTE *)this + 25) )
    tson::input_archive::push_node((tson::read_buffer **)this);
}
