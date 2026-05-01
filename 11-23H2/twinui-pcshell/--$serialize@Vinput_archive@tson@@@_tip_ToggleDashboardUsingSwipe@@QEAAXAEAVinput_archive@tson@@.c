/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardUsingSwipe@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18023235C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180249AD0 (-deserialize@-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXAEAVinput_arc.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802318D0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall _tip_ToggleDashboardUsingSwipe::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  const char *v4; // [rsp+30h] [rbp-D0h] BYREF
  char v5; // [rsp+38h] [rbp-C8h]
  __int64 v6; // [rsp+40h] [rbp-C0h]
  const char *v7; // [rsp+48h] [rbp-B8h] BYREF
  char v8; // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+58h] [rbp-A8h]
  const char *v10; // [rsp+60h] [rbp-A0h] BYREF
  char v11; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  const char *v13; // [rsp+78h] [rbp-88h] BYREF
  char v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  const char *v16; // [rsp+90h] [rbp-70h] BYREF
  char v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  const char *v19; // [rsp+A8h] [rbp-58h] BYREF
  char v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  const char *v22; // [rsp+C0h] [rbp-40h] BYREF
  char v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  const char *v25; // [rsp+D8h] [rbp-28h] BYREF
  char v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  const char *v28; // [rsp+F0h] [rbp-10h] BYREF
  char v29; // [rsp+F8h] [rbp-8h]
  __int64 v30; // [rsp+100h] [rbp+0h]
  const char *v31; // [rsp+108h] [rbp+8h] BYREF
  char v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  __int64 v34; // [rsp+120h] [rbp+20h] BYREF
  char v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]

  v26 = 15;
  v25 = "packageFullName";
  v29 = 9;
  v27 = a1 + 32;
  v32 = 9;
  v28 = "continued";
  v30 = a1 + 25;
  v31 = "committed";
  v33 = a1 + 24;
  v34 = (__int64)"cancelSwipeFailed";
  v36 = a1 + 23;
  v22 = "commitSwipeFailed";
  v24 = a1 + 22;
  v19 = "continueSwipeFailed";
  v21 = a1 + 21;
  v16 = "startSwipeFailed";
  v18 = a1 + 20;
  v13 = "isSwipeExtensionNull";
  v15 = a1 + 19;
  v10 = "isHidden";
  v12 = a1 + 18;
  v7 = "isVisible";
  v9 = a1 + 17;
  v4 = "canceled";
  v6 = a1 + 16;
  v35 = 17;
  v23 = 17;
  v20 = 19;
  v17 = 16;
  v14 = 20;
  v11 = 8;
  v8 = 9;
  v5 = 8;
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v4);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v7);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v10);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v13);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v16);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v19);
  tson::input_archive::process<tson::nvp<bool &>>(a2, &v22);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v34,
           (__int64)&v31,
           (__int64)&v28,
           (__int64)&v25);
}
