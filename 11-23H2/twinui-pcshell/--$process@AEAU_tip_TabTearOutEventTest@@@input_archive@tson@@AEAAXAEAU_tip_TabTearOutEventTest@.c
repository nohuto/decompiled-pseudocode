/*
 * XREFs of ??$process@AEAU_tip_TabTearOutEventTest@@@input_archive@tson@@AEAAXAEAU_tip_TabTearOutEventTest@@@Z @ 0x1802236E8
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1802240A0 (-deserialize@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@1@@Z @ 0x180223790 (--$process@V-$nvp@AEAW4SnapRegionAnchorLocations@SnapLayoutHelpers@@@tson@@@input_archive@tson@@.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::input_archive::process<_tip_TabTearOutEventTest &>(tson::input_archive *this, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-50h] BYREF
  char v5; // [rsp+28h] [rbp-48h]
  __int64 v6; // [rsp+30h] [rbp-40h]
  const char *v7; // [rsp+38h] [rbp-38h] BYREF
  char v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  const char *v10; // [rsp+50h] [rbp-20h] BYREF
  char v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  tson::input_archive::startNode(this);
  v11 = 19;
  v10 = "snapAssistCancelled";
  v8 = 13;
  v12 = a2 + 16;
  v5 = 15;
  v7 = "endSnapRegion";
  v9 = a2 + 24;
  v4 = "startSnapRegion";
  v6 = a2 + 20;
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(this, &v4);
  tson::input_archive::process<tson::nvp<enum SnapLayoutHelpers::SnapRegionAnchorLocations &>>(this, &v7);
  tson::input_archive::process<tson::nvp<bool &>>(this, &v10);
  tson::input_archive::finishNode(this);
}
