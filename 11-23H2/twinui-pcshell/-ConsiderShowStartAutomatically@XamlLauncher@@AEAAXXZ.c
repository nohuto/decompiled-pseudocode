/*
 * XREFs of ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x1800F4D94
 * Callers:
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1800F4440 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ @ 0x180501690 (-OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F9B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800A6C70 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801BC580 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1801FE5F4 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@1@XZ @ 0x1801FE6AC (--C-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AutomaticInvokeSkipped_DesktopSwitchTimedOut@StartWindowTelemetry@@SAXXZ @ 0x1805001E0 (-AutomaticInvokeSkipped_DesktopSwitchTimedOut@StartWindowTelemetry@@SAXXZ.c)
 *     ?AutomaticStartInvokeRequested@StartWindowTelemetry@@SAXXZ @ 0x180500318 (-AutomaticStartInvokeRequested@StartWindowTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncher::ConsiderShowStartAutomatically(XamlLauncher *this)
{
  wil::details *v2; // rbx
  wil::details *v3; // rcx
  wil::details *Event; // rsi
  unsigned int v5; // r8d
  int v6; // r9d
  signed int LastErrorFailHr; // eax
  void *v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  wil *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 372) && *((_BYTE *)this + 373) && *((_BYTE *)this + 374) )
  {
    v2 = 0LL;
    v11 = 0LL;
    Event = (wil::details *)CreateEventExW(0LL, L"ShellDesktopSwitchEvent", 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        &v11,
        Event);
      LastErrorFailHr = 0;
      v2 = v11;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v3);
    }
    if ( LastErrorFailHr >= 0 )
    {
      if ( !wil::handle_wait(v2, 0LL, v5, v6) )
      {
        StartWindowTelemetry::AutomaticInvokeSkipped_DesktopSwitchTimedOut();
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::operator->(
                                (char *)this + 128,
                                &v11)
                 + 264LL) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>(&v11);
        tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((char *)this + 128);
LABEL_10:
        if ( v2 )
          wil::details::CloseHandle(v2, v8);
        return;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x69D,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)LastErrorFailHr,
        v9);
    }
    StartWindowTelemetry::AutomaticStartInvokeRequested();
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 49) + 176LL))(
      *((_QWORD *)this + 49),
      (char *)this + 136);
    XamlLauncher::ShowStartView((__int64)this + 24, 0xFu, 0);
    SHRegSetBOOL(
      HKEY_CURRENT_USER,
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
      L"StartShownOnUpgrade",
      1);
    goto LABEL_10;
  }
}
