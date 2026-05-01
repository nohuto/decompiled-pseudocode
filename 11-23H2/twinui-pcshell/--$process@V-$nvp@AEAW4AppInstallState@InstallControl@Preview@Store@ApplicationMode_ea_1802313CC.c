/*
 * XREFs of ??$process@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAG@2@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V42@V?$nvp@AEAV?$optional@_N@std@@@2@V52@V52@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@1111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@2$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@33@Z @ 0x1802313CC
 * Callers:
 *     ??$process@V?$nvp@AEAH@tson@@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V52@V52@V52@V52@V52@V52@V52@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V62@V?$nvp@AEAV?$optional@_N@std@@@2@V72@V72@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@3333333$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@4$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@55@Z @ 0x180230FDC (--$process@V-$nvp@AEAH@tson@@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@Application.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x18023125C (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opt.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x18028BD34 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1804633A8 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
        tson::output_archive *this,
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
        __int64 a14,
        __int64 a15)
{
  char v16; // r10

  v16 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v16;
  tson::output_archive::saveValue(this, **(_DWORD **)(a2 + 16));
  tson::output_archive::process<tson::nvp<unsigned short &>>(this, a3);
  tson::output_archive::process<tson::nvp<unsigned short &>>(this, a4);
  tson::output_archive::process<tson::nvp<unsigned short &>>(this, a5);
  tson::output_archive::process<tson::nvp<unsigned short &>>(this, a6);
  tson::output_archive::process<tson::nvp<unsigned short &>>(this, a7);
  tson::output_archive::process<tson::nvp<unsigned short &>>(this, a8);
  tson::output_archive::process<tson::nvp<unsigned short &>>(this, a9);
  tson::output_archive::process<tson::nvp<unsigned short &>>(this, a10);
  tson::output_archive::process<tson::nvp<std::wstring &>>(this);
  tson::output_archive::process<tson::nvp<std::wstring &>>(this);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this, a13);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this, a14);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this, a15);
}
