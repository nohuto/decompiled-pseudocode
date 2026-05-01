/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232624
 * Callers:
 *     ?serialize@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024B7C0 (-serialize@-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4s.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_K@2@V32@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_K@1@1$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231160 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_K@2@V32@V-$nvp@AEAV-$vector@HV-$allocator@H@std@@@std@@@.c)
 */

__int64 __fastcall _tip_AppPrelaunch::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  char v3; // dl
  const char *v5; // [rsp+48h] [rbp-11h] BYREF
  char v6; // [rsp+50h] [rbp-9h]
  __int64 v7; // [rsp+58h] [rbp-1h]
  const char *v8; // [rsp+60h] [rbp+7h] BYREF
  char v9; // [rsp+68h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh] BYREF
  char v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  __int64 v14; // [rsp+90h] [rbp+37h] BYREF
  char v15; // [rsp+98h] [rbp+3Fh]
  __int64 v16; // [rsp+A0h] [rbp+47h]

  *((_BYTE *)a2 + 8) = 15;
  v5 = "extensionVersion";
  v7 = a1 + 40;
  v8 = "desktopDelay";
  v10 = a1 + 32;
  v11 = (__int64)"startUpDelay";
  v13 = a1 + 24;
  v14 = (__int64)"readShouldPrelaunchRegistryResult";
  v16 = a1 + 20;
  *(_QWORD *)a2 = "shouldPrelaunch";
  v3 = *(_BYTE *)(a1 + 16);
  v6 = 16;
  v9 = 12;
  v12 = 12;
  v15 = 33;
  tson::output_archive::saveValue(a2, v3);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<unsigned __int64 &>,tson::nvp<unsigned __int64 &>,tson::nvp<std::vector<int> &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8,
           (__int64)&v5);
}
