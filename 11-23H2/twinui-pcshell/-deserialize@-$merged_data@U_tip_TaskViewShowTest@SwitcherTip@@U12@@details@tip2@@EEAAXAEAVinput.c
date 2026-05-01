/*
 * XREFs of ?deserialize@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18028ADB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$serialize@Vinput_archive@tson@@@_tip_TaskViewShowTest@SwitcherTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180289DCC (--$serialize@Vinput_archive@tson@@@_tip_TaskViewShowTest@SwitcherTip@@QEAAXAEAVinput_archive@tso.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  SwitcherTip::_tip_TaskViewShowTest::serialize<tson::input_archive>(
    (a1 + 248) & -(__int64)(a1 != 0),
    (tson::input_archive *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
