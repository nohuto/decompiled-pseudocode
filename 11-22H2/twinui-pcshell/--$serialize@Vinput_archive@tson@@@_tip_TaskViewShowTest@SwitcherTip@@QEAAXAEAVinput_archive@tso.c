/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_TaskViewShowTest@SwitcherTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180289DCC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18028ADB0 (-deserialize@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput.c)
 * Callees:
 *     ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@Z @ 0x180289C7C (--$process@V-$nvp@AEAH@tson@@V12@V-$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@2@@input_ar.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

bool __fastcall SwitcherTip::_tip_TaskViewShowTest::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  const char *v4; // [rsp+20h] [rbp-60h] BYREF
  char v5; // [rsp+28h] [rbp-58h]
  __int64 v6; // [rsp+30h] [rbp-50h]
  const char *v7; // [rsp+38h] [rbp-48h] BYREF
  char v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  const char *v10; // [rsp+50h] [rbp-30h] BYREF
  char v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  const char *v13; // [rsp+68h] [rbp-18h] BYREF
  char v14; // [rsp+70h] [rbp-10h]
  __int64 v15; // [rsp+78h] [rbp-8h]

  v8 = 12;
  v11 = 12;
  v7 = "invokeMethod";
  v14 = 15;
  v9 = a1 + 28;
  v10 = "monitorCount";
  v12 = a1 + 24;
  v13 = "switchItemCount";
  v15 = a1 + 20;
  v4 = "shown";
  v6 = a1 + 16;
  v5 = 5;
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v4);
  return tson::input_archive::process<tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum SwitcherTip::MultiTaskingViewInputType &>>(
           a2,
           (__int64)&v13,
           (__int64)&v10,
           (__int64 *)&v7);
}
