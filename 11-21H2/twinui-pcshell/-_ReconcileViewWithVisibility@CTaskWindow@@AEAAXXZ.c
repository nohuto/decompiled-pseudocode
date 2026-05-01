/*
 * XREFs of ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180049328
 * Callers:
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x18003D580 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x180159850 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x18004916C (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::_ReconcileViewWithVisibility(struct IImmersiveApplicationInternal **this)
{
  struct IImmersiveApplicationInternal *v2; // rdi
  __int64 (__fastcall *v3)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  int v4; // eax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( this[7] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[17], (struct CTaskWindow::TASK_WINDOW *)(this + 5));
    v8 = 0LL;
    v2 = this[7];
    v3 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))v2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    v4 = v3(v2, &GUID_35f1648c_265f_402c_b575_c9a325451df5, &v8);
    if ( v4 < 0 )
    {
      v5 = 1180LL;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v8 + 88LL))(v8, *((_DWORD *)this + 32) == 2);
      if ( v4 >= 0 )
      {
LABEL_4:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
        return;
      }
      v5 = 1184LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v4,
      v6);
    goto LABEL_4;
  }
}
