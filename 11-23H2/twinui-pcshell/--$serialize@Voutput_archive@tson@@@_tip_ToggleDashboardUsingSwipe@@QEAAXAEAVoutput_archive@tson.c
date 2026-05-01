/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardUsingSwipe@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18023300C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024BD30 (-serialize@-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231708 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_tra.c)
 */

__int64 __fastcall _tip_ToggleDashboardUsingSwipe::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  char v4; // dl
  __int64 v6; // [rsp+98h] [rbp-68h] BYREF
  char v7; // [rsp+A0h] [rbp-60h]
  __int64 v8; // [rsp+A8h] [rbp-58h]
  __int64 v9; // [rsp+B0h] [rbp-50h] BYREF
  char v10; // [rsp+B8h] [rbp-48h]
  __int64 v11; // [rsp+C0h] [rbp-40h]
  __int64 v12; // [rsp+C8h] [rbp-38h] BYREF
  char v13; // [rsp+D0h] [rbp-30h]
  __int64 v14; // [rsp+D8h] [rbp-28h]
  __int64 v15; // [rsp+E0h] [rbp-20h] BYREF
  char v16; // [rsp+E8h] [rbp-18h]
  __int64 v17; // [rsp+F0h] [rbp-10h]
  __int64 v18; // [rsp+F8h] [rbp-8h] BYREF
  char v19; // [rsp+100h] [rbp+0h]
  __int64 v20; // [rsp+108h] [rbp+8h]
  __int64 v21; // [rsp+110h] [rbp+10h] BYREF
  char v22; // [rsp+118h] [rbp+18h]
  __int64 v23; // [rsp+120h] [rbp+20h]

  *((_BYTE *)a2 + 8) = 8;
  v6 = (__int64)"cancelSwipeFailed";
  v8 = a1 + 23;
  v9 = (__int64)"commitSwipeFailed";
  v11 = a1 + 22;
  v12 = (__int64)"continueSwipeFailed";
  v14 = a1 + 21;
  v15 = (__int64)"startSwipeFailed";
  v17 = a1 + 20;
  v18 = (__int64)"isSwipeExtensionNull";
  v20 = a1 + 19;
  v21 = (__int64)"isHidden";
  v23 = a1 + 18;
  *(_QWORD *)a2 = "canceled";
  v4 = *(_BYTE *)(a1 + 16);
  v7 = 17;
  v10 = 17;
  v13 = 19;
  v16 = 16;
  v19 = 20;
  v22 = 8;
  tson::output_archive::saveValue(a2, v4);
  *((_BYTE *)a2 + 8) = 9;
  *(_QWORD *)a2 = "isVisible";
  tson::output_archive::saveValue(a2, *(_BYTE *)(a1 + 17));
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v21,
           (__int64)&v18,
           &v15,
           &v12,
           &v9,
           (__int64)&v6);
}
