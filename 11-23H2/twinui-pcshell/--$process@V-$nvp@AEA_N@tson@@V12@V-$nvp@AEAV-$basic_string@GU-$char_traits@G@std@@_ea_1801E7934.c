/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E7934
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4SearchAppState@@@1@11100$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E7A84 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@V-$nvp@AEAV-$ba.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231918 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@s_ea_180231918.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // r10
  char v6; // dl

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v3;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  v6 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v6;
  tson::output_archive::saveValue(this, **(_BYTE **)(a3 + 16));
  return tson::output_archive::process<tson::nvp<std::wstring &>>(this);
}
