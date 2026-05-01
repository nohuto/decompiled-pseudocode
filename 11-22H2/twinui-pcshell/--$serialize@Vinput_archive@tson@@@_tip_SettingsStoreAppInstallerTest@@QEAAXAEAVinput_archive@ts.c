/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180231EF0
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1802499B0 (-deserialize@-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVinput.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_K@tson@@V?$nvp@AEAH@2@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V62@V62@V62@V62@V62@V62@V62@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V72@V?$nvp@AEAV?$optional@_N@std@@@2@V82@V82@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@4444444$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@5$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@66@Z @ 0x1802315FC (--$process@V-$nvp@AEA_K@tson@@V-$nvp@AEAH@2@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@St.c)
 */

__int64 __fastcall _tip_SettingsStoreAppInstallerTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+D8h] [rbp-38h] BYREF
  char v4; // [rsp+E0h] [rbp-30h]
  __int64 v5; // [rsp+E8h] [rbp-28h]
  __int64 v6; // [rsp+F0h] [rbp-20h] BYREF
  char v7; // [rsp+F8h] [rbp-18h]
  __int64 v8; // [rsp+100h] [rbp-10h]
  __int64 v9; // [rsp+108h] [rbp-8h] BYREF
  char v10; // [rsp+110h] [rbp+0h]
  __int64 v11; // [rsp+118h] [rbp+8h]
  __int64 v12; // [rsp+120h] [rbp+10h] BYREF
  char v13; // [rsp+128h] [rbp+18h]
  __int64 v14; // [rsp+130h] [rbp+20h]
  __int64 v15; // [rsp+138h] [rbp+28h] BYREF
  char v16; // [rsp+140h] [rbp+30h]
  __int64 v17; // [rsp+148h] [rbp+38h]
  __int64 v18; // [rsp+150h] [rbp+40h] BYREF
  char v19; // [rsp+158h] [rbp+48h]
  __int64 v20; // [rsp+160h] [rbp+50h]
  __int64 v21; // [rsp+168h] [rbp+58h] BYREF
  char v22; // [rsp+170h] [rbp+60h]
  __int64 v23; // [rsp+178h] [rbp+68h]
  __int64 v24; // [rsp+180h] [rbp+70h] BYREF
  char v25; // [rsp+188h] [rbp+78h]
  __int64 v26; // [rsp+190h] [rbp+80h]
  __int64 v27; // [rsp+198h] [rbp+88h] BYREF
  char v28; // [rsp+1A0h] [rbp+90h]
  __int64 v29; // [rsp+1A8h] [rbp+98h]
  __int64 v30; // [rsp+1B0h] [rbp+A0h] BYREF
  char v31; // [rsp+1B8h] [rbp+A8h]
  __int64 v32; // [rsp+1C0h] [rbp+B0h]
  __int64 v33; // [rsp+1C8h] [rbp+B8h] BYREF
  char v34; // [rsp+1D0h] [rbp+C0h]
  __int64 v35; // [rsp+1D8h] [rbp+C8h]
  const char *v36; // [rsp+1E0h] [rbp+D0h] BYREF
  char v37; // [rsp+1E8h] [rbp+D8h]
  __int64 v38; // [rsp+1F0h] [rbp+E0h]
  const char *v39; // [rsp+1F8h] [rbp+E8h] BYREF
  char v40; // [rsp+200h] [rbp+F0h]
  __int64 v41; // [rsp+208h] [rbp+F8h]
  const char *v42; // [rsp+210h] [rbp+100h] BYREF
  char v43; // [rsp+218h] [rbp+108h]
  __int64 v44; // [rsp+220h] [rbp+110h]

  v3 = (__int64)"packageFamilyName";
  v5 = a1 + 96;
  v6 = (__int64)"productId";
  v8 = a1 + 64;
  v9 = (__int64)"minimumVersion.Revision";
  v11 = a1 + 58;
  v12 = (__int64)"minimumVersion.Build";
  v14 = a1 + 56;
  v15 = (__int64)"minimumVersion.Minor";
  v17 = a1 + 54;
  v18 = (__int64)"minimumVersion.Major";
  v20 = a1 + 52;
  v21 = (__int64)"installedVersion.Revision";
  v23 = a1 + 50;
  v24 = (__int64)"installedVersion.Build";
  v26 = a1 + 48;
  v27 = (__int64)"installedVersion.Minor";
  v29 = a1 + 46;
  v30 = (__int64)"installedVersion.Major";
  v32 = a1 + 44;
  v33 = (__int64)"installState";
  v35 = a1 + 40;
  v36 = "installType";
  v38 = a1 + 36;
  v39 = "installError.value";
  v41 = a1 + 32;
  v4 = 17;
  v7 = 9;
  v10 = 23;
  v13 = 20;
  v16 = 20;
  v19 = 20;
  v22 = 25;
  v25 = 22;
  v28 = 22;
  v31 = 22;
  v34 = 12;
  v37 = 11;
  v40 = 18;
  v43 = 15;
  v42 = "bytesDownloaded";
  v44 = a1 + 24;
  return tson::input_archive::process<tson::nvp<unsigned __int64 &>,tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
           a2,
           (__int64)&v42,
           (__int64)&v39,
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
           &v6,
           &v3);
}
