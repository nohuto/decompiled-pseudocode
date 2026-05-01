/*
 * XREFs of ??$?RV?$nvp@AEAW4InstallTrigger@@@tson@@V?$nvp@AEA_N@1@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V21@V?$nvp@AEAJ@1@V31@V41@V31@V31@V21@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAW4InstallTrigger@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAJ@1@232211@Z @ 0x1801E5BF0
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180465BCC (--$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAJ@2@V32@V42@V32@V32@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAJ@1@121100@Z @ 0x1801E79A0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<enum InstallTrigger &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  char v11; // r10

  v11 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v11;
  tson::output_archive::saveValue(this, **(_DWORD **)(a2 + 16));
  tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
    this,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  return this;
}
