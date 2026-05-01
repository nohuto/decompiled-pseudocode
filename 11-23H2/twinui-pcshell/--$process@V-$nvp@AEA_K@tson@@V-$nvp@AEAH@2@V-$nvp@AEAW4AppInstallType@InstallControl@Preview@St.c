/*
 * XREFs of ??$process@V?$nvp@AEA_K@tson@@V?$nvp@AEAH@2@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V62@V62@V62@V62@V62@V62@V62@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V72@V?$nvp@AEAV?$optional@_N@std@@@2@V82@V82@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@4444444$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@5$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@66@Z @ 0x1802315FC
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180231EF0 (--$serialize@Vinput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVinput_archive@ts.c)
 * Callees:
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1802246C4 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V?$nvp@AEAV?$optional@_N@std@@@2@V62@V62@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@3$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@44@Z @ 0x1802314C8 (--$process@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winr.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1804640E0 (--$process@V-$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<unsigned __int64 &>,tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        __int64 *a15)
{
  char v18; // dl

  tson::input_archive::process<tson::nvp<unsigned __int64 &>>();
  v18 = *(_BYTE *)(a3 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a3;
  *((_BYTE *)this + 24) = v18;
  tson::input_archive::operator()<int &>((tson::read_buffer **)this, *(_DWORD **)(a3 + 16));
  return tson::input_archive::process<tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
           this,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15);
}
