/*
 * XREFs of ??$serialize_helper@Voutput_archive@tson@@@_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@AEAAXAEAVoutput_archive@tson@@@Z @ 0x180260228
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180275B90 (-serialize@-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@E.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000000000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@0@Z @ 0x18025E878 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V_ea_18025E878.c)
 */

__int64 __fastcall _tip_CopilotHardwareKeyExtendedSignalsInvokedTest::serialize_helper<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  const char *v3; // [rsp+D8h] [rbp-80h] BYREF
  char v4; // [rsp+E0h] [rbp-78h]
  __int64 v5; // [rsp+E8h] [rbp-70h]
  const char *v6; // [rsp+F0h] [rbp-68h] BYREF
  char v7; // [rsp+F8h] [rbp-60h]
  __int64 v8; // [rsp+100h] [rbp-58h]
  const char *v9; // [rsp+108h] [rbp-50h] BYREF
  char v10; // [rsp+110h] [rbp-48h]
  __int64 v11; // [rsp+118h] [rbp-40h]
  const char *v12; // [rsp+120h] [rbp-38h] BYREF
  char v13; // [rsp+128h] [rbp-30h]
  __int64 v14; // [rsp+130h] [rbp-28h]
  const char *v15; // [rsp+138h] [rbp-20h] BYREF
  char v16; // [rsp+140h] [rbp-18h]
  __int64 v17; // [rsp+148h] [rbp-10h]
  const char *v18; // [rsp+150h] [rbp-8h] BYREF
  char v19; // [rsp+158h] [rbp+0h]
  __int64 v20; // [rsp+160h] [rbp+8h]
  const char *v21; // [rsp+168h] [rbp+10h] BYREF
  char v22; // [rsp+170h] [rbp+18h]
  __int64 v23; // [rsp+178h] [rbp+20h]
  const char *v24; // [rsp+180h] [rbp+28h] BYREF
  char v25; // [rsp+188h] [rbp+30h]
  __int64 v26; // [rsp+190h] [rbp+38h]
  const char *v27; // [rsp+198h] [rbp+40h] BYREF
  char v28; // [rsp+1A0h] [rbp+48h]
  __int64 v29; // [rsp+1A8h] [rbp+50h]
  __int64 v30; // [rsp+1B0h] [rbp+58h] BYREF
  char v31; // [rsp+1B8h] [rbp+60h]
  __int64 v32; // [rsp+1C0h] [rbp+68h]
  __int64 v33; // [rsp+1C8h] [rbp+70h] BYREF
  char v34; // [rsp+1D0h] [rbp+78h]
  __int64 v35; // [rsp+1D8h] [rbp+80h]
  __int64 v36; // [rsp+1E0h] [rbp+88h] BYREF
  char v37; // [rsp+1E8h] [rbp+90h]
  __int64 v38; // [rsp+1F0h] [rbp+98h]
  __int64 v39; // [rsp+1F8h] [rbp+A0h] BYREF
  char v40; // [rsp+200h] [rbp+A8h]
  __int64 v41; // [rsp+208h] [rbp+B0h]
  __int64 v42; // [rsp+210h] [rbp+B8h] BYREF
  char v43; // [rsp+218h] [rbp+C0h]
  __int64 v44; // [rsp+220h] [rbp+C8h]
  __int64 v45; // [rsp+228h] [rbp+D0h] BYREF
  char v46; // [rsp+230h] [rbp+D8h]
  __int64 v47; // [rsp+238h] [rbp+E0h]
  __int64 v48; // [rsp+240h] [rbp+E8h] BYREF
  char v49; // [rsp+248h] [rbp+F0h]
  __int64 v50; // [rsp+250h] [rbp+F8h]
  __int64 v51; // [rsp+258h] [rbp+100h] BYREF
  char v52; // [rsp+260h] [rbp+108h]
  __int64 v53; // [rsp+268h] [rbp+110h]
  __int64 v54; // [rsp+270h] [rbp+118h] BYREF
  char v55; // [rsp+278h] [rbp+120h]
  __int64 v56; // [rsp+280h] [rbp+128h]
  __int64 v57; // [rsp+288h] [rbp+130h] BYREF
  char v58; // [rsp+290h] [rbp+138h]
  __int64 v59; // [rsp+298h] [rbp+140h]
  __int64 v60; // [rsp+2A0h] [rbp+148h] BYREF
  char v61; // [rsp+2A8h] [rbp+150h]
  __int64 v62; // [rsp+2B0h] [rbp+158h]
  __int64 v63; // [rsp+2B8h] [rbp+160h] BYREF
  char v64; // [rsp+2C0h] [rbp+168h]
  __int64 v65; // [rsp+2C8h] [rbp+170h]
  const char *v66; // [rsp+2D0h] [rbp+178h] BYREF
  char v67; // [rsp+2D8h] [rbp+180h]
  __int64 v68; // [rsp+2E0h] [rbp+188h]
  const char *v69; // [rsp+2E8h] [rbp+190h] BYREF
  char v70; // [rsp+2F0h] [rbp+198h]
  __int64 v71; // [rsp+2F8h] [rbp+1A0h]
  const char *v72; // [rsp+300h] [rbp+1A8h] BYREF
  char v73; // [rsp+308h] [rbp+1B0h]
  __int64 v74; // [rsp+310h] [rbp+1B8h]

  v4 = 25;
  v3 = "isRegisterShellHotkeyUsed";
  v7 = 8;
  v5 = a1 + 84;
  v6 = "keyPress";
  v8 = a1 + 80;
  v9 = "fastPathInvokedWithCachedWindow";
  v11 = a1 + 76;
  v12 = "minimizeRestoreState";
  v14 = a1 + 72;
  v15 = "badAppWindowMessageId";
  v17 = a1 + 68;
  v18 = "recoveredPressAndHoldSignal";
  v20 = a1 + 65;
  v21 = "usingWindowsMessageNotification";
  v23 = a1 + 64;
  v24 = "appId";
  v26 = a1 + 32;
  v27 = "invalidAppExtensionProperty";
  v29 = a1 + 31;
  v30 = (__int64)"restoredForeground";
  v32 = a1 + 30;
  v33 = (__int64)"failedToReadAppExtensionProperties";
  v35 = a1 + 29;
  v36 = (__int64)"updateAppExtensionPropertiesCacheRequested";
  v38 = a1 + 28;
  v39 = (__int64)"noTargetAppConfiguredForCopilotKey";
  v41 = a1 + 27;
  v42 = (__int64)"emptyTargetLongPressStopUri";
  v44 = a1 + 26;
  v45 = (__int64)"emptyTargetLongPressStartUri";
  v47 = a1 + 25;
  v48 = (__int64)"singleTapSignalled";
  v50 = a1 + 24;
  v10 = 31;
  v13 = 20;
  v16 = 21;
  v19 = 27;
  v22 = 31;
  v25 = 5;
  v28 = 27;
  v31 = 18;
  v34 = 34;
  v37 = 42;
  v40 = 34;
  v43 = 27;
  v46 = 28;
  v49 = 18;
  v52 = 21;
  v51 = (__int64)"longPressStopSignaled";
  v53 = a1 + 23;
  v54 = (__int64)"longPressStartSignaled";
  v56 = a1 + 22;
  v57 = (__int64)"longPressTimerExpired";
  v59 = a1 + 21;
  v60 = (__int64)"failedToCreateLongPressTimer";
  v62 = a1 + 20;
  v63 = (__int64)"failedToCreateForegroundWindow";
  v65 = a1 + 19;
  v66 = "notRegisteredForExtendedSignals";
  v68 = a1 + 18;
  v69 = "isWalkieTalkiePolicyEnabled";
  v71 = a1 + 17;
  v72 = "initializationPhase";
  v74 = a1 + 16;
  v55 = 22;
  v58 = 21;
  v61 = 28;
  v64 = 30;
  v67 = 31;
  v70 = 27;
  v73 = 19;
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<enum keyPressType &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v72,
           (__int64)&v69,
           (__int64)&v66,
           (__int64)&v63,
           (__int64)&v60,
           (__int64)&v57,
           (__int64)&v54,
           (__int64)&v51,
           (__int64)&v48,
           (__int64)&v45,
           (__int64)&v42,
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
