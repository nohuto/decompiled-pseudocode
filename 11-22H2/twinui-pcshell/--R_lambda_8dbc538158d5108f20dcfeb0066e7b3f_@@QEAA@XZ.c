/*
 * XREFs of ??R_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@QEAA@XZ @ 0x1804FFEB8
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180501BA0 (-Run@-$CTaskWrapper@V_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18009D6A4 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_8dbc538158d5108f20dcfeb0066e7b3f_::operator()(__int64 (**this)(void))
{
  HWND WindowW; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !WindowW || GetPropW(WindowW, L"IsExplorerShuttingDown") )
    return this[1]();
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v6);
  v3 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)this, &GUID_3b810852_511f_4404_89ae_347bc2e8b561, &v6, 0);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE0,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v6);
}
