/*
 * XREFs of ?_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@PEBUtagRECT@@@Z @ 0x1806DF790
 * Callers:
 *     _lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1::operator() @ 0x180256D90 (_lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010394C (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1806CBB8C (--1LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 *     AdjustShutdownChoiceBasedOnModifierKeys @ 0x1806CC594 (AdjustShutdownChoiceBasedOnModifierKeys.c)
 *     ?StartActivity@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXXZ @ 0x1806CEB90 (-StartActivity@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEA.c)
 *     ?Stop@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXI@Z @ 0x1806CEC34 (-Stop@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXI@Z.c)
 *     ?get@?$static_lazy@VTwinUISwitcherLogging@@@details@wil@@QEAAPEAVTwinUISwitcherLogging@@P6AXXZ@Z @ 0x1806DFF84 (-get@-$static_lazy@VTwinUISwitcherLogging@@@details@wil@@QEAAPEAVTwinUISwitcherLogging@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CLauncherTipContextMenu::_ExecuteShutdownCommand(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  LPVOID v10; // rbx
  int (__fastcall *v11)(LPVOID, GUID *, __int64 *); // rdi
  __int64 v12; // rcx
  LPVOID ppv; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v15[40]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+190h] [rbp+90h] BYREF

  v14[1] = a2;
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"LauncherTipContextMenuExecuteShutdownCommand");
  v15[0] = &LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::`vftable';
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::StartActivity((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand *)v15);
  LODWORD(v7) = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
  if ( (_DWORD)v7 == 1 )
  {
    v8 = *(_DWORD **)(wil::details::static_lazy<TwinUISwitcherLogging>::get(
                        v6,
                        _lambda_297a286f831baa642edc8499ff4b3ff7_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1808795D0, 0LL, 0LL, 2u, &v16);
    LogoffWindowsDialog(0LL);
  }
  else
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
    if ( CoCreateInstance(&CLSID_AuthUIShutdownFlyout, 0LL, 1u, &GUID_36b1143f_d1db_4590_a855_b637d07e5d6b, &ppv) >= 0 )
    {
      v14[0] = 0LL;
      v10 = ppv;
      v11 = **(int (__fastcall ***)(LPVOID, GUID *, __int64 *))ppv;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
      if ( v11(v10, &GUID_a8e1f9a8_d7f2_452d_a107_753fa8a4eab8, v14) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14[0] + 24LL))(v14[0], 6LL);
      v7 = (unsigned int)AdjustShutdownChoiceBasedOnModifierKeys(v7);
      (*(void (__fastcall **)(LPVOID, __int64, _QWORD, __int64))(*(_QWORD *)ppv + 40LL))(
        ppv,
        v7,
        *(_QWORD *)(a1 + 128),
        a3);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  }
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::Stop(
    (LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand *)v15,
    v7);
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::~LauncherTipContextMenuExecuteShutdownCommand((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand *)v15);
  v12 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
