/*
 * XREFs of ?deserialize@?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180274EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$serialize_helper@Vinput_archive@tson@@@_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@AEAAXAEAVinput_archive@tson@@@Z @ 0x18025FE58 (--$serialize_helper@Vinput_archive@tson@@@_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@AEA.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  _tip_CopilotHardwareKeyExtendedSignalsInvokedTest::serialize_helper<tson::input_archive>(
    (a1 + 248) & -(__int64)(a1 != 0),
    (tson::input_archive *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
