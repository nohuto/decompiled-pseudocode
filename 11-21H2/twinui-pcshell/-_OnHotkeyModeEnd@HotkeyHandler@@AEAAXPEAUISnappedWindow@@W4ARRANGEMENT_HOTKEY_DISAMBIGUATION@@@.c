/*
 * XREFs of ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AAF28
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805A9A60 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1805A71E8 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ??1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ @ 0x1805A90AC (--1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?Stop@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXI@Z @ 0x1805AA718 (-Stop@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXI@Z.c)
 *     ?TransferToCurrentThread@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA?AV12@XZ @ 0x1805AADFC (-TransferToCurrentThread@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA-AV12@XZ.c)
 *     ?_ResetState@HotkeyHandler@@AEAAXXZ @ 0x1805AB078 (-_ResetState@HotkeyHandler@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall HotkeyHandler::_OnHotkeyModeEnd(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD, __int64); // rdi
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15[2]; // [rsp+30h] [rbp-188h] BYREF
  volatile signed __int32 *v16[40]; // [rsp+40h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  CSnapComponentTelemetry::WindowArrangementHotkeyMode::TransferToCurrentThread(
    a1 + 88,
    (struct wil::details::IFailureCallback *)v16);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  if ( SnapLayoutHelpers::IsValidSnapRegion((SnapLayoutHelpers *)v6, v7, v8, v9) && a3 == 2 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v10 + 32LL);
    v12 = *(_DWORD *)(a1 + 412);
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 112LL))(a2, v15);
    v14 = v11(v10, *v13, v12, 1LL);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x360,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v15);
  }
  HotkeyHandler::_ResetState((HotkeyHandler *)a1);
  CSnapComponentTelemetry::WindowArrangementHotkeyMode::Stop(
    (CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v16,
    a3);
  CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode(v16);
}
