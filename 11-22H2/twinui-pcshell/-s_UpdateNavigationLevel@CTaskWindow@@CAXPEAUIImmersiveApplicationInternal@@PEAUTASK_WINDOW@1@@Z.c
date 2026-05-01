/*
 * XREFs of ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x18001F908
 * Callers:
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x18001F878 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ?HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z @ 0x1803C7EF0 (-HandleCrashRecovery@CTaskWindow@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18001FAA0 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180174EA4 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CTaskWindow::s_UpdateNavigationLevel(
        struct IImmersiveApplicationInternal *a1,
        struct CTaskWindow::TASK_WINDOW *a2)
{
  int v4; // r8d
  __int64 v5; // r14
  int v6; // r8d
  unsigned int v7; // r15d
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rdi
  __int64 v11; // r9
  void (__fastcall *v12)(struct IImmersiveApplicationInternal *, __int64); // rbx
  __int64 AddressOf; // rax
  int v14; // r8d
  __int64 v15; // r8
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+88h] [rbp+48h] BYREF
  __int64 v18; // [rsp+90h] [rbp+50h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  v4 = *((_DWORD *)a2 + 22);
  v5 = 0LL;
  if ( !v4 )
  {
LABEL_12:
    v7 = 1;
    goto LABEL_5;
  }
  v6 = v4 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v7 = 4;
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  v7 = 3;
LABEL_5:
  v18 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 2);
  v9 = **v8;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  v9(v8, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v18);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 344LL))(v18, v7);
  v16[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
    (char *)a2 + 16,
    v16);
  if ( (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v16[0] + 48LL))(v16[0], &v17) >= 0 )
  {
    v10 = v17;
    v11 = 0LL;
    v19 = 0LL;
    if ( a1 )
    {
      v12 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*(_QWORD *)a1 + 464LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v19);
      v12(a1, AddressOf);
      v11 = v19;
    }
    v14 = *((_DWORD *)a2 + 3);
    if ( v14 == 5 )
      v15 = 1LL;
    else
      v15 = (unsigned int)(v14 + 8);
    LOBYTE(v5) = v7 == 4;
    CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
      &CApplicationManagerUtility::g_pIAMGlobals[1],
      v10,
      v15,
      v11,
      a1,
      v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
}
