/*
 * XREFs of ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1802E9C78
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x1802EA5BC (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1802EAA20 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180143C9C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x1802ECC8C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2,
        HWND a3)
{
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  int v10; // [rsp+38h] [rbp-8h]
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 131) )
  {
    SetPropW(a3, L"IAM.IsUncloakedXamlIslandPopup", HANDLE_FLAG_INHERIT);
    SetWindowLongPtrW(a3, -8, 0LL);
    (*(void (__fastcall **)(PVOID, HWND, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                         + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      a3,
      0LL,
      5LL);
    (*(void (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      a3,
      0LL);
  }
  else
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( *((_DWORD *)a2 + 4) == 2
      && (Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11),
          v9 = *((_QWORD *)a2 + 1),
          v10 = 2,
          (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                 (__int64)this,
                 (__int64)&v9,
                 &v11,
                 0LL) >= 0) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 280LL))(v11);
      v6 = v11;
      v7 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 464LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v12);
      v7(v6, AddressOf);
    }
    else if ( *((_DWORD *)a2 + 4) == 3 )
    {
      (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 74) + 56LL))(*((_QWORD *)this + 74));
    }
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      &CApplicationManagerUtility::g_pIAMGlobals[1],
      a3,
      *((unsigned int *)a2 + 6));
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  }
}
