/*
 * XREFs of ??$serialize_metrics@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAIAEAVoutput_archive@tson@@@Z @ 0x18024F4B4
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@?$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTests@@@details@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18069D768 (--$serialize@Voutput_archive@tson@@@-$test_data_metrics@U_tip_PinManagerPinTest@PinManagerTipTes.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$?RV?$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x180461918 (--$-RV-$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAK@1@@Z.c)
 */

__int64 __fastcall PinManagerTipTests::_tip_PinManagerPinTest::serialize_metrics<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  const char *v5; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  *((_BYTE *)a2 + 8) = 7;
  *(_QWORD *)a2 = "apiType";
  tson::output_archive::saveValue(a2, *(_DWORD *)(a1 + 16));
  *((_BYTE *)a2 + 8) = 11;
  *(_QWORD *)a2 = "consentType";
  tson::output_archive::saveValue(a2, *(_DWORD *)(a1 + 1060));
  v6 = 6;
  v5 = "caller";
  v7 = a1 + 1068;
  tson::output_archive::operator()<tson::nvp<unsigned long &>>(a2, &v5);
  return *(_DWORD *)(a1 + 16) & 0xF | (16
                                     * (*(_DWORD *)(a1 + 1060) & 7 | (8 * (unsigned int)*(unsigned __int8 *)(a1 + 1068))));
}
