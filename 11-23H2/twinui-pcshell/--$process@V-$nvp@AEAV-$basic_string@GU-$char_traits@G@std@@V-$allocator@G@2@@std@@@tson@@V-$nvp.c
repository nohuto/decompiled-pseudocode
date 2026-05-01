/*
 * XREFs of ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEA_N@2@V32@V?$nvp@AEAJ@2@V12@V42@V12@V12@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@1$$QEAV?$nvp@AEAJ@1@020011@Z @ 0x1801E73F4
 * Callers:
 *     ??$process@V?$nvp@AEAW4InstallTrigger@@@tson@@V?$nvp@AEA_N@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAJ@2@V42@V52@V42@V42@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4InstallTrigger@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAJ@1@232211@Z @ 0x1801E74D8 (--$process@V-$nvp@AEAW4InstallTrigger@@@tson@@V-$nvp@AEA_N@2@V-$nvp@AEAV-$basic_string@GU-$char_.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x180463940 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18046D0A0 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 *a8,
        __int64 *a9)
{
  char v9; // r10
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v9 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v9;
  tson::load_nothrow(this);
  tson::input_archive::process<tson::nvp<bool &>>(this, a3);
  tson::input_archive::process<tson::nvp<bool &>>(this, a4);
  tson::input_archive::process<tson::nvp<long &>>(this, a5);
  v13 = *a6;
  *((_BYTE *)this + 24) = *((_BYTE *)a6 + 8);
  *((_QWORD *)this + 2) = v13;
  tson::load_nothrow(this);
  tson::input_archive::process<tson::nvp<long &>>(this, a7);
  v14 = *a8;
  *((_BYTE *)this + 24) = *((_BYTE *)a8 + 8);
  *((_QWORD *)this + 2) = v14;
  tson::load_nothrow(this);
  v15 = *a9;
  *((_BYTE *)this + 24) = *((_BYTE *)a9 + 8);
  *((_QWORD *)this + 2) = v15;
  tson::load_nothrow(this);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(this);
}
