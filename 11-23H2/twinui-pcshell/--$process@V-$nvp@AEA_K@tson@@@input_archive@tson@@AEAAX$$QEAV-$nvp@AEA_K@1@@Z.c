/*
 * XREFs of ??$process@V?$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1804640E0
 * Callers:
 *     ??$process@V?$nvp@AEA_K@tson@@V?$nvp@AEAH@2@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V62@V62@V62@V62@V62@V62@V62@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V72@V?$nvp@AEAV?$optional@_N@std@@@2@V82@V82@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@4444444$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@5$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@66@Z @ 0x1802315FC (--$process@V-$nvp@AEA_K@tson@@V-$nvp@AEAH@2@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@St.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180231974 (--$serialize@Vinput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVinput_archive@tson@@@Z.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180232508 (--$serialize@Vinput_archive@tson@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<unsigned __int64 &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  bool result; // al

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v4 = *(_QWORD **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    LOBYTE(v5) = 20;
    tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
    return tson::read_buffer::consume_n(*(tson::read_buffer **)a1, v4, 8uLL);
  }
  else
  {
    result = 0;
    *v4 = 0LL;
  }
  return result;
}
