/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x180289648
 * Callers:
 *     ??$?RV?$nvp@AEAU_tip_AltTabShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_AltTabShowTest@SwitcherTip@@@1@@Z @ 0x18028957C (--$-RV-$nvp@AEAU_tip_AltTabShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-.c)
 *     ??$?RV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@1@@Z @ 0x18028AFF4 (--$-RV-$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$Q.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x18022471C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<int &>>(
        tson::output_archive *a1,
        __int64 a2,
        __int64 a3)
{
  char v4; // r9
  char v6; // dl

  v4 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_BYTE *)a1 + 8) = v4;
  tson::output_archive::saveValue(a1, **(_BYTE **)(a2 + 16));
  v6 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *((_BYTE *)a1 + 8) = v6;
  tson::output_archive::operator()<int &>((void ***)a1, *(int **)(a3 + 16));
  return a1;
}
