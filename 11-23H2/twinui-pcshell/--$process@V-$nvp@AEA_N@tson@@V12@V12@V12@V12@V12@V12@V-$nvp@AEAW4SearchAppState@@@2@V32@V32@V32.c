/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000$$QEAV?$nvp@AEAW4SearchAppState@@@1@11100$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E76F8
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000000$$QEAV?$nvp@AEAW4SearchAppState@@@1@11100$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E75E4 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAW4SearchAppState@@@2@V32.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAW4SearchAppState@@@1@11100$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E77FC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V-$nvp@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@V-$.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  char v16; // r10
  char v19; // dl
  __int64 v20; // rax

  v16 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v16;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  v19 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v19;
  tson::output_archive::saveValue(this, **(_BYTE **)(a3 + 16));
  v20 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v20;
  tson::output_archive::saveValue(this, *(_BYTE *)a4[2]);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           this,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15);
}
