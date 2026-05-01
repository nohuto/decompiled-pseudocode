/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232B70
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024BB20 (-serialize@-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVoutput_.c)
 * Callees:
 *     ??$process@V?$nvp@AEAH@tson@@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V52@V52@V52@V52@V52@V52@V52@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V62@V?$nvp@AEAV?$optional@_N@std@@@2@V72@V72@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@3333333$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@4$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@55@Z @ 0x180230FDC (--$process@V-$nvp@AEAH@tson@@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@Application.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x180464144 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

__int64 __fastcall _tip_SettingsStoreAppInstallerTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  const char *v4; // [rsp+90h] [rbp-80h] BYREF
  char v5; // [rsp+98h] [rbp-78h]
  __int64 v6; // [rsp+A0h] [rbp-70h]
  __int64 v7; // [rsp+A8h] [rbp-68h]
  char v8; // [rsp+B0h] [rbp-60h]
  __int64 v9; // [rsp+B8h] [rbp-58h]
  __int64 v10; // [rsp+C0h] [rbp-50h]
  char v11; // [rsp+C8h] [rbp-48h]
  __int64 v12; // [rsp+D0h] [rbp-40h]
  __int64 v13; // [rsp+D8h] [rbp-38h]
  char v14; // [rsp+E0h] [rbp-30h]
  __int64 v15; // [rsp+E8h] [rbp-28h]
  __int64 v16; // [rsp+F0h] [rbp-20h] BYREF
  char v17; // [rsp+F8h] [rbp-18h]
  __int64 v18; // [rsp+100h] [rbp-10h]
  __int64 v19; // [rsp+108h] [rbp-8h] BYREF
  char v20; // [rsp+110h] [rbp+0h]
  __int64 v21; // [rsp+118h] [rbp+8h]
  __int64 v22; // [rsp+120h] [rbp+10h] BYREF
  char v23; // [rsp+128h] [rbp+18h]
  __int64 v24; // [rsp+130h] [rbp+20h]
  __int64 v25; // [rsp+138h] [rbp+28h] BYREF
  char v26; // [rsp+140h] [rbp+30h]
  __int64 v27; // [rsp+148h] [rbp+38h]
  __int64 v28; // [rsp+150h] [rbp+40h] BYREF
  char v29; // [rsp+158h] [rbp+48h]
  __int64 v30; // [rsp+160h] [rbp+50h]
  __int64 v31; // [rsp+168h] [rbp+58h] BYREF
  char v32; // [rsp+170h] [rbp+60h]
  __int64 v33; // [rsp+178h] [rbp+68h]
  __int64 v34; // [rsp+180h] [rbp+70h] BYREF
  char v35; // [rsp+188h] [rbp+78h]
  __int64 v36; // [rsp+190h] [rbp+80h]
  __int64 v37; // [rsp+198h] [rbp+88h] BYREF
  char v38; // [rsp+1A0h] [rbp+90h]
  __int64 v39; // [rsp+1A8h] [rbp+98h]
  __int64 v40; // [rsp+1B0h] [rbp+A0h] BYREF
  char v41; // [rsp+1B8h] [rbp+A8h]
  __int64 v42; // [rsp+1C0h] [rbp+B0h]
  __int64 v43; // [rsp+1C8h] [rbp+B8h] BYREF
  char v44; // [rsp+1D0h] [rbp+C0h]
  __int64 v45; // [rsp+1D8h] [rbp+C8h]
  const char *v46; // [rsp+1E0h] [rbp+D0h] BYREF
  char v47; // [rsp+1E8h] [rbp+D8h]
  __int64 v48; // [rsp+1F0h] [rbp+E0h]
  const char *v49; // [rsp+1F8h] [rbp+E8h] BYREF
  char v50; // [rsp+200h] [rbp+F0h]
  __int64 v51; // [rsp+208h] [rbp+F8h]
  const char *v52; // [rsp+210h] [rbp+100h] BYREF
  char v53; // [rsp+218h] [rbp+108h]
  __int64 v54; // [rsp+220h] [rbp+110h]

  v8 = 35;
  v7 = (__int64)"isNetworkAvailableAndNotConstrained";
  v11 = 21;
  v9 = a1 + 132;
  v10 = (__int64)"isPowerSupplyAdequate";
  v12 = a1 + 130;
  v13 = (__int64)"isInstallerAllowedToInstallProduct";
  v15 = a1 + 128;
  v16 = (__int64)"packageFamilyName";
  v18 = a1 + 96;
  v19 = (__int64)"productId";
  v21 = a1 + 64;
  v22 = (__int64)"minimumVersion.Revision";
  v24 = a1 + 58;
  v25 = (__int64)"minimumVersion.Build";
  v27 = a1 + 56;
  v28 = (__int64)"minimumVersion.Minor";
  v30 = a1 + 54;
  v31 = (__int64)"minimumVersion.Major";
  v33 = a1 + 52;
  v34 = (__int64)"installedVersion.Revision";
  v36 = a1 + 50;
  v37 = (__int64)"installedVersion.Build";
  v39 = a1 + 48;
  v40 = (__int64)"installedVersion.Minor";
  v42 = a1 + 46;
  v43 = (__int64)"installedVersion.Major";
  v45 = a1 + 44;
  v46 = "installState";
  v48 = a1 + 40;
  v49 = "installType";
  v51 = a1 + 36;
  v52 = "installError.value";
  v54 = a1 + 32;
  v14 = 34;
  v17 = 17;
  v20 = 9;
  v23 = 23;
  v26 = 20;
  v29 = 20;
  v32 = 20;
  v35 = 25;
  v38 = 22;
  v41 = 22;
  v44 = 22;
  v47 = 12;
  v50 = 11;
  v53 = 18;
  v5 = 15;
  v4 = "bytesDownloaded";
  v6 = a1 + 24;
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, &v4);
  return tson::output_archive::process<tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
           a2,
           (__int64)&v52,
           (__int64)&v49,
           (__int64)&v46,
           (__int64)&v43,
           (__int64)&v40,
           (__int64)&v37,
           (__int64)&v34,
           (__int64)&v31,
           (__int64)&v28,
           (__int64)&v25,
           (__int64)&v22,
           (__int64)&v19,
           (__int64)&v16);
}
