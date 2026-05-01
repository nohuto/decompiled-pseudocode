/*
 * XREFs of ?serialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806AA220
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$save_nothrow@U?$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@@tson@@YAXAEAVoutput_archive@0@AEAU?$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@@Z @ 0x18069D584 (--$save_nothrow@U-$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18069D78C (--$serialize@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVoutput_a.c)
 */

void __fastcall tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v6[0] = a1 + 248;
    else
      v6[0] = 0LL;
    *((_BYTE *)a2 + 8) = 7;
    v6[1] = a1 + 184;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    tson::save_nothrow<tip2::details::test_data_metrics<PinManagerTipTests::_tip_PinManagerPinTest>>(
      (__int64)a2,
      (__int64)v6);
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    PinManagerTipTests::_tip_PinManagerPinTest::serialize<tson::output_archive>((a1 + 248) & -(__int64)(a1 != 0), a2);
    tson::output_archive::finishNode(a2);
  }
}
