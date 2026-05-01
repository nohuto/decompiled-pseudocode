/*
 * XREFs of ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1802246C4
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1802248F0 (--$serialize@Vinput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 *     ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x18023058C (--$load_nothrow@HV-$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@HV-$allocator@H@.c)
 *     ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V52@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180230DB4 (--$process@V-$nvp@AEAH@tson@@V12@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@Applic.c)
 *     ??$process@V?$nvp@AEA_K@tson@@V?$nvp@AEAH@2@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V62@V62@V62@V62@V62@V62@V62@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V72@V?$nvp@AEAV?$optional@_N@std@@@2@V82@V82@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@4444444$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@5$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@66@Z @ 0x1802315FC (--$process@V-$nvp@AEA_K@tson@@V-$nvp@AEAH@2@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@St.c)
 *     ??$process@V?$nvp@AEAH@tson@@V?$nvp@AEA_N@2@V?$nvp@AEAW4keyPressType@@@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4keyPressType@@@1@1@Z @ 0x18025E660 (--$process@V-$nvp@AEAH@tson@@V-$nvp@AEA_N@2@V-$nvp@AEAW4keyPressType@@@2@V32@@input_archive@tson.c)
 *     ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x180289604 (--$-RV-$nvp@AEA_N@tson@@V-$nvp@AEAH@1@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@$$QEAV.c)
 *     ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@Z @ 0x180289C7C (--$process@V-$nvp@AEAH@tson@@V12@V-$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@2@@input_ar.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

tson::read_buffer **__fastcall tson::input_archive::operator()<int &>(tson::read_buffer **a1, _DWORD *a2)
{
  __int64 v4; // rdx

  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    LOBYTE(v4) = 15;
    tson::input_archive::consume_expected_marker(a1, v4, 2147944029LL);
    tson::read_buffer::consume_n(*a1, a2, 4uLL);
  }
  else
  {
    *a2 = 0;
  }
  return a1;
}
