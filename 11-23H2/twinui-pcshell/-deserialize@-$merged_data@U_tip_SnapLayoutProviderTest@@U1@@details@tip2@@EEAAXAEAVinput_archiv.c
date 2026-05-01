/*
 * XREFs of ?deserialize@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1802297F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x180464214 (--$process@V-$nvp@AEA_N@tson@@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@0@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>((tson::input_archive *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
