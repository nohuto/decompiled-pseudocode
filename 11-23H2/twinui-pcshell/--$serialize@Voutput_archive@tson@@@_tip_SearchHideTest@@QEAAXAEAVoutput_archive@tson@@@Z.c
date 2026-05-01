/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchHideTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180056FE4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800413D0 (-serialize@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V?$nvp@AEAW4SearchAppState@@@1@V21@V21@V21@V01@V01@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00000000$$QEAV?$nvp@AEAW4SearchAppState@@@1@11100$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1801E5DB8 (--$-RV-$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V-$nvp@AEAW4SearchAppState@_ea_1801E5DB8.c)
 */

__int64 __fastcall _tip_SearchHideTest::serialize<tson::output_archive>(__int64 a1, int a2)
{
  const char *v3; // [rsp+90h] [rbp-80h] BYREF
  char v4; // [rsp+98h] [rbp-78h]
  __int64 v5; // [rsp+A0h] [rbp-70h]
  const char *v6; // [rsp+A8h] [rbp-68h] BYREF
  char v7; // [rsp+B0h] [rbp-60h]
  __int64 v8; // [rsp+B8h] [rbp-58h]
  const char *v9; // [rsp+C0h] [rbp-50h] BYREF
  char v10; // [rsp+C8h] [rbp-48h]
  __int64 v11; // [rsp+D0h] [rbp-40h]
  const char *v12; // [rsp+D8h] [rbp-38h] BYREF
  char v13; // [rsp+E0h] [rbp-30h]
  __int64 v14; // [rsp+E8h] [rbp-28h]
  const char *v15; // [rsp+F0h] [rbp-20h] BYREF
  char v16; // [rsp+F8h] [rbp-18h]
  __int64 v17; // [rsp+100h] [rbp-10h]
  const char *v18; // [rsp+108h] [rbp-8h] BYREF
  char v19; // [rsp+110h] [rbp+0h]
  __int64 v20; // [rsp+118h] [rbp+8h]
  const char *v21; // [rsp+120h] [rbp+10h] BYREF
  char v22; // [rsp+128h] [rbp+18h]
  __int64 v23; // [rsp+130h] [rbp+20h]
  const char *v24; // [rsp+138h] [rbp+28h] BYREF
  char v25; // [rsp+140h] [rbp+30h]
  __int64 v26; // [rsp+148h] [rbp+38h]
  const char *v27; // [rsp+150h] [rbp+40h] BYREF
  char v28; // [rsp+158h] [rbp+48h]
  __int64 v29; // [rsp+160h] [rbp+50h]
  const char *v30; // [rsp+168h] [rbp+58h] BYREF
  char v31; // [rsp+170h] [rbp+60h]
  __int64 v32; // [rsp+178h] [rbp+68h]
  const char *v33; // [rsp+180h] [rbp+70h] BYREF
  char v34; // [rsp+188h] [rbp+78h]
  __int64 v35; // [rsp+190h] [rbp+80h]
  const char *v36; // [rsp+198h] [rbp+88h] BYREF
  char v37; // [rsp+1A0h] [rbp+90h]
  __int64 v38; // [rsp+1A8h] [rbp+98h]
  const char *v39; // [rsp+1B0h] [rbp+A0h] BYREF
  char v40; // [rsp+1B8h] [rbp+A8h]
  __int64 v41; // [rsp+1C0h] [rbp+B0h]
  const char *v42; // [rsp+1C8h] [rbp+B8h] BYREF
  char v43; // [rsp+1D0h] [rbp+C0h]
  __int64 v44; // [rsp+1D8h] [rbp+C8h]
  const char *v45; // [rsp+1E0h] [rbp+D0h] BYREF
  char v46; // [rsp+1E8h] [rbp+D8h]
  __int64 v47; // [rsp+1F0h] [rbp+E0h]
  const char *v48; // [rsp+1F8h] [rbp+E8h] BYREF
  char v49; // [rsp+200h] [rbp+F0h]
  __int64 v50; // [rsp+208h] [rbp+F8h]

  v4 = 9;
  v3 = "sessionId";
  v7 = 41;
  v5 = a1 + 48;
  v6 = "navigation_level_active_during_suspension";
  v8 = a1 + 45;
  v9 = "view_visible_during_suspension";
  v11 = a1 + 44;
  v12 = "state_during_last_resort_suspension_timer";
  v14 = a1 + 40;
  v15 = "state_during_view_consolidation";
  v17 = a1 + 36;
  v18 = "state_during_hide_request_timer";
  v20 = a1 + 32;
  v21 = "initial_state";
  v23 = a1 + 28;
  v24 = "already_hidden";
  v26 = a1 + 24;
  v27 = "view_visibility_revoked";
  v29 = a1 + 23;
  v30 = "view_destroyed";
  v32 = a1 + 22;
  v33 = "activated_while_hiding";
  v35 = a1 + 21;
  v36 = "suspend_timer_expired";
  v38 = a1 + 20;
  v39 = "hide_view_timer_expired";
  v41 = a1 + 19;
  v42 = "suspended";
  v44 = a1 + 18;
  v45 = "view_cloaked";
  v47 = a1 + 17;
  v48 = "shell_initiated";
  v50 = a1 + 16;
  v10 = 30;
  v13 = 41;
  v16 = 31;
  v19 = 31;
  v22 = 13;
  v25 = 14;
  v28 = 23;
  v31 = 14;
  v34 = 22;
  v37 = 21;
  v40 = 23;
  v43 = 9;
  v46 = 12;
  v49 = 15;
  return tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (unsigned int)&v48,
           (unsigned int)&v45,
           (unsigned int)&v42,
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
