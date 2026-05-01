/*
 * XREFs of ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1804636B8
 * Callers:
 *     ??$process@AEAU_tip_SearchHomeRenderTest@@@input_archive@tson@@AEAAXAEAU_tip_SearchHomeRenderTest@@@Z @ 0x1801E734C (--$process@AEAU_tip_SearchHomeRenderTest@@@input_archive@tson@@AEAAXAEAU_tip_SearchHomeRenderTes.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1801E7B54 (--$serialize@Vinput_archive@tson@@@_tip_SearchSpartanMitigationTest@@QEAAXAEAVinput_archive@tson.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@1110001$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x1801FD0A4 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V-$nvp@AEAI@2@V12@V1.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180223804 (--$serialize@Vinput_archive@tson@@@_tip_GuidedSnapAssistTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1802248F0 (--$serialize@Vinput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 *     ?deserialize@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18022BD70 (-deserialize@-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@EEAAXAEAVinput_a.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@0@Z @ 0x18025FA2C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<unsigned int &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  bool result; // al

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v4 = *(_DWORD **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    LOBYTE(v5) = 16;
    tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
    return tson::read_buffer::consume_n(*(tson::read_buffer **)a1, v4, 4uLL);
  }
  else
  {
    result = 0;
    *v4 = 0;
  }
  return result;
}
