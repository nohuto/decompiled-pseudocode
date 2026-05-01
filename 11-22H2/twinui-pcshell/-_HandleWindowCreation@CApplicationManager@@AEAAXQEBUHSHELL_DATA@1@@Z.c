/*
 * XREFs of ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180173FF8
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1803A34BC (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x180011824 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1801740DC (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x1803A2E60 (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_HandleWindowCreation(int **this, HWND *a2)
{
  __int64 *AddressOf; // rax
  HWND ForegroundWindow; // rax
  __int128 v6; // [rsp+40h] [rbp-18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v7 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v7);
    CApplicationManager::_MonitorFromWindow((CApplicationManager *)this, a2[1], (struct IImmersiveMonitor **)AddressOf);
    (*(void (__fastcall **)(int *, HWND, _QWORD, __int64, __int64, _DWORD, _DWORD))(*(_QWORD *)this[67] + 24LL))(
      this[67],
      a2[1],
      *((unsigned int *)a2 + 6),
      1LL,
      v7,
      0,
      0);
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow == a2[1] )
    {
      *(_QWORD *)&v6 = this;
      *((_QWORD *)&v6 + 1) = ForegroundWindow;
      CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(this[100], &v6);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( (*a2 == (HWND)26 || *a2 == (HWND)29)
      && !CApplicationManager::_HandleUncloakableWindow(
            (CApplicationManager *)this,
            (const struct CApplicationManager::HSHELL_DATA *const)a2) )
    {
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
        a2[1],
        1LL);
    }
  }
  else
  {
    (*(void (__fastcall **)(int *, HWND))(*(_QWORD *)this[74] + 24LL))(this[74], a2[1]);
  }
}
