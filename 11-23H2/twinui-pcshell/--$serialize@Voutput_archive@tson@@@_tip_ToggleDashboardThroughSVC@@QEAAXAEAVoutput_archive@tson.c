/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180232E14
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18024BBD0 (-serialize@-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x180013724 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180231844 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$c_ea_180231844.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x18028BD34 (--$process@V-$nvp@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@tson@@@ou.c)
 *     ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGAAAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x180698FD0 (-value@-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGAAAEAW4Das.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _tip_ToggleDashboardThroughSVC::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  __int64 v3; // rdi
  int *v4; // rax
  const char *v6; // [rsp+60h] [rbp-9h] BYREF
  char v7; // [rsp+68h] [rbp-1h]
  __int64 v8; // [rsp+70h] [rbp+7h]
  const char *v9; // [rsp+78h] [rbp+Fh] BYREF
  char v10; // [rsp+80h] [rbp+17h]
  __int64 v11; // [rsp+88h] [rbp+1Fh]
  __int64 v12; // [rsp+90h] [rbp+27h] BYREF
  char v13; // [rsp+98h] [rbp+2Fh]
  __int64 v14; // [rsp+A0h] [rbp+37h]
  __int64 v15; // [rsp+A8h] [rbp+3Fh] BYREF
  char v16; // [rsp+B0h] [rbp+47h]
  __int64 v17; // [rsp+B8h] [rbp+4Fh]

  v6 = "hr";
  v7 = 2;
  v8 = a1 + 60;
  v9 = "isDashboardExtensionPresent";
  v10 = 27;
  v11 = a1 + 58;
  v12 = (__int64)"isDashboardExtensionCreationSuccessful";
  v13 = 38;
  v14 = a1 + 57;
  v15 = (__int64)"isRelevantExtensionError";
  v16 = 24;
  v17 = a1 + 56;
  v3 = a1 + 16;
  *(_QWORD *)a2 = "invokeType";
  *((_BYTE *)a2 + 8) = 10;
  tson::output_archive::startNode(a2);
  tson::output_archive::saveValue(a2, *(_BYTE *)(v3 + 4));
  if ( *(_BYTE *)(v3 + 4) )
  {
    v4 = (int *)std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>::value(v3);
    tson::output_archive::saveValue(a2, *v4);
  }
  tson::output_archive::finishNode(a2);
  tson::output_archive::process<tson::nvp<std::wstring &>>(a2);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v15,
           (__int64)&v12,
           (__int64 *)&v9,
           (__int64)&v6);
}
