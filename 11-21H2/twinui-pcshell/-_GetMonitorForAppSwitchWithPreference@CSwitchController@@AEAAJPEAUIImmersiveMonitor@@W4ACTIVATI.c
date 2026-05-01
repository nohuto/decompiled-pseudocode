/*
 * XREFs of ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1804E54F8
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1804E4D00 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1804E50C0 (-_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplicatio.c)
 *     ?_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveMonitor@@PEAPEAU3@PEA_N@Z @ 0x1804E56A8 (-_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersive.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitchWithPreference(
        IUnknown **a1,
        __int64 a2,
        unsigned int a3,
        struct IImmersiveApplication *a4,
        struct IImmersiveMonitor **a5)
{
  struct IImmersiveMonitor **v9; // rsi
  __int64 *AddressOf; // rax
  unsigned int MonitorForAppSwitch; // ebx
  struct IImmersiveMonitor *v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = a5;
  *a5 = 0LL;
  v13[0] = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)v13);
  if ( (int)CSwitchController::_GetValidDefaultMonitor(&a5, a3, a2, AddressOf, &a5) >= 0 && (_BYTE)a5 )
    MonitorForAppSwitch = (**(__int64 (__fastcall ***)(struct IImmersiveMonitor *, GUID *, struct IImmersiveMonitor **))v13[0])(
                            v13[0],
                            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                            v9);
  else
    MonitorForAppSwitch = CSwitchController::_GetMonitorForAppSwitch(a1, v13[0], a4, v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v13);
  return MonitorForAppSwitch;
}
