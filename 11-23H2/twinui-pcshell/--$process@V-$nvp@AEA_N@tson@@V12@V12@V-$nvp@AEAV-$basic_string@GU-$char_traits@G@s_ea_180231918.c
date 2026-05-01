/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231918
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231708 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_tra.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232704 (--$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // r10

  v5 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v5;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(this, a3, a4);
}
