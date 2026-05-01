/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180232508
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180249B30 (-deserialize@-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@EEAAXAEAVinput_archive@.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x180463940 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAK@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAK@1@@Z @ 0x180463BA8 (--$process@V-$nvp@AEAK@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAK@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1804640E0 (--$process@V-$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18046D0A0 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 */

__int64 __fastcall _tip_WidgetsAppInstallTIP::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-29h] BYREF
  char v5; // [rsp+28h] [rbp-21h]
  __int64 v6; // [rsp+30h] [rbp-19h]
  const char *v7; // [rsp+38h] [rbp-11h] BYREF
  char v8; // [rsp+40h] [rbp-9h]
  __int64 v9; // [rsp+48h] [rbp-1h]
  const char *v10; // [rsp+50h] [rbp+7h] BYREF
  char v11; // [rsp+58h] [rbp+Fh]
  __int64 v12; // [rsp+60h] [rbp+17h]
  const char *v13; // [rsp+68h] [rbp+1Fh] BYREF
  char v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  const char *v16; // [rsp+80h] [rbp+37h] BYREF
  char v17; // [rsp+88h] [rbp+3Fh]
  __int64 v18; // [rsp+90h] [rbp+47h]

  v17 = 21;
  v14 = 23;
  v16 = "packageInstallStarted";
  v11 = 6;
  v18 = a1 + 97;
  v8 = 12;
  v13 = "packageInstallRestarted";
  v15 = a1 + 96;
  v10 = "result";
  v12 = a1 + 92;
  v7 = "installState";
  v9 = a1 + 88;
  v4 = "installDurationInMilliseconds";
  v6 = a1 + 80;
  v5 = 29;
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>(a2, &v4);
  tson::input_archive::process<tson::nvp<unsigned long &>>(a2, &v7);
  tson::input_archive::process<tson::nvp<long &>>(a2, &v10);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v13);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v16);
  *(_BYTE *)(a2 + 24) = 20;
  *(_QWORD *)(a2 + 16) = "initialVersionString";
  tson::load_nothrow((tson::input_archive *)a2);
  *(_BYTE *)(a2 + 24) = 18;
  *(_QWORD *)(a2 + 16) = "finalVersionString";
  return tson::load_nothrow((tson::input_archive *)a2);
}
