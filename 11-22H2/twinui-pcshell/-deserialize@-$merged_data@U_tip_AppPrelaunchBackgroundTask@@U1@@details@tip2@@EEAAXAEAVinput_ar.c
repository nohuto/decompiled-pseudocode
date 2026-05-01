/*
 * XREFs of ?deserialize@?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1802497E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802310F0 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  const char *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  const char *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v7 = 15;
  v6 = "packageFullName";
  v10 = 2;
  v4 = a1 + 272;
  if ( !a1 )
    v4 = 24LL;
  v8 = v4;
  v9 = "hr";
  v5 = a1 + 264;
  if ( !a1 )
    v5 = 16LL;
  v11 = v5;
  tson::input_archive::process<tson::nvp<long &>,tson::nvp<std::wstring &>>(
    (tson::input_archive *)a2,
    (__int64)&v9,
    (__int64)&v6);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
