/*
 * XREFs of ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x18030BC00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C0A8 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1802ECC8C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x18030C1D0 (-s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::SendVisibilityChanged(CTaskWindow *this, __int64 a2)
{
  struct IUnknown *v4; // r9
  __int64 v5; // r14
  void (__fastcall *v6)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  struct IUnknown *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    v6 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 464LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v10);
    v6(v5, AddressOf);
    v4 = v10;
  }
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 344LL))(v8, (unsigned int)(a2 & 1) + 3);
    v9 = (*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
    if ( v9 )
      CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
        (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
        v9,
        1u,
        (struct IImmersiveMonitor *)v10,
        *((struct IImmersiveApplicationInternal **)this + 16),
        a2);
  }
  else
  {
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      *((HWND *)this + 4),
      13,
      v4,
      *((struct IImmersiveApplicationInternal **)this + 16),
      a2);
    CTaskWindow::s_UpdateDelayedVisibilityTimestamp((CTaskWindow *)((char *)this + 32), a2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
}
