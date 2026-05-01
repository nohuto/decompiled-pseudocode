/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180233198
 * Callers:
 *     ?serialize@?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024BDE0 (-serialize@-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x18028BD34 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1804639A4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x180464144 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

__int64 __fastcall _tip_WidgetsAppInstallTIP::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  const char *v5; // [rsp+20h] [rbp-60h] BYREF
  char v6; // [rsp+28h] [rbp-58h]
  __int64 v7; // [rsp+30h] [rbp-50h]
  const char *v8; // [rsp+38h] [rbp-48h] BYREF
  char v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  const char *v11; // [rsp+50h] [rbp-30h]
  char v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  const char *v14; // [rsp+68h] [rbp-18h]
  char v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]

  v15 = 18;
  v12 = 20;
  v14 = "finalVersionString";
  v9 = 6;
  v16 = a1 + 48;
  v6 = 29;
  v11 = "initialVersionString";
  v13 = a1 + 16;
  v8 = "result";
  v10 = a1 + 92;
  v5 = "installDurationInMilliseconds";
  v7 = a1 + 80;
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, &v5);
  *((_BYTE *)a2 + 8) = 12;
  *(_QWORD *)a2 = "installState";
  tson::output_archive::saveValue(a2, *(_DWORD *)(a1 + 88));
  tson::output_archive::process<tson::nvp<long &>>(a2, &v8);
  *((_BYTE *)a2 + 8) = 23;
  *(_QWORD *)a2 = "packageInstallRestarted";
  tson::output_archive::saveValue(a2, *(_BYTE *)(a1 + 96));
  *((_BYTE *)a2 + 8) = 21;
  *(_QWORD *)a2 = "packageInstallStarted";
  tson::output_archive::saveValue(a2, *(_BYTE *)(a1 + 97));
  tson::output_archive::process<tson::nvp<std::wstring &>>(a2);
  return tson::output_archive::process<tson::nvp<std::wstring &>>(a2);
}
