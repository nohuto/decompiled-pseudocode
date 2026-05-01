/*
 * XREFs of ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1804E4D00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??1ActivationData@CSwitchController@@QEAA@XZ @ 0x180237892 (--1ActivationData@CSwitchController@@QEAA@XZ.c)
 *     ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x1804E49CC (--1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ.c)
 *     ?BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z @ 0x1804E4B48 (-BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1804E54F8 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1804E575C (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1804E5AF0 (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x1805E7278 (-FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
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
  int v14; // [rsp+34h] [rbp-3Ch]
  int v15; // [rsp+38h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  struct IImmersiveApplication *v17; // [rsp+48h] [rbp-28h]
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  char v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+68h] [rbp-8h]
  struct IImmersiveApplication *v21; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+48h] BYREF

  v22 = 0LL;
  v6 = (CSwitchController *)(this - 11);
  MonitorForAppSwitchWithPreference = CSwitchController::CDetectSwitchReentrancy::BeginSwitchToApp(
                                        (CSwitchController::CDetectSwitchReentrancy *)&v22,
                                        (struct CSwitchController *)(this - 11));
  if ( MonitorForAppSwitchWithPreference >= 0 )
  {
    v14 = 0;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
    v13 = *((_DWORD *)a3 + 4);
    v15 = *((_DWORD *)a3 + 6);
    if ( a2 )
    {
      v21 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      v21 = v17;
      v17 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    }
    v14 = *((_DWORD *)a3 + 5);
    if ( *((_QWORD *)a3 + 4) )
    {
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)&v18 + 1);
      CallerIdentity::FindApplication(*(this - 9), *((struct IUnknown **)a3 + 4), (HWND)AddressOf, v9);
    }
    v10 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v16);
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
  CSwitchController::CDetectSwitchReentrancy::~CDetectSwitchReentrancy((CSwitchController::CDetectSwitchReentrancy *)&v22);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
