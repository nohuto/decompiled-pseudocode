/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_AppPrelaunchBackgroundTask@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_AppPrelaunchBackgroundTask@@@1@@Z @ 0x18022EF64
 * Callers:
 *     ?serialize@?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024B870 (-serialize@-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXAEAVoutput_arc.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231130 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$al_ea_180231130.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<_tip_AppPrelaunchBackgroundTask &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  tson::output_archive::startNode(this);
  tson::output_archive::process<tson::nvp<long &>,tson::nvp<std::wstring &>>(this);
  tson::output_archive::finishNode(this);
  return this;
}
