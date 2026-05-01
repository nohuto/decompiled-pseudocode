/*
 * XREFs of ?deserialize@?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1801F0990
 * Callers:
 *     <none>
 * Callees:
 *     ??$serialize@Vinput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1801E7B54 (--$serialize@Vinput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVinput_archive@tson.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  _tip_SearchSpartanMitigationTest::serialize<tson::input_archive>((a1 + 248) & -(__int64)(a1 != 0), a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
