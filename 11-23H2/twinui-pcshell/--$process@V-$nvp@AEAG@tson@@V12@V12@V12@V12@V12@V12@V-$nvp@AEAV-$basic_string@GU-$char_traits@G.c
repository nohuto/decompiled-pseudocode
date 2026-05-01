/*
 * XREFs of ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@22@Z @ 0x180230BF0
 * Callers:
 *     ??$process@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V?$nvp@AEAV?$optional@_N@std@@@2@V62@V62@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@3$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@44@Z @ 0x1802314C8 (--$process@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winr.c)
 * Callees:
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x180231214 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opti.c)
 *     ??$process@V?$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x180463344 (--$process@V-$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18046D0A0 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10)
{
  __int64 v13; // rax
  __int64 v14; // rax

  ((void (*)(void))tson::input_archive::process<tson::nvp<unsigned short &>>)();
  tson::input_archive::process<tson::nvp<unsigned short &>>(this, a3);
  tson::input_archive::process<tson::nvp<unsigned short &>>(this, a4);
  tson::input_archive::process<tson::nvp<unsigned short &>>(this, a5);
  tson::input_archive::process<tson::nvp<unsigned short &>>(this, a6);
  tson::input_archive::process<tson::nvp<unsigned short &>>(this, a7);
  tson::input_archive::process<tson::nvp<unsigned short &>>(this, a8);
  v13 = *a9;
  *((_BYTE *)this + 24) = *((_BYTE *)a9 + 8);
  *((_QWORD *)this + 2) = v13;
  tson::load_nothrow(this);
  v14 = *a10;
  *((_BYTE *)this + 24) = *((_BYTE *)a10 + 8);
  *((_QWORD *)this + 2) = v14;
  tson::load_nothrow(this);
  tson::input_archive::process<tson::nvp<std::optional<bool> &>>(this);
  tson::input_archive::process<tson::nvp<std::optional<bool> &>>(this);
  return tson::input_archive::process<tson::nvp<std::optional<bool> &>>(this);
}
