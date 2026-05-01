/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180231974
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180249780 (-deserialize@-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x18023058C (--$load_nothrow@HV-$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@HV-$allocator@H@.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x180463940 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1804640E0 (--$process@V-$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x18046CAC4 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

__int64 __fastcall _tip_AppPrelaunch::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v5; // [rsp+20h] [rbp-60h] BYREF
  char v6; // [rsp+28h] [rbp-58h]
  __int64 v7; // [rsp+30h] [rbp-50h]
  const char *v8; // [rsp+38h] [rbp-48h] BYREF
  char v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  const char *v11; // [rsp+50h] [rbp-30h] BYREF
  char v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  const char *v14; // [rsp+68h] [rbp-18h] BYREF
  char v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]

  v15 = 12;
  v12 = 12;
  v14 = "desktopDelay";
  v9 = 33;
  v16 = a1 + 32;
  v6 = 15;
  v11 = "startUpDelay";
  v13 = a1 + 24;
  v8 = "readShouldPrelaunchRegistryResult";
  v10 = a1 + 20;
  v5 = "shouldPrelaunch";
  v7 = a1 + 16;
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v5);
  tson::input_archive::process<tson::nvp<long &>>(a2, &v8);
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>(a2, &v11);
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>(a2, &v14);
  *(_BYTE *)(a2 + 24) = 16;
  *(_QWORD *)(a2 + 16) = "extensionVersion";
  tson::input_archive::startNode((tson::input_archive *)a2);
  tson::load_nothrow<int,std::allocator<int>>(a2, a1 + 40);
  tson::input_archive::finishNode((tson::input_archive *)a2);
  *(_BYTE *)(a2 + 24) = 15;
  *(_QWORD *)(a2 + 16) = "packageFullName";
  return tson::load_nothrow((tson::input_archive *)a2);
}
