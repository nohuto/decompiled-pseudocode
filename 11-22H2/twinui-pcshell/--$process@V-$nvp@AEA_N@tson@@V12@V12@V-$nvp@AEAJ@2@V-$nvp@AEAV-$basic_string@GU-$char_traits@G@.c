/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802317E8
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180232188 (--$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardUsingHotkey@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1802322A0 (--$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardUsingHotkey@@QEAAXAEAVinput_archive@tson@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  tson::input_archive::process<tson::nvp<bool &>>(this, a2);
  tson::input_archive::process<tson::nvp<bool &>>(this, a3);
  tson::input_archive::process<tson::nvp<bool &>>(this, a4);
  return tson::input_archive::process<tson::nvp<long &>,tson::nvp<std::wstring &>>(this, a5, a6);
}
