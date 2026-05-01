/*
 * XREFs of ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x180065EFC
 * Callers:
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180064CD0 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ @ 0x18044B7F0 (-OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180027340 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180062538 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1800BBB00 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5674 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AutomaticInvokeSkipped_DesktopSwitchTimedOut@StartWindowTelemetry@@SAXXZ @ 0x18044A8A0 (-AutomaticInvokeSkipped_DesktopSwitchTimedOut@StartWindowTelemetry@@SAXXZ.c)
 *     ?AutomaticStartInvokeRequested@StartWindowTelemetry@@SAXXZ @ 0x18044A9D8 (-AutomaticStartInvokeRequested@StartWindowTelemetry@@SAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@@std@@XZ @ 0x18044C4E4 (-ensure_data@-$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV-$shared_pt.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlLauncher::ConsiderShowStartAutomatically(XamlLauncher *this)
{
  wil *v2; // rbx
  wil::details *v3; // rcx
  wil *Event; // rsi
  int LastErrorFailHr; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rsi
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil *v17; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 323) && *((_BYTE *)this + 324) && *((_BYTE *)this + 325) )
  {
    v2 = 0LL;
    v17 = 0LL;
    Event = (wil *)CreateEventExW(0LL, L"ShellDesktopSwitchEvent", 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      v2 = Event;
      v17 = Event;
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v3);
    }
    if ( LastErrorFailHr >= 0 )
    {
      if ( !(unsigned __int8)wil::handle_wait(v2, 0LL) )
      {
        StartWindowTelemetry::AutomaticInvokeSkipped_DesktopSwitchTimedOut();
        v9 = (__int64 *)((char *)this + 128);
        v10 = (__int64 *)tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::ensure_data((char *)this + 128);
        v11 = (volatile signed __int32 *)v10[1];
        if ( v11 )
        {
          _InterlockedIncrement(v11 + 2);
          v11 = (volatile signed __int32 *)v10[1];
        }
        v12 = *v10;
        v14 = v12;
        v15 = v11;
        tip::details::test_common_data<1>::begin_update(v12 + 8);
        v13 = v12 + 152;
        if ( !v12 )
          v13 = 8LL;
        *(_BYTE *)v13 = 1;
        if ( v12 )
        {
          tip::details::test_common_data<1>::end_update(v12 + 8);
          std::shared_ptr<PeoplePaneViewInfo>::reset(&v14);
          v11 = v15;
        }
        if ( v11 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
        tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(v9);
        goto LABEL_11;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x58B,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)LastErrorFailHr,
        v14);
    }
    StartWindowTelemetry::AutomaticStartInvokeRequested();
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 43) + 176LL))(
      *((_QWORD *)this + 43),
      (char *)this + 144);
    XamlLauncher::ShowStartView((__int64)this + 24, 0xFu, 0);
    SHRegSetBOOL(
      HKEY_CURRENT_USER,
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
      L"StartShownOnUpgrade",
      1);
LABEL_11:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
      &v17,
      v6,
      v7,
      v8);
  }
}
