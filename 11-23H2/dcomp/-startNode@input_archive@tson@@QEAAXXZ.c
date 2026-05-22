/*
 * XREFs of ?startNode@input_archive@tson@@QEAAXXZ @ 0x18009F7B8
 * Callers:
 *     ??$?RV?$nvp@AEAVtest_data_basic@tip2@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAVtest_data_basic@tip2@@@1@@Z @ 0x18009C854 (--$-RV-$nvp@AEAVtest_data_basic@tip2@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAVtes.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x18009CCA8 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18009CFCC (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 * Callees:
 *     ?push_node@input_archive@tson@@AEAAXXZ @ 0x18009E9E0 (-push_node@input_archive@tson@@AEAAXXZ.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18009F220 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

void __fastcall tson::input_archive::startNode(tson::input_archive *this)
{
  tson::input_archive::search(this);
  if ( !*((_BYTE *)this + 25) )
    tson::input_archive::push_node((tson::read_buffer **)this);
}
