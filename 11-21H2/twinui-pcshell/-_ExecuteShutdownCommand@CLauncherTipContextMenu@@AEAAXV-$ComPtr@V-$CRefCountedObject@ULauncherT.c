/*
 * XREFs of ?_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@PEBUtagRECT@@@Z @ 0x1805DC054
 * Callers:
 *     _lambda_ead74eb18ddaf5d60afd1f95853bb976_$_ResumeCoro$1::operator() @ 0x1801D8080 (_lambda_ead74eb18ddaf5d60afd1f95853bb976_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180069B88 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_180069B88.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1805D851C (--1LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 *     AdjustShutdownChoiceBasedOnModifierKeys @ 0x1805D875C (AdjustShutdownChoiceBasedOnModifierKeys.c)
 *     ?StartActivity@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXXZ @ 0x1805DA34C (-StartActivity@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEA.c)
 *     ?Stop@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXI@Z @ 0x1805DA3F8 (-Stop@LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAAXI@Z.c)
 *     ?get@?$static_lazy@VTwinUISwitcherLogging@@@details@wil@@QEAAPEAVTwinUISwitcherLogging@@P6AXXZ@Z @ 0x1805DC5D4 (-get@-$static_lazy@VTwinUISwitcherLogging@@@details@wil@@QEAAPEAVTwinUISwitcherLogging@@P6AXXZ@Z.c)
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
  volatile signed __int32 *v15[40]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+190h] [rbp+90h] BYREF

  v14[1] = a2;
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v15,
    (__int64)"LauncherTipContextMenuExecuteShutdownCommand");
  v15[0] = (volatile signed __int32 *)&LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::`vftable';
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::StartActivity((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand *)v15);
  LODWORD(v7) = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
  if ( (_DWORD)v7 == 1 )
  {
    v8 = *(_DWORD **)(wil::details::static_lazy<TwinUISwitcherLogging>::get(
                        v6,
                        _lambda_297a286f831baa642edc8499ff4b3ff7_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1806CD1D0, 0LL, 0LL, 2u, &v16);
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
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::~LauncherTipContextMenuExecuteShutdownCommand(v15);
  v12 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
