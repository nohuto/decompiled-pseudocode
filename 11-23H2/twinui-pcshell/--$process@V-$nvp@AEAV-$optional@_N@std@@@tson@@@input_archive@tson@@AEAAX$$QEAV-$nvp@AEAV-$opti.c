/*
 * XREFs of ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x180231214
 * Callers:
 *     ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@22@Z @ 0x180230BF0 (--$process@V-$nvp@AEAG@tson@@V12@V12@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G.c)
 *     ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180230CD8 (--$process@V-$nvp@AEAG@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     ??$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV?$optional@_N@std@@@Z @ 0x180230730 (--$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV-$optional@_N@std@@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::input_archive::process<tson::nvp<std::optional<bool> &>>(tson::input_archive *this, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::input_archive::startNode(this);
  tson::load_nothrow<bool>(this, v4);
  tson::input_archive::finishNode(this);
}
