/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231130
 * Callers:
 *     ??$?RV?$nvp@AEAU_tip_AppPrelaunchBackgroundTask@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_AppPrelaunchBackgroundTask@@@1@@Z @ 0x18022EF64 (--$-RV-$nvp@AEAU_tip_AppPrelaunchBackgroundTask@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231844 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$c_ea_180231844.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1804639A4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<long &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2)
{
  tson::output_archive::process<tson::nvp<long &>>(this, a2);
  return tson::output_archive::process<tson::nvp<std::wstring &>>(this);
}
