/*
 * XREFs of ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18059CC00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??1ActivationData@CSwitchController@@QEAA@XZ @ 0x1802E5C22 (--1ActivationData@CSwitchController@@QEAA@XZ.c)
 *     ?BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z @ 0x1802E5C64 (-BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1802E5C96 (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x18059C900 (--1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x18059D3E0 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x18059D9B0 (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x18073BA38 (-FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::SwitchToApp(
        CallerIdentity **this,
        struct IImmersiveApplication *a2,
        const struct SWITCH_TO_APP_OPTIONS *a3)
{
  CSwitchController *v6; // r14
  int MonitorForAppSwitchWithPreference; // ebx
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v9; // r9
  __int64 *v10; // rax
  CSwitchController *v11; // rcx
  int v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  struct IImmersiveApplication *v15; // [rsp+40h] [rbp-30h]
  __int128 v16; // [rsp+48h] [rbp-28h] BYREF
  char v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]
  struct IImmersiveApplication *v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+48h] BYREF

  v20 = 0LL;
  v6 = (CSwitchController *)(this - 11);
  MonitorForAppSwitchWithPreference = CSwitchController::CDetectSwitchReentrancy::BeginSwitchToApp(
                                        (CSwitchController::CDetectSwitchReentrancy *)&v20,
                                        (struct CSwitchController *)(this - 11));
  if ( MonitorForAppSwitchWithPreference >= 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0;
    v18 = 0LL;
    v13 = *((_DWORD *)a3 + 6);
    if ( a2 )
    {
      v19 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      v19 = v15;
      v15 = a2;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
    }
    if ( *((_QWORD *)a3 + 4) )
    {
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)&v16 + 1);
      CallerIdentity::FindApplication(*(this - 9), *((struct IUnknown **)a3 + 4), (HWND)AddressOf, v9);
    }
    v10 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v14);
    MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                          v6,
                                          *(_QWORD *)a3,
                                          *((unsigned int *)a3 + 2),
                                          a2,
                                          v10);
    if ( MonitorForAppSwitchWithPreference >= 0 )
    {
      MonitorForAppSwitchWithPreference = CSwitchController::_SwitchToApp(
                                            v6,
                                            (struct CSwitchController::ActivationData *)&v13);
      if ( MonitorForAppSwitchWithPreference >= 0 )
        MonitorForAppSwitchWithPreference = CSwitchController::_LaunchApp(
                                              v11,
                                              (struct CSwitchController::ActivationData *)&v13);
    }
    CSwitchController::ActivationData::~ActivationData((CSwitchController::ActivationData *)&v13);
  }
  CSwitchController::CDetectSwitchReentrancy::~CDetectSwitchReentrancy((CSwitchController::CDetectSwitchReentrancy *)&v20);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
