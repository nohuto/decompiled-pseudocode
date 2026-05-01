/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x1801A96E0
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAJ@2@V32@V42@V32@V32@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAJ@1@121100@Z @ 0x1801E79A0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$?RV?$nvp@AEAU_tip_SnapLayoutProviderTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SnapLayoutProviderTest@@@1@@Z @ 0x1802294D4 (--$-RV-$nvp@AEAU_tip_SnapLayoutProviderTest@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180229EB4 (--$serialize@Voutput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVoutput_.c)
 *     ??$?RV?$nvp@AEAU_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@@1@@Z @ 0x18028B4B4 (--$-RV-$nvp@AEAU_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@@tson@@@output_archiv.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // r9
  char v6; // dl

  v4 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v4;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  v6 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v6;
  tson::output_archive::saveValue(this, **(_BYTE **)(a3 + 16));
}
