/*
 * XREFs of ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x1800212CC
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180076880 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180021344 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180074BD4 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x1803078A0 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::_SetPos_HideApplication(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 result; // rax
  void (__fastcall *v10)(__int64, __int64); // rbx
  __int64 AddressOf; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a5 == 2 )
  {
    v12[0] = 0LL;
    v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 112) + 464LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v12);
    v10(a1 + 112, AddressOf);
    if ( (unsigned int)CImmersiveApp::_UpdateApplication(a1, a2, a3, a4) == 1 )
      CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
        (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288),
        9LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12);
  }
  result = CImmersiveApp::_HideApplication(a1, a5);
  if ( a5 != 2 )
    return CImmersiveApp::_UpdateApplication(a1, a2, a3, a4);
  return result;
}
