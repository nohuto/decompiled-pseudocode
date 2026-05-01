/*
 * XREFs of ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x1802D0E80
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18001FB24 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800207C0 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18002080C (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023778 (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023798 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180024A4C (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x1801D70F8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802CF282 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::HandleSessionIdleStateChanged(__int64 a1, int a2)
{
  CImmersiveApp::CImmersiveWindowCollection *v3; // rdi
  void (__fastcall *v4)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176);
  if ( a2 == 2 )
  {
    if ( (*(_BYTE *)(a1 + 388) & 2) != 0 )
    {
      v8 = 0LL;
      v4 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 464LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v8);
      v4(a1, AddressOf);
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)v3, 2);
      v6 = *((_DWORD *)v3 + 53);
      if ( (v6 & 2) == 0 && (v6 & 1) == 0 )
        CImmersiveApp::CImmersiveWindowCollection::_OnDeferredGhostBitsClear(v3);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    }
    else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
           && (*(_BYTE *)(a1 + 388) & 2) == 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(v7);
    }
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176))
         && !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
               (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
               (struct IUnknown *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64)))
         && *(_QWORD *)(a1 + 352) )
  {
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v3) )
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)v3, 2u);
    else
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual((__int64)v3, 0, 2u);
  }
}
