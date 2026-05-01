/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@?$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18069D768
 * Callers:
 *     ??$save_nothrow@U?$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAU?$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@@Z @ 0x18069D584 (--$save_nothrow@U-$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@.c)
 * Callees:
 *     ??$serialize_metrics@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAIAEAVoutput_archive@tson@@@Z @ 0x18024F4B4 (--$serialize_metrics@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAIAEAV.c)
 */

__int64 __fastcall tip2::details::test_data_metrics<PinManagerTipTests::_tip_PinManagerPinTest>::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  __int64 result; // rax

  result = PinManagerTipTests::_tip_PinManagerPinTest::serialize_metrics<tson::output_archive>(*(_QWORD *)a1, a2);
  **(_DWORD **)(a1 + 8) = result;
  return result;
}
