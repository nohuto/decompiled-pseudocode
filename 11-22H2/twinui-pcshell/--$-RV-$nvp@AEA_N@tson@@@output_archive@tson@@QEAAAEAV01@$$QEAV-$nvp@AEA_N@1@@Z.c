/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180220470
 * Callers:
 *     ??$?RV?$nvp@AEAU_tip_SnapLauncherTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SnapLauncherTest@@@1@@Z @ 0x180220408 (--$-RV-$nvp@AEAU_tip_SnapLauncherTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAU_.c)
 *     ??$?RV?$nvp@AEAU_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@@1@@Z @ 0x18025D7A4 (--$-RV-$nvp@AEAU_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@@tson@@@output_archive@tson@@Q.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<bool &>>(
        tson::output_archive *a1,
        __int64 a2)
{
  char v3; // r8

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_BYTE *)a1 + 8) = v3;
  tson::output_archive::saveValue(a1, **(_BYTE **)(a2 + 16));
  return a1;
}
