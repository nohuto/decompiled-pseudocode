/*
 * XREFs of ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1806DF458
 * Callers:
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x180257050 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010394C (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z @ 0x1802EA252 (--0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z.c)
 *     shell::TaskScheduler::AddTask__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1806C95C4 (shell--TaskScheduler--AddTask__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLaunc.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::_lambda_21d9478fa7481aa5ac8b815bdb34bba5_ @ 0x1806CB588 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--_lambda_21d9478fa7481aa5ac8b815bdb34bba5_.c)
 *     ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1806CBB60 (--1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAAXPEBG@Z @ 0x1806CEAE0 (-StartActivity@LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAAXPEBG@Z.c)
 *     ?_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE3F8 (-_EnsureScheduler@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_EnsureWindowMessageService@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE48C (-_EnsureWindowMessageService@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ @ 0x1806DFA80 (-_IsInImmersiveAppOrLauncher@CLauncherTipContextMenu@@AEAA_NXZ.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x18074A9A4 (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CLauncherTipContextMenu::_ExecuteCommand(CLauncherTipContextMenu *this, __int64 *a2)
{
  const unsigned __int16 *v4; // rbx
  __int64 v5; // rdx
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10[8]; // [rsp+30h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-C8h] BYREF
  void *v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h]
  _QWORD v15[40]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v17[328]; // [rsp+1B8h] [rbp+B8h] BYREF

  v12[1] = a2;
  v4 = *(const unsigned __int16 **)(*a2 + 16);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"LauncherTipContextMenuExecuteCommand");
  v15[0] = &LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::StartActivity(
    (LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v15,
    v4);
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
    LaunchCortanaApp(L"StartMode=Proactive&QuerySource=StartContextMenu", v5, 1LL);
  }
  else if ( (int)CLauncherTipContextMenu::_EnsureScheduler(this) >= 0 )
  {
    v12[0] = 0LL;
    v6 = 1;
    if ( (*(_BYTE *)(*a2 + 112) & 2) != 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
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
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( GetKeyState(160) >= 0 && GetKeyState(161) >= 0 || GetKeyState(17) >= 0 || (*(_BYTE *)(*a2 + 112) & 4) != 0 )
      v6 = 0;
    v10[0] = v6;
    shell::TaskScheduler::TaskScheduler(
      (shell::TaskScheduler *)v13,
      *((struct IShellTaskScheduler **)this + 17),
      &TOID_LAUNCHERTIPCONTEXTMENU_EXECUTECOMMAND);
    v7 = lambda_21d9478fa7481aa5ac8b815bdb34bba5_::_lambda_21d9478fa7481aa5ac8b815bdb34bba5_(
           (__int64)&v16,
           v12,
           (__int64)v15,
           v10);
    ppvOut = (void *)*a2;
    shell::TaskScheduler::AddTask__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____(
      (__int64)v13,
      v8,
      (__int64)&ppvOut,
      v7);
    LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v17);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v12);
  }
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)v15);
  v9 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
