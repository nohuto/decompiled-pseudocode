/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802318D0
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180231A7C (--$serialize@Vinput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVinput_archive@tson@@.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardUsingSwipe@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18023235C (--$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardUsingSwipe@@QEAAXAEAVinput_archive@tson@@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  tson::input_archive::process<tson::nvp<bool &>>(this, a2);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(this, a3, a4, a5);
}
