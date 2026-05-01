/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180465A1C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18046BE30 (-deserialize@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXAEAVinput_.c)
 * Callees:
 *     ??$?RV?$nvp@AEAW4InstallTrigger@@@tson@@V?$nvp@AEA_N@1@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V21@V?$nvp@AEAJ@1@V31@V41@V31@V31@V21@V21@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAW4InstallTrigger@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAJ@1@232211@Z @ 0x1801E5B64 (--$-RV-$nvp@AEAW4InstallTrigger@@@tson@@V-$nvp@AEA_N@1@V-$nvp@AEAV-$basic_string@GU-$char_traits.c)
 */

tson::input_archive *__fastcall _tip_SearchWebProviderInstallTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  const char *v3; // [rsp+70h] [rbp-90h] BYREF
  char v4; // [rsp+78h] [rbp-88h]
  __int64 v5; // [rsp+80h] [rbp-80h]
  const char *v6; // [rsp+88h] [rbp-78h] BYREF
  char v7; // [rsp+90h] [rbp-70h]
  __int64 v8; // [rsp+98h] [rbp-68h]
  const char *v9; // [rsp+A0h] [rbp-60h] BYREF
  char v10; // [rsp+A8h] [rbp-58h]
  __int64 v11; // [rsp+B0h] [rbp-50h]
  const char *v12; // [rsp+B8h] [rbp-48h] BYREF
  char v13; // [rsp+C0h] [rbp-40h]
  __int64 v14; // [rsp+C8h] [rbp-38h]
  const char *v15; // [rsp+D0h] [rbp-30h] BYREF
  char v16; // [rsp+D8h] [rbp-28h]
  __int64 v17; // [rsp+E0h] [rbp-20h]
  const char *v18; // [rsp+E8h] [rbp-18h] BYREF
  char v19; // [rsp+F0h] [rbp-10h]
  __int64 v20; // [rsp+F8h] [rbp-8h]
  const char *v21; // [rsp+100h] [rbp+0h] BYREF
  char v22; // [rsp+108h] [rbp+8h]
  __int64 v23; // [rsp+110h] [rbp+10h]
  const char *v24; // [rsp+118h] [rbp+18h] BYREF
  char v25; // [rsp+120h] [rbp+20h]
  __int64 v26; // [rsp+128h] [rbp+28h]
  const char *v27; // [rsp+130h] [rbp+30h] BYREF
  char v28; // [rsp+138h] [rbp+38h]
  __int64 v29; // [rsp+140h] [rbp+40h]
  const char *v30; // [rsp+148h] [rbp+48h] BYREF
  char v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+158h] [rbp+58h]
  const char *v33; // [rsp+160h] [rbp+60h] BYREF
  char v34; // [rsp+168h] [rbp+68h]
  __int64 v35; // [rsp+170h] [rbp+70h]
  const char *v36; // [rsp+178h] [rbp+78h] BYREF
  char v37; // [rsp+180h] [rbp+80h]
  __int64 v38; // [rsp+188h] [rbp+88h]

  v4 = 23;
  v3 = "app_uninstalled_by_user";
  v7 = 18;
  v5 = a1 + 169;
  v10 = 19;
  v6 = "app_update_version";
  v13 = 19;
  v8 = a1 + 168;
  v9 = "app_install_version";
  v11 = a1 + 136;
  v12 = "app_current_version";
  v14 = a1 + 104;
  v15 = "app_installed_regkey_set_hresult";
  v17 = a1 + 96;
  v18 = "registration_error_text";
  v20 = a1 + 64;
  v21 = "registration_error_code";
  v23 = a1 + 60;
  v24 = "app_registered";
  v26 = a1 + 57;
  v27 = "app_already_installed";
  v29 = a1 + 56;
  v30 = "install_package_family_name";
  v32 = a1 + 24;
  v33 = "install_package_regkeys_not_set";
  v35 = a1 + 20;
  v36 = "install_trigger";
  v38 = a1 + 16;
  v16 = 32;
  v19 = 23;
  v22 = 23;
  v25 = 14;
  v28 = 21;
  v31 = 27;
  v34 = 31;
  v37 = 15;
  return tson::input_archive::operator()<tson::nvp<enum InstallTrigger &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v36,
           (__int64)&v33,
           (__int64)&v30,
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
