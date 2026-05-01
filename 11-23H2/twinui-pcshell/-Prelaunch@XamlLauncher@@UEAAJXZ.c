/*
 * XREFs of ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x1801982C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1800A3298 (-IsSearchDisabled@DisableSearchPolicy@@YA_NXZ.c)
 *     _anonymous_namespace_::IsUndockingDisabled @ 0x1800A8784 (_anonymous_namespace_--IsUndockingDisabled.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180112920 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtr@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1801983E0 (--B-$ComPtr@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAPE.c)
 *     ?StartPrelaunched@StartWindowTelemetry@@SAXXZ @ 0x1801983F4 (-StartPrelaunched@StartWindowTelemetry@@SAXXZ.c)
 *     ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x18019845C (-IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z.c)
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x1801FF46C (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartPrelaunchSkipped_UndockingDisabled@StartWindowTelemetry@@SAXXZ @ 0x18050225C (-StartPrelaunchSkipped_UndockingDisabled@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall XamlLauncher::Prelaunch(XamlLauncher *this)
{
  XamlLauncher *v2; // rcx
  bool IsStartMenuEnabled; // di
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  DisableSearchPolicy *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( anonymous_namespace_::IsUndockingDisabled() )
  {
    StartWindowTelemetry::StartPrelaunchSkipped_UndockingDisabled();
    goto LABEL_13;
  }
  if ( !XamlLauncher::IsStartMenuPrelaunchEnabled(v2) )
  {
LABEL_13:
    SetExistingEvent(L"ShellStartReadyEvent");
    goto LABEL_14;
  }
  StartWindowTelemetry::StartPrelaunched();
  IsStartMenuEnabled = XamlLauncher::IsStartMenuEnabled((XamlLauncher *)((char *)this - 24), 0LL);
  if ( IsStartMenuEnabled
    && (unsigned int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::ICortanaExperienceManager>::operator int Microsoft::WRL::Details::BoolStruct::*((char *)this + 160) != -1 )
  {
    LOBYTE(v4) = 1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 48LL))(*v5, v4);
    if ( v6 >= 0 )
      goto LABEL_8;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x209,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v6);
  }
  SetExistingEvent(L"ShellStartReadyEvent");
  if ( !IsStartMenuEnabled )
  {
LABEL_14:
    SetExistingEvent(L"ShellSearchReadyEvent");
    return 0LL;
  }
LABEL_8:
  if ( DisableSearchPolicy::IsSearchDisabled(v8, v7)
    || (unsigned int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::ICortanaExperienceManager>::operator int Microsoft::WRL::Details::BoolStruct::*((char *)this + 168) == -1 )
  {
    goto LABEL_14;
  }
  LOBYTE(v9) = 1;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 48LL))(*v10, v9);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x212,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_14;
  }
  return 0LL;
}
