/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SearchHideTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1804657BC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18046BDD0 (-deserialize@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V?$nvp@AEAW4SearchAppState@@@1@V21@V21@V21@V01@V01@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00000000$$QEAV?$nvp@AEAW4SearchAppState@@@1@11100$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E5CBC (--$-RV-$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V-$nvp@AEAW4SearchAppState@@@1@V21@V21@V.c)
 */

tson::input_archive *__fastcall _tip_SearchHideTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+D8h] [rbp-38h] BYREF
  char v4; // [rsp+E0h] [rbp-30h]
  __int64 v5; // [rsp+E8h] [rbp-28h]
  __int64 v6; // [rsp+F0h] [rbp-20h] BYREF
  char v7; // [rsp+F8h] [rbp-18h]
  __int64 v8; // [rsp+100h] [rbp-10h]
  __int64 v9; // [rsp+108h] [rbp-8h] BYREF
  char v10; // [rsp+110h] [rbp+0h]
  __int64 v11; // [rsp+118h] [rbp+8h]
  __int64 v12; // [rsp+120h] [rbp+10h] BYREF
  char v13; // [rsp+128h] [rbp+18h]
  __int64 v14; // [rsp+130h] [rbp+20h]
  __int64 v15; // [rsp+138h] [rbp+28h] BYREF
  char v16; // [rsp+140h] [rbp+30h]
  __int64 v17; // [rsp+148h] [rbp+38h]
  __int64 v18; // [rsp+150h] [rbp+40h] BYREF
  char v19; // [rsp+158h] [rbp+48h]
  __int64 v20; // [rsp+160h] [rbp+50h]
  __int64 v21; // [rsp+168h] [rbp+58h] BYREF
  char v22; // [rsp+170h] [rbp+60h]
  __int64 v23; // [rsp+178h] [rbp+68h]
  __int64 v24; // [rsp+180h] [rbp+70h] BYREF
  char v25; // [rsp+188h] [rbp+78h]
  __int64 v26; // [rsp+190h] [rbp+80h]
  __int64 v27; // [rsp+198h] [rbp+88h] BYREF
  char v28; // [rsp+1A0h] [rbp+90h]
  __int64 v29; // [rsp+1A8h] [rbp+98h]
  __int64 v30; // [rsp+1B0h] [rbp+A0h] BYREF
  char v31; // [rsp+1B8h] [rbp+A8h]
  __int64 v32; // [rsp+1C0h] [rbp+B0h]
  const char *v33; // [rsp+1C8h] [rbp+B8h] BYREF
  char v34; // [rsp+1D0h] [rbp+C0h]
  __int64 v35; // [rsp+1D8h] [rbp+C8h]
  const char *v36; // [rsp+1E0h] [rbp+D0h] BYREF
  char v37; // [rsp+1E8h] [rbp+D8h]
  __int64 v38; // [rsp+1F0h] [rbp+E0h]
  const char *v39; // [rsp+1F8h] [rbp+E8h] BYREF
  char v40; // [rsp+200h] [rbp+F0h]
  __int64 v41; // [rsp+208h] [rbp+F8h]

  v3 = (__int64)"state_during_last_resort_suspension_timer";
  v5 = a1 + 40;
  v6 = (__int64)"state_during_view_consolidation";
  v8 = a1 + 36;
  v9 = (__int64)"state_during_hide_request_timer";
  v11 = a1 + 32;
  v12 = (__int64)"initial_state";
  v14 = a1 + 28;
  v15 = (__int64)"already_hidden";
  v17 = a1 + 24;
  v18 = (__int64)"view_visibility_revoked";
  v20 = a1 + 23;
  v21 = (__int64)"view_destroyed";
  v23 = a1 + 22;
  v24 = (__int64)"activated_while_hiding";
  v26 = a1 + 21;
  v27 = (__int64)"suspend_timer_expired";
  v29 = a1 + 20;
  v30 = (__int64)"hide_view_timer_expired";
  v32 = a1 + 19;
  v33 = "suspended";
  v35 = a1 + 18;
  v36 = "view_cloaked";
  v38 = a1 + 17;
  v39 = "shell_initiated";
  v41 = a1 + 16;
  v4 = 41;
  v7 = 31;
  v10 = 31;
  v13 = 13;
  v16 = 14;
  v19 = 23;
  v22 = 14;
  v25 = 22;
  v28 = 21;
  v31 = 23;
  v34 = 9;
  v37 = 12;
  v40 = 15;
  return tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v39,
           (__int64)&v36,
           (__int64)&v33,
           (__int64)&v30,
           (__int64)&v27,
           (__int64)&v24,
           (__int64)&v21,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
