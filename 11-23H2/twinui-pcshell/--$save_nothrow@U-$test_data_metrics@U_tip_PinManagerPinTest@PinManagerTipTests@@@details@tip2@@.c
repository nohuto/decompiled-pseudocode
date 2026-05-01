/*
 * XREFs of ??$save_nothrow@U?$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAU?$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@@Z @ 0x18069D584
 * Callers:
 *     ?serialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806AA220 (-serialize@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::save_nothrow<tip2::details::test_data_metrics<PinManagerTipTests::_tip_PinManagerPinTest>>(
        __int64 a1,
        __int64 a2)
{
  return tip2::details::test_data_metrics<PinManagerTipTests::_tip_PinManagerPinTest>::serialize<tson::output_archive>(
           a2,
           a1);
}
