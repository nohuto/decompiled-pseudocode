/*
 * XREFs of ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x18004916C
 * Callers:
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180049328 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x18030B920 (-HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C0A8 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CTaskWindow::s_UpdateNavigationLevel(
        struct IImmersiveApplicationInternal *a1,
        struct CTaskWindow::TASK_WINDOW *a2)
{
  int v4; // r8d
  __int64 v5; // rsi
  unsigned int v6; // r12d
  int v7; // r8d
  unsigned int v8; // r15d
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // rdi
  struct IImmersiveMonitor *v14; // r9
  void (__fastcall *v15)(struct IImmersiveApplicationInternal *, __int64); // rbx
  __int64 AddressOf; // rax
  int v17; // eax
  __int64 v18[2]; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+88h] [rbp+48h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v4 = *((_DWORD *)a2 + 22);
  v5 = 0LL;
  v6 = 1;
  if ( !v4 )
  {
LABEL_12:
    v8 = 1;
    goto LABEL_5;
  }
  v7 = v4 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v8 = 4;
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  v8 = 3;
LABEL_5:
  v21 = 0LL;
  v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 2);
  v10 = **v9;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  v10(v9, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v21);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 344LL))(v21, v8);
  v20 = 0LL;
  v11 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 2);
  v12 = **v11;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  v12(v11, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v20);
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 48LL))(v20, &v19) >= 0 )
  {
    v13 = v19;
    v14 = 0LL;
    v18[0] = 0LL;
    if ( a1 )
    {
      v15 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*(_QWORD *)a1 + 464LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v18);
      v15(a1, AddressOf);
      v14 = (struct IImmersiveMonitor *)v18[0];
    }
    v17 = *((_DWORD *)a2 + 3);
    if ( v17 != 5 )
      v6 = v17 + 8;
    LOBYTE(v5) = v8 == 4;
    CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
      (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
      v13,
      v6,
      v14,
      a1,
      v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v18);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
}
