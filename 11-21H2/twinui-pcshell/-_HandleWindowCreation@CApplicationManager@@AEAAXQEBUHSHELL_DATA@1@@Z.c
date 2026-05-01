/*
 * XREFs of ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180106540
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1802EA7F8 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180106894 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x180106998 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x1802E9F60 (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_HandleWindowCreation(CApplicationManager *this, HWND *a2)
{
  struct IImmersiveMonitor **AddressOf; // rax
  HWND ForegroundWindow; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v7 = 0LL;
    AddressOf = (struct IImmersiveMonitor **)Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v7);
    CApplicationManager::_MonitorFromWindow(this, a2[1], AddressOf);
    (*(void (__fastcall **)(_QWORD, HWND, _QWORD, __int64, __int64))(**((_QWORD **)this + 67) + 24LL))(
      *((_QWORD *)this + 67),
      a2[1],
      *((unsigned int *)a2 + 6),
      1LL,
      v7);
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow == a2[1] )
    {
      v6[0] = this;
      v6[1] = ForegroundWindow;
      CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(*((_QWORD *)this + 100), v6);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( (*a2 == (HWND)26 || *a2 == (HWND)29)
      && !CApplicationManager::_HandleUncloakableWindow(this, (const struct CApplicationManager::HSHELL_DATA *const)a2) )
    {
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
        a2[1],
        1LL);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 74) + 24LL))(*((_QWORD *)this + 74), a2[1]);
  }
}
