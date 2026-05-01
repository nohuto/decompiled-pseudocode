/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardUsingHotkey@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232F50
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024BC80 (-serialize@-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@EEAAXAEAVoutput_arc.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231844 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$c_ea_180231844.c)
 */

__int64 __fastcall _tip_ToggleDashboardUsingHotkey::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  const char *v3; // [rsp+48h] [rbp-11h] BYREF
  char v4; // [rsp+50h] [rbp-9h]
  __int64 v5; // [rsp+58h] [rbp-1h]
  const char *v6; // [rsp+60h] [rbp+7h] BYREF
  char v7; // [rsp+68h] [rbp+Fh]
  __int64 v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh] BYREF
  char v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  __int64 v12; // [rsp+90h] [rbp+37h] BYREF
  char v13; // [rsp+98h] [rbp+3Fh]
  __int64 v14; // [rsp+A0h] [rbp+47h]

  v4 = 2;
  v7 = 24;
  v10 = 27;
  v3 = "hr";
  v13 = 38;
  v5 = a1 + 20;
  v6 = "isRelevantExtensionError";
  v8 = a1 + 18;
  v9 = (__int64)"isDashboardExtensionPresent";
  v11 = a1 + 17;
  v12 = (__int64)"isDashboardExtensionCreationSuccessful";
  v14 = a1 + 16;
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v12,
           (__int64)&v9,
           (__int64 *)&v6,
           (__int64)&v3);
}
