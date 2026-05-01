/*
 * XREFs of ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x18030B920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x18004916C (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1802ECC8C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::HandleCrashRecovery(struct IImmersiveApplicationInternal **this, char a2)
{
  _BOOL8 v4; // rbp
  struct IUnknown *v5; // r9
  struct IImmersiveApplicationInternal *v6; // rsi
  struct IImmersiveApplicationInternal *v7; // rdx
  void (__fastcall *v8)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IUnknown *v10; // [rsp+50h] [rbp+8h] BYREF

  if ( this[6] )
  {
    CTaskWindow::s_UpdateNavigationLevel(this[16], (struct CTaskWindow::TASK_WINDOW *)(this + 4));
  }
  else
  {
    v4 = *((_BYTE *)this + 56) == 0;
    v5 = 0LL;
    v10 = 0LL;
    v6 = this[16];
    if ( v6 )
    {
      v8 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)v6 + 464LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v10);
      v8(v6, AddressOf);
      v7 = this[16];
      v5 = v10;
    }
    else
    {
      v7 = 0LL;
    }
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      (HWND)this[4],
      13,
      v5,
      v7,
      v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  }
  if ( *((_BYTE *)this + 56) )
  {
    if ( !a2 )
      (*((void (__fastcall **)(struct IImmersiveApplicationInternal **, _QWORD))*this + 20))(this, 0LL);
  }
}
