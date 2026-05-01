/*
 * XREFs of ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1805DBD08
 * Callers:
 *     _lambda_66881fa05591413bac4099d171e5aec0_$_ResumeCoro$1::operator() @ 0x1801D7D60 (_lambda_66881fa05591413bac4099d171e5aec0_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180069B88 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_180069B88.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     shell::TaskScheduler::AddTask__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1801D6E64 (shell--TaskScheduler--AddTask__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLaunc.c)
 *     _lambda_4d6a380c2bab4ae2f41af78280fc3735_::__lambda_4d6a380c2bab4ae2f41af78280fc3735_ @ 0x1801D76A4 (_lambda_4d6a380c2bab4ae2f41af78280fc3735_--__lambda_4d6a380c2bab4ae2f41af78280fc3735_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804B3858 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW.c)
 *     ??0LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@AEBV01@@Z @ 0x1805D8274 (--0LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@AEBV01@@Z.c)
 *     ??0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z @ 0x1805D829C (--0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z.c)
 *     ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1805D84F0 (--1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAAXPEBG@Z @ 0x1805DA294 (-StartActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAAXPEBG@Z.c)
 *     ?_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB020 (-_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_EnsureWindowMessageService@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB0B4 (-_EnsureWindowMessageService@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ @ 0x1805DC354 (-_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x1805F40FC (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall CLauncherTipContextMenu::_ExecuteCommand(CLauncherTipContextMenu *this, __int64 *a2)
{
  const unsigned __int16 *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *ppvOut; // [rsp+30h] [rbp-D0h] BYREF
  void *v12[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h]
  void *v15; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[328]; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v17[40]; // [rsp+1B0h] [rbp+B0h] BYREF

  v12[1] = a2;
  v4 = *(const unsigned __int16 **)(*a2 + 16);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v17,
    (__int64)"LauncherTipContextMenuExecuteCommand");
  v17[0] = (volatile signed __int32 *)&LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::StartActivity(
    (LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v17,
    v4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivitiesInShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ActivitiesInShell>::GetImpl'::`2'::impl,
    0,
    v5,
    v6);
  if ( (*(_BYTE *)(*a2 + 112) & 8) != 0 && CLauncherTipContextMenu::_IsInImmersiveAppOrLauncher(this) )
  {
    if ( CLauncherTipContextMenu::_EnsureWindowMessageService(this) >= 0 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**((_QWORD **)this + 18) + 48LL))(
        *((_QWORD *)this + 18),
        786LL,
        0LL,
        1LL);
  }
  else if ( (*(_BYTE *)(*a2 + 112) & 0x20) != 0 )
  {
    LaunchCortanaApp(L"StartMode=Proactive&QuerySource=StartContextMenu", v7, 1LL);
  }
  else if ( (int)CLauncherTipContextMenu::_EnsureScheduler(this) >= 0 )
  {
    v12[0] = 0LL;
    v8 = 1;
    if ( (*(_BYTE *)(*a2 + 112) & 2) != 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &IID_IImmersiveApplicationManager,
             &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
             &ppvOut) >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v12);
        if ( IUnknown_QueryService(
               *((IUnknown **)this + 2),
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               v12) >= 0 )
        {
          CoAllowSetForegroundWindow((IUnknown *)ppvOut, 0LL);
          (*(void (__fastcall **)(void *, void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v12[0], 1LL);
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( GetKeyState(160) >= 0 && GetKeyState(161) >= 0 || GetKeyState(17) >= 0 || (*(_BYTE *)(*a2 + 112) & 4) != 0 )
      v8 = 0;
    shell::TaskScheduler::TaskScheduler(
      (shell::TaskScheduler *)v13,
      *((struct IShellTaskScheduler **)this + 17),
      &TOID_LAUNCHERTIPCONTEXTMENU_EXECUTECOMMAND);
    v15 = v12[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::LauncherTipContextMenuExecuteCommand(
      (LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v16,
      (const struct LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v17);
    v16[320] = v8;
    ppvOut = (void *)*a2;
    shell::TaskScheduler::AddTask__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____(
      (__int64)v13,
      v9,
      (__int64)&ppvOut,
      (__int64)&v15);
    lambda_4d6a380c2bab4ae2f41af78280fc3735_::__lambda_4d6a380c2bab4ae2f41af78280fc3735_((__int64 *)&v15);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v12);
  }
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand(v17);
  v10 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
