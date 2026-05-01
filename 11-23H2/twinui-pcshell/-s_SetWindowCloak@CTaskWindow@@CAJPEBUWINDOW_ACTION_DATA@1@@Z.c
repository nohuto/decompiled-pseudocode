/*
 * XREFs of ?s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z @ 0x1803C87C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1803A58DC (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x1803C8910 (-s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::s_SetWindowCloak(const struct CTaskWindow::WINDOW_ACTION_DATA *a1)
{
  __int64 v2; // rax
  char v3; // cl
  int v4; // esi
  struct IUnknown *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  void (__fastcall *v8)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v10; // r10
  struct IUnknown *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  v3 = *((_BYTE *)a1 + 8);
  if ( v3 != *(_BYTE *)(v2 + 24) )
  {
    v4 = 1;
    if ( (*(_BYTE *)(v2 + 28) & 1) == 0 )
    {
      *(_BYTE *)(v2 + 24) = v3;
      v5 = 0LL;
      if ( (*(int (__fastcall **)(PVOID, _QWORD, bool))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                      + 24LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             **((_QWORD **)a1 + 3),
             *((_BYTE *)a1 + 8) != 0) >= 0 )
      {
        v6 = *(unsigned int *)(*((_QWORD *)a1 + 3) + 84LL) | (unsigned __int64)(*((_BYTE *)a1 + 8) == 0);
        v12 = 0LL;
        v7 = *((_QWORD *)a1 + 2);
        if ( v7 )
        {
          v8 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 464LL);
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v12);
          v8(v7, AddressOf);
          v5 = v12;
        }
        v10 = *((_QWORD *)a1 + 3);
        if ( *(_DWORD *)(v10 + 12) == 4 )
        {
          v4 = 13;
        }
        else if ( *(_DWORD *)(v10 + 12) != 5 )
        {
          v4 = *(_DWORD *)(v10 + 12) + 8;
        }
        CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
          (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
          *(HWND *)v10,
          v4,
          v5,
          *((struct IImmersiveApplicationInternal **)a1 + 2),
          v6);
        CTaskWindow::s_UpdateDelayedVisibilityTimestamp(*((struct CTaskWindow::TASK_WINDOW **)a1 + 3), v6);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
      }
    }
  }
  return 0LL;
}
