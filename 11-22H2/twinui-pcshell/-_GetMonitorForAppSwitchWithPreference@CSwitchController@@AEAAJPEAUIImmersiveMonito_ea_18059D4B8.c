/*
 * XREFs of ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x18059D4B8
 * Callers:
 *     ?GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFERENCE@@PEAUtagRECT@@@Z @ 0x18059CA80 (-GetInitialAppRect@CSwitchController@@UEAAJPEAUIImmersiveMonitor@@PEBGW4ACTIVATION_MONITOR_PREFE.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18059CD30 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z @ 0x18059D17C (-_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z.c)
 *     ?_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveMonitor@@PEAPEAU3@PEA_N@Z @ 0x18059D590 (-_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersive.c)
 */

__int64 __fastcall CSwitchController::_GetMonitorForAppSwitchWithPreference(
        CallerIdentity **a1,
        __int64 a2,
        unsigned int a3,
        struct IUnknown *a4,
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
