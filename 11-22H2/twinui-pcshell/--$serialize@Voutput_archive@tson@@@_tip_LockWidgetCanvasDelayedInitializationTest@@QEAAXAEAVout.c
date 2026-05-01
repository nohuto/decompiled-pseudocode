/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232A04
 * Callers:
 *     ?serialize@?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024BA70 (-serialize@-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EEAA.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000@Z @ 0x180480318 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp.c)
 */

__int64 __fastcall _tip_LockWidgetCanvasDelayedInitializationTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  char v4; // dl
  __int64 v6; // [rsp+50h] [rbp-B0h] BYREF
  char v7; // [rsp+58h] [rbp-A8h]
  __int64 v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h] BYREF
  char v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  __int64 v12; // [rsp+80h] [rbp-80h] BYREF
  char v13; // [rsp+88h] [rbp-78h]
  __int64 v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h] BYREF
  char v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  __int64 v18; // [rsp+B0h] [rbp-50h] BYREF
  char v19; // [rsp+B8h] [rbp-48h]
  __int64 v20; // [rsp+C0h] [rbp-40h]
  const char *v21; // [rsp+C8h] [rbp-38h]
  char v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  const char *v24; // [rsp+E0h] [rbp-20h]
  char v25; // [rsp+E8h] [rbp-18h]
  __int64 v26; // [rsp+F0h] [rbp-10h]
  const char *v27; // [rsp+F8h] [rbp-8h]
  char v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]

  *((_BYTE *)a2 + 8) = 10;
  v6 = (__int64)"wasSEAPreviouslyInstalled";
  v7 = 25;
  v8 = a1 + 25;
  v10 = 14;
  v9 = (__int64)"isSEAInstalled";
  v11 = a1 + 24;
  v12 = (__int64)"isWPRInstalled";
  v14 = a1 + 23;
  v15 = (__int64)"isWEPInstalled";
  v17 = a1 + 22;
  v18 = (__int64)"attemptInstallSEA";
  v20 = a1 + 21;
  v21 = "attemptInstallWPRInbox";
  v23 = a1 + 20;
  v24 = "attemptInstallWPR";
  v26 = a1 + 19;
  v27 = "attemptInstallWEP";
  v29 = a1 + 18;
  *(_QWORD *)a2 = "keyCreated";
  v4 = *(_BYTE *)(a1 + 16);
  v13 = 14;
  v16 = 14;
  v19 = 17;
  v22 = 22;
  v25 = 17;
  v28 = 17;
  tson::output_archive::saveValue(a2, v4);
  *((_BYTE *)a2 + 8) = 18;
  *(_QWORD *)a2 = "keyCapabilityAdded";
  tson::output_archive::saveValue(a2, *(_BYTE *)(a1 + 17));
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6);
}
