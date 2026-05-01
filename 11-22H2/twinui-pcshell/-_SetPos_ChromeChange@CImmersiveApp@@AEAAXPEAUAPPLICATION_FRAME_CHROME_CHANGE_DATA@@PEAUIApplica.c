/*
 * XREFs of ?_SetPos_ChromeChange@CImmersiveApp@@AEAAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@PEAUIApplicationViewTitlebarConfiguration@@PEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180023854
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180021550 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180024830 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::_SetPos_ChromeChange(
        CImmersiveApp *this,
        struct APPLICATION_FRAME_CHROME_CHANGE_DATA *a2,
        struct IApplicationViewTitlebarConfiguration *a3,
        struct APPLICATION_VIEW_DATA_UPDATE *a4)
{
  int v7; // eax
  int v8[12]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 55) + 152LL))(*((_QWORD *)this + 55), *(_QWORD *)a2);
    if ( a4 )
    {
      v7 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
             (CImmersiveApp *)((char *)this + 288),
             (struct APPLICATION_VIEW_DATA_UPDATE *)v8);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15A8,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v7,
          v8[0]);
      }
      else
      {
        *((_DWORD *)a4 + 2) = v8[2];
        *((_DWORD *)a4 + 9) = v8[9];
        *((_DWORD *)a4 + 10) = v8[10];
      }
    }
  }
  if ( a3 )
    (*(void (__fastcall **)(_QWORD, struct IApplicationViewTitlebarConfiguration *))(**((_QWORD **)this + 55) + 168LL))(
      *((_QWORD *)this + 55),
      a3);
}
