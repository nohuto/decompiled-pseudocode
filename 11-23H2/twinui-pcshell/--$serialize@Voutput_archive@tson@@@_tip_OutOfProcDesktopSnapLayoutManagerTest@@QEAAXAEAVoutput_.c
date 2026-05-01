/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180229EB4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18022B660 (-serialize@-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXAEA.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0@Z @ 0x1801A96E0 (--$process@V-$nvp@AEA_N@tson@@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@0@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x18028BD34 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1804639A4 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

void __fastcall _tip_OutOfProcDesktopSnapLayoutManagerTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  const char *v3; // [rsp+38h] [rbp-41h] BYREF
  char v4; // [rsp+40h] [rbp-39h]
  __int64 v5; // [rsp+48h] [rbp-31h]
  const char *v6; // [rsp+50h] [rbp-29h] BYREF
  char v7; // [rsp+58h] [rbp-21h]
  __int64 v8; // [rsp+60h] [rbp-19h]
  const char *v9; // [rsp+68h] [rbp-11h] BYREF
  char v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  const char *v12; // [rsp+80h] [rbp+7h] BYREF
  char v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  const char *v15; // [rsp+98h] [rbp+1Fh] BYREF
  char v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  const char *v18; // [rsp+B0h] [rbp+37h] BYREF
  char v19; // [rsp+B8h] [rbp+3Fh]
  __int64 v20; // [rsp+C0h] [rbp+47h]

  v16 = 19;
  v15 = "gotExtensionStatics";
  v19 = 18;
  v17 = a1 + 49;
  v13 = 14;
  v18 = "gotServiceProvider";
  v20 = a1 + 48;
  v12 = "workArea.right";
  v14 = a1 + 60;
  v9 = "workArea.left";
  v11 = a1 + 52;
  v6 = "workArea.bottom";
  v8 = a1 + 64;
  v3 = "workArea.top";
  v5 = a1 + 56;
  v10 = 13;
  v7 = 15;
  v4 = 12;
  tson::output_archive::process<tson::nvp<std::wstring &>>(a2);
  tson::output_archive::process<tson::nvp<long &>>(a2, &v3);
  tson::output_archive::process<tson::nvp<long &>>(a2, &v6);
  tson::output_archive::process<tson::nvp<long &>>(a2, &v9);
  tson::output_archive::process<tson::nvp<long &>>(a2, &v12);
  tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>>(a2, (__int64)&v18, (__int64)&v15);
}
