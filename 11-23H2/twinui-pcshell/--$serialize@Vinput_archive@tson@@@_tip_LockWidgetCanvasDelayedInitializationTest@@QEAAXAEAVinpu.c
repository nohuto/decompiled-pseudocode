/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180231D7C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180249950 (-deserialize@-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EE.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000@Z @ 0x180480244 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@.c)
 */

__int64 __fastcall _tip_LockWidgetCanvasDelayedInitializationTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  const char *v4; // [rsp+50h] [rbp-B0h] BYREF
  char v5; // [rsp+58h] [rbp-A8h]
  __int64 v6; // [rsp+60h] [rbp-A0h]
  const char *v7; // [rsp+68h] [rbp-98h] BYREF
  char v8; // [rsp+70h] [rbp-90h]
  __int64 v9; // [rsp+78h] [rbp-88h]
  __int64 v10; // [rsp+80h] [rbp-80h] BYREF
  char v11; // [rsp+88h] [rbp-78h]
  __int64 v12; // [rsp+90h] [rbp-70h]
  __int64 v13; // [rsp+98h] [rbp-68h] BYREF
  char v14; // [rsp+A0h] [rbp-60h]
  __int64 v15; // [rsp+A8h] [rbp-58h]
  __int64 v16; // [rsp+B0h] [rbp-50h] BYREF
  char v17; // [rsp+B8h] [rbp-48h]
  __int64 v18; // [rsp+C0h] [rbp-40h]
  __int64 v19; // [rsp+C8h] [rbp-38h] BYREF
  char v20; // [rsp+D0h] [rbp-30h]
  __int64 v21; // [rsp+D8h] [rbp-28h]
  __int64 v22; // [rsp+E0h] [rbp-20h] BYREF
  char v23; // [rsp+E8h] [rbp-18h]
  __int64 v24; // [rsp+F0h] [rbp-10h]
  const char *v25; // [rsp+F8h] [rbp-8h]
  char v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]
  const char *v28; // [rsp+110h] [rbp+10h]
  char v29; // [rsp+118h] [rbp+18h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  const char *v31; // [rsp+128h] [rbp+28h]
  char v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]

  v11 = 25;
  v10 = (__int64)"wasSEAPreviouslyInstalled";
  v14 = 14;
  v12 = a1 + 25;
  v17 = 14;
  v13 = (__int64)"isSEAInstalled";
  v15 = a1 + 24;
  v16 = (__int64)"isWPRInstalled";
  v18 = a1 + 23;
  v19 = (__int64)"isWEPInstalled";
  v21 = a1 + 22;
  v22 = (__int64)"attemptInstallSEA";
  v24 = a1 + 21;
  v25 = "attemptInstallWPRInbox";
  v27 = a1 + 20;
  v28 = "attemptInstallWPR";
  v30 = a1 + 19;
  v31 = "attemptInstallWEP";
  v33 = a1 + 18;
  v7 = "keyCapabilityAdded";
  v9 = a1 + 17;
  v4 = "keyCreated";
  v6 = a1 + 16;
  v20 = 14;
  v23 = 17;
  v26 = 22;
  v29 = 17;
  v32 = 17;
  v8 = 18;
  v5 = 10;
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v4);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v7);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v22,
           (__int64)&v19,
           (__int64)&v16,
           (__int64)&v13,
           (__int64)&v10);
}
