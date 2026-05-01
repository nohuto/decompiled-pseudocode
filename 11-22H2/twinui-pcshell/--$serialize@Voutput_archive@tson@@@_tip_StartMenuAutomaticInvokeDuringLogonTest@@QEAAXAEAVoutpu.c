/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1801FDBC8
 * Callers:
 *     ?serialize@?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180201890 (-serialize@-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@EEAAXA.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEA_J@1@000000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1801FD3D4 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEA_J@2@V12@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@V12@@outp.c)
 */

void __fastcall _tip_StartMenuAutomaticInvokeDuringLogonTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  const char *v2; // [rsp+60h] [rbp-A0h] BYREF
  char v3; // [rsp+68h] [rbp-98h]
  __int64 v4; // [rsp+70h] [rbp-90h]
  const char *v5; // [rsp+78h] [rbp-88h] BYREF
  char v6; // [rsp+80h] [rbp-80h]
  __int64 v7; // [rsp+88h] [rbp-78h]
  const char *v8; // [rsp+90h] [rbp-70h] BYREF
  char v9; // [rsp+98h] [rbp-68h]
  __int64 v10; // [rsp+A0h] [rbp-60h]
  __int64 v11; // [rsp+A8h] [rbp-58h] BYREF
  char v12; // [rsp+B0h] [rbp-50h]
  __int64 v13; // [rsp+B8h] [rbp-48h]
  __int64 v14; // [rsp+C0h] [rbp-40h] BYREF
  char v15; // [rsp+C8h] [rbp-38h]
  __int64 v16; // [rsp+D0h] [rbp-30h]
  __int64 v17; // [rsp+D8h] [rbp-28h] BYREF
  char v18; // [rsp+E0h] [rbp-20h]
  __int64 v19; // [rsp+E8h] [rbp-18h]
  __int64 v20; // [rsp+F0h] [rbp-10h] BYREF
  char v21; // [rsp+F8h] [rbp-8h]
  __int64 v22; // [rsp+100h] [rbp+0h]
  __int64 v23; // [rsp+108h] [rbp+8h] BYREF
  char v24; // [rsp+110h] [rbp+10h]
  __int64 v25; // [rsp+118h] [rbp+18h]
  __int64 v26; // [rsp+120h] [rbp+20h] BYREF
  char v27; // [rsp+128h] [rbp+28h]
  __int64 v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h] BYREF
  char v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  __int64 v32; // [rsp+150h] [rbp+50h] BYREF
  char v33; // [rsp+158h] [rbp+58h]
  __int64 v34; // [rsp+160h] [rbp+60h]

  v3 = 22;
  v2 = "immersiveShellTeardown";
  v6 = 21;
  v4 = a1 + 44;
  v9 = 15;
  v5 = "startActivationResult";
  v12 = 24;
  v7 = a1 + 40;
  v15 = 24;
  v8 = "searchIsMissing";
  v10 = a1 + 37;
  v11 = (__int64)"startCrashedDuringInvoke";
  v13 = a1 + 36;
  v14 = (__int64)"timedOutAfterFiveSeconds";
  v16 = a1 + 35;
  v17 = (__int64)"foregroundLostInvokeAbort";
  v19 = a1 + 34;
  v20 = (__int64)"foregroundCouldNotBeClaimed";
  v22 = a1 + 33;
  v23 = (__int64)"canceledForegroundLost";
  v25 = a1 + 32;
  v26 = (__int64)"millisecondsSpentOpen";
  v28 = a1 + 24;
  v29 = (__int64)"logonCompletedBeforeImmersiveShellInit";
  v31 = a1 + 17;
  v32 = (__int64)"explorerBlackScreenLogon";
  v34 = a1 + 16;
  v18 = 25;
  v21 = 27;
  v24 = 22;
  v27 = 21;
  v30 = 38;
  v33 = 24;
  tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<__int64 &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
    a2,
    (__int64)&v32,
    (__int64)&v29,
    (__int64)&v26,
    &v23,
    &v20,
    (__int64)&v17,
    (__int64)&v14,
    &v11,
    (__int64 *)&v8,
    (__int64)&v5,
    (__int64 *)&v2);
}
