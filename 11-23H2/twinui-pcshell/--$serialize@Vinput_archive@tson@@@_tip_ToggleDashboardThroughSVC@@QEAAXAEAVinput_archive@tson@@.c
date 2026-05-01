/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180232188
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180249A10 (-deserialize@-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@EEAAXAEAVinput_arc.c)
 * Callees:
 *     ??$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@Z @ 0x180230670 (--$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_a.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802317E8 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x18046CAC4 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18046D0A0 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

__int64 __fastcall _tip_ToggleDashboardThroughSVC::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v5; // [rsp+30h] [rbp-29h] BYREF
  char v6; // [rsp+38h] [rbp-21h]
  __int64 v7; // [rsp+40h] [rbp-19h]
  const char *v8; // [rsp+48h] [rbp-11h] BYREF
  char v9; // [rsp+50h] [rbp-9h]
  __int64 v10; // [rsp+58h] [rbp-1h]
  const char *v11; // [rsp+60h] [rbp+7h] BYREF
  char v12; // [rsp+68h] [rbp+Fh]
  __int64 v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh] BYREF
  char v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  __int64 v17; // [rsp+90h] [rbp+37h] BYREF
  char v18; // [rsp+98h] [rbp+3Fh]
  __int64 v19; // [rsp+A0h] [rbp+47h]

  v6 = 15;
  v5 = "packageFullName";
  v9 = 2;
  v7 = a1 + 64;
  v12 = 27;
  v8 = "hr";
  v10 = a1 + 60;
  v11 = "isDashboardExtensionPresent";
  v13 = a1 + 58;
  v14 = (__int64)"isDashboardExtensionCreationSuccessful";
  v16 = a1 + 57;
  v17 = (__int64)"isRelevantExtensionError";
  v19 = a1 + 56;
  v15 = 38;
  *(_QWORD *)(a2 + 16) = "invokeType";
  v18 = 24;
  *(_BYTE *)(a2 + 24) = 10;
  tson::input_archive::startNode((tson::input_archive *)a2);
  tson::load_nothrow<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>(
    (tson::input_archive *)a2,
    a1 + 16);
  tson::input_archive::finishNode((tson::input_archive *)a2);
  *(_BYTE *)(a2 + 24) = 11;
  *(_QWORD *)(a2 + 16) = "argContexts";
  tson::load_nothrow((tson::input_archive *)a2);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
           (tson::input_archive *)a2,
           (__int64)&v17,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8,
           (__int64)&v5);
}
