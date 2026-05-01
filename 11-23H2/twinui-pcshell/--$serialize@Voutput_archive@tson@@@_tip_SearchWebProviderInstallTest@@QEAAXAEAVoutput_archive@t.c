/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180465BCC
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18046DF50 (-serialize@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXAEAVoutput_a.c)
 * Callees:
 *     ??$?RV?$nvp@AEAW4InstallTrigger@@@tson@@V?$nvp@AEA_N@1@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V21@V?$nvp@AEAJ@1@V31@V41@V31@V31@V21@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAW4InstallTrigger@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAJ@1@232211@Z @ 0x1801E5BF0 (--$-RV-$nvp@AEAW4InstallTrigger@@@tson@@V-$nvp@AEA_N@1@V-$nvp@AEAV-$basic_string@GU_ea_1801E5BF0.c)
 */

tson::output_archive *__fastcall _tip_SearchWebProviderInstallTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  __int64 v3; // [rsp+B8h] [rbp-48h] BYREF
  char v4; // [rsp+C0h] [rbp-40h]
  __int64 v5; // [rsp+C8h] [rbp-38h]
  __int64 v6; // [rsp+D0h] [rbp-30h] BYREF
  char v7; // [rsp+D8h] [rbp-28h]
  __int64 v8; // [rsp+E0h] [rbp-20h]
  __int64 v9; // [rsp+E8h] [rbp-18h] BYREF
  char v10; // [rsp+F0h] [rbp-10h]
  __int64 v11; // [rsp+F8h] [rbp-8h]
  __int64 v12; // [rsp+100h] [rbp+0h] BYREF
  char v13; // [rsp+108h] [rbp+8h]
  __int64 v14; // [rsp+110h] [rbp+10h]
  __int64 v15; // [rsp+118h] [rbp+18h] BYREF
  char v16; // [rsp+120h] [rbp+20h]
  __int64 v17; // [rsp+128h] [rbp+28h]
  __int64 v18; // [rsp+130h] [rbp+30h] BYREF
  char v19; // [rsp+138h] [rbp+38h]
  __int64 v20; // [rsp+140h] [rbp+40h]
  const char *v21; // [rsp+148h] [rbp+48h] BYREF
  char v22; // [rsp+150h] [rbp+50h]
  __int64 v23; // [rsp+158h] [rbp+58h]
  const char *v24; // [rsp+160h] [rbp+60h] BYREF
  char v25; // [rsp+168h] [rbp+68h]
  __int64 v26; // [rsp+170h] [rbp+70h]
  const char *v27; // [rsp+178h] [rbp+78h] BYREF
  char v28; // [rsp+180h] [rbp+80h]
  __int64 v29; // [rsp+188h] [rbp+88h]

  v4 = 19;
  v3 = (__int64)"app_current_version";
  v5 = a1 + 104;
  v6 = (__int64)"app_installed_regkey_set_hresult";
  v8 = a1 + 96;
  v9 = (__int64)"registration_error_text";
  v11 = a1 + 64;
  v12 = (__int64)"registration_error_code";
  v14 = a1 + 60;
  v15 = (__int64)"app_registered";
  v17 = a1 + 57;
  v18 = (__int64)"app_already_installed";
  v20 = a1 + 56;
  v21 = "install_package_family_name";
  v23 = a1 + 24;
  v24 = "install_package_regkeys_not_set";
  v26 = a1 + 20;
  v27 = "install_trigger";
  v29 = a1 + 16;
  v7 = 32;
  v10 = 23;
  v13 = 23;
  v16 = 14;
  v19 = 21;
  v22 = 27;
  v25 = 31;
  v28 = 15;
  return tson::output_archive::operator()<tson::nvp<enum InstallTrigger &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v27,
           (__int64)&v24,
           (__int64)&v21,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
