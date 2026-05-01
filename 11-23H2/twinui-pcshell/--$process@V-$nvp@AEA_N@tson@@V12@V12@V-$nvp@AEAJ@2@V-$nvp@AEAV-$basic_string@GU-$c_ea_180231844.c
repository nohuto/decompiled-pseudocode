/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231844
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232E14 (--$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVoutput_archive@tson.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardUsingHotkey@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232F50 (--$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardUsingHotkey@@QEAAXAEAVoutput_archive@tso.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  char v6; // r10
  char v9; // dl
  __int64 v10; // rax

  v6 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v6;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  v9 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v9;
  tson::output_archive::saveValue(this, **(_BYTE **)(a3 + 16));
  v10 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v10;
  tson::output_archive::saveValue(this, *(_BYTE *)a4[2]);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<std::wstring &>>(this, a5);
}
