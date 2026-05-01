/*
 * XREFs of ?GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFERENCE@@PEAUtagRECT@@@Z @ 0x1804E4B80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1804E55D0 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1804E55D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::GetInitialAppRect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        LPRECT lprc)
{
  __int64 *AddressOf; // rax
  int MonitorForAppSwitchWithPreference; // ebx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  SetRectEmpty(lprc);
  v12 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v12);
  MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                        a1 - 88,
                                        a2,
                                        a4,
                                        a3,
                                        AddressOf);
  if ( MonitorForAppSwitchWithPreference >= 0 )
    MonitorForAppSwitchWithPreference = (*(__int64 (__fastcall **)(__int64, LPRECT))(*(_QWORD *)v12 + 88LL))(v12, lprc);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
