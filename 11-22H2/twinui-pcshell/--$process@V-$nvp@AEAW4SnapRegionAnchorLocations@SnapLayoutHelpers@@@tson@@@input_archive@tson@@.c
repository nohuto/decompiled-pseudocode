/*
 * XREFs of ??$process@V?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@1@@Z @ 0x180223790
 * Callers:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V?$nvp@AEAW4SearchAppState@@@1@V21@V21@V21@V01@V01@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00000000$$QEAV?$nvp@AEAW4SearchAppState@@@1@11100$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E5CBC (--$-RV-$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V-$nvp@AEAW4SearchAppState@@@1@V21@V21@V.c)
 *     ??$process@AEAU_tip_TabTearOutEventTest@@@input_archive@tson@@AEAAXAEAU_tip_TabTearOutEventTest@@@Z @ 0x1802236E8 (--$process@AEAU_tip_TabTearOutEventTest@@@input_archive@tson@@AEAAXAEAU_tip_TabTearOutEventTest@.c)
 *     ??$process@AEAU_tip_SmartFillTest@@@input_archive@tson@@AEAAXAEAU_tip_SmartFillTest@@@Z @ 0x180224848 (--$process@AEAU_tip_SmartFillTest@@@input_archive@tson@@AEAAXAEAU_tip_SmartFillTest@@@Z.c)
 *     ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V52@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180230DB4 (--$process@V-$nvp@AEAH@tson@@V12@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@Applic.c)
 *     ??$process@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V?$nvp@AEAV?$optional@_N@std@@@2@V62@V62@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@3$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@44@Z @ 0x1802314C8 (--$process@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winr.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(
        __int64 a1,
        __int64 a2)
{
  char v2; // r8
  int v3; // ebx
  _DWORD *v5; // rsi
  bool result; // al
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a2 + 8);
  v3 = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v5 = *(_DWORD **)(a2 + 16);
  v8 = 0;
  result = tson::input_archive::search((tson::input_archive *)a1);
  if ( result )
  {
    LOBYTE(v7) = 18;
    tson::input_archive::consume_expected_marker(a1, v7, 2147944029LL);
    result = tson::read_buffer::consume_n(*(tson::read_buffer **)a1, &v8, 4uLL);
    v3 = v8;
  }
  *v5 = v3;
  return result;
}
