/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E78DC
 * Callers:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V?$nvp@AEAW4SearchAppState@@@1@V21@V21@V21@V01@V01@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00000000$$QEAV?$nvp@AEAW4SearchAppState@@@1@11100$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E5CBC (--$-RV-$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V-$nvp@AEAW4SearchAppState@@@1@V21@V21@V.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802318D0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v7; // dl

  tson::input_archive::process<tson::nvp<bool &>>(this, a2);
  tson::input_archive::process<tson::nvp<bool &>>(this, a3);
  v7 = *(_BYTE *)(a4 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a4;
  *((_BYTE *)this + 24) = v7;
  return tson::load_nothrow(this);
}
