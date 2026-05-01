/*
 * XREFs of ??$?RV?$nvp@AEAU?$test_data_metrics@U_tip_StartMenuInvokeTest@@@details@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@U_tip_StartMenuInvokeTest@@@details@tip2@@@1@@Z @ 0x1801FB388
 * Callers:
 *     ?serialize@?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180201940 (-serialize@-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@ts.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_StartMenuInvokeTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1801FDD48 (--$serialize@Voutput_archive@tson@@@_tip_StartMenuInvokeTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<tip2::details::test_data_metrics<_tip_StartMenuInvokeTest> &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  unsigned __int8 **v4; // rdi
  unsigned __int8 *v5; // rbx

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(unsigned __int8 ***)(a2 + 16);
  tson::output_archive::startNode(this);
  v5 = *v4;
  _tip_StartMenuInvokeTest::serialize<tson::output_archive>(*v4, this);
  *(_DWORD *)v4[1] = v5[64] | (unsigned __int8)(2 * (v5[65] | (2 * (v5[66] | (2 * v5[67])))));
  tson::output_archive::finishNode(this);
  return this;
}
