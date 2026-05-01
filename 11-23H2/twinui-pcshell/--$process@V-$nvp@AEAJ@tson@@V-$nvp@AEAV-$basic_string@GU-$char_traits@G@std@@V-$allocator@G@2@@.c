/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802310F0
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802317E8 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@.c)
 *     ?deserialize@?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1802497E0 (-deserialize@-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXAEAVinput_ar.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x180463940 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<long &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3)
{
  char v5; // dl

  tson::input_archive::process<tson::nvp<long &>>(this, a2);
  v5 = *(_BYTE *)(a3 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a3;
  *((_BYTE *)this + 24) = v5;
  return tson::load_nothrow(this);
}
