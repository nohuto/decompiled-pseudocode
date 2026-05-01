/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232704
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024B910 (-serialize@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231918 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@s_ea_180231918.c)
 */

__int64 __fastcall _tip_CallDashboardExtensionTIP::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  const char *v3; // [rsp+48h] [rbp+Fh] BYREF
  char v4; // [rsp+50h] [rbp+17h]
  __int64 v5; // [rsp+58h] [rbp+1Fh]
  const char *v6; // [rsp+60h] [rbp+27h] BYREF
  char v7; // [rsp+68h] [rbp+2Fh]
  __int64 v8; // [rsp+70h] [rbp+37h]
  __int64 v9; // [rsp+78h] [rbp+3Fh] BYREF
  char v10; // [rsp+80h] [rbp+47h]
  __int64 v11; // [rsp+88h] [rbp+4Fh]

  v4 = 16;
  v7 = 27;
  v10 = 24;
  v3 = "isCallSuccessful";
  v5 = a1 + 18;
  v6 = "isDashboardExtensionPresent";
  v8 = a1 + 17;
  v9 = (__int64)"isDashboardExtensionNull";
  v11 = a1 + 16;
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
