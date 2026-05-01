/*
 * XREFs of ??$?RV?$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x180461918
 * Callers:
 *     ??$?RV?$nvp@AEAU?$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip2@@@1@@Z @ 0x18022EEE4 (--$-RV-$nvp@AEAU-$test_data_metrics@U_tip_WidgetsAppInstallTIP@@@details@tip2@@@tson@@@output_ar.c)
 *     ??$serialize_metrics@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAIAEAVoutput_archive@tson@@@Z @ 0x18024F4B4 (--$serialize_metrics@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAIAEAV.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<unsigned long &>>(
        tson::output_archive *a1,
        __int64 a2)
{
  char v3; // r8

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_BYTE *)a1 + 8) = v3;
  tson::output_archive::saveValue(a1, **(_DWORD **)(a2 + 16));
  return a1;
}
