/*
 * XREFs of ?deserialize@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180249780
 * Callers:
 *     <none>
 * Callees:
 *     ??$serialize@Vinput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180231974 (--$serialize@Vinput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVinput_archive@tson@@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>::deserialize(__int64 a1, __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  _tip_AppPrelaunch::serialize<tson::input_archive>((a1 + 248) & -(__int64)(a1 != 0), a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
