/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAJ@2@V32@V42@V32@V32@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAJ@1@121100@Z @ 0x1801E79A0
 * Callers:
 *     ??$?RV?$nvp@AEAW4InstallTrigger@@@tson@@V?$nvp@AEA_N@1@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V21@V?$nvp@AEAJ@1@V31@V41@V31@V31@V21@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAW4InstallTrigger@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAJ@1@232211@Z @ 0x1801E5BF0 (--$-RV-$nvp@AEAW4InstallTrigger@@@tson@@V-$nvp@AEA_N@1@V-$nvp@AEAV-$basic_string@GU_ea_1801E5BF0.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x18028BD34 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1804639A4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  char v13; // r10
  __int64 v15; // rax
  __int64 v16; // rax

  v13 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v13;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  tson::output_archive::process<tson::nvp<std::wstring &>>(this);
  v15 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v15;
  tson::output_archive::saveValue(this, *(_BYTE *)a4[2]);
  v16 = *a5;
  *((_BYTE *)this + 8) = *((_BYTE *)a5 + 8);
  *(_QWORD *)this = v16;
  tson::output_archive::saveValue(this, *(_BYTE *)a5[2]);
  tson::output_archive::process<tson::nvp<long &>>(this, a6);
  tson::output_archive::process<tson::nvp<std::wstring &>>(this);
  tson::output_archive::process<tson::nvp<long &>>(this, a8);
  tson::output_archive::process<tson::nvp<std::wstring &>>(this);
  tson::output_archive::process<tson::nvp<std::wstring &>>(this);
  tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(this, a11, a12);
}
