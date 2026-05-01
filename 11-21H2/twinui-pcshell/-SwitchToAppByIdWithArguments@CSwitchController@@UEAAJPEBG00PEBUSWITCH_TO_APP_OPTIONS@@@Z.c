/*
 * XREFs of ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1804E4E40
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??1ActivationData@CSwitchController@@QEAA@XZ @ 0x180237892 (--1ActivationData@CSwitchController@@QEAA@XZ.c)
 *     ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x1804E49CC (--1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ.c)
 *     ?BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z @ 0x1804E4B48 (-BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1804E55D0 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1804E55D0.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1804E575C (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x1804E5994 (-_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivatio.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1804E5AF0 (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     McTemplateU0zzz_EventWriteTransfer @ 0x1804E5DD4 (McTemplateU0zzz_EventWriteTransfer.c)
 *     McTemplateU0zzzq_EventWriteTransfer @ 0x1804E5EDC (McTemplateU0zzzq_EventWriteTransfer.c)
 *     ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x1805E7278 (-FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::SwitchToAppByIdWithArguments(
        CallerIdentity **this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const struct SWITCH_TO_APP_OPTIONS *a5)
{
  const WCHAR *v6; // rdi
  const WCHAR *v9; // r9
  int v10; // edx
  int v11; // ecx
  int MonitorForAppSwitchWithPreference; // ebx
  const struct SWITCH_TO_APP_OPTIONS *v13; // rsi
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v15; // r9
  __int64 *v16; // rax
  CSwitchController *v17; // rcx
  _DWORD v19[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  char v22; // [rsp+60h] [rbp-10h]
  __int64 v23; // [rsp+68h] [rbp-8h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+30h] BYREF

  v6 = a3;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    LODWORD(v9) = (_DWORD)a3;
    if ( !a3 )
      v9 = &LocaleName;
    McTemplateU0zzz_EventWriteTransfer((_DWORD)this, (_DWORD)a2, (_DWORD)a2, (_DWORD)v9, (__int64)a4);
  }
  v24 = 0LL;
  MonitorForAppSwitchWithPreference = CSwitchController::CDetectSwitchReentrancy::BeginSwitchToApp(
                                        (CSwitchController::CDetectSwitchReentrancy *)&v24,
                                        (struct CSwitchController *)(this - 11));
  if ( MonitorForAppSwitchWithPreference >= 0 )
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v13 = a5;
    v19[0] = *((_DWORD *)a5 + 4);
    v19[1] = *((_DWORD *)a5 + 5);
    v19[2] = *((_DWORD *)a5 + 6);
    Microsoft::WRL::ComPtr<IUnknown>::operator=(&v23, *((_QWORD *)a5 + 5));
    if ( *((_QWORD *)v13 + 4) )
    {
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)&v21 + 1);
      CallerIdentity::FindApplication(*(this - 9), *((struct IUnknown **)v13 + 4), (HWND)AddressOf, v15);
    }
    v16 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v20);
    MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                          this - 11,
                                          *(_QWORD *)v13,
                                          *((unsigned int *)v13 + 2),
                                          a2,
                                          v16);
    if ( MonitorForAppSwitchWithPreference >= 0 )
    {
      MonitorForAppSwitchWithPreference = ((__int64 (__fastcall *)(CallerIdentity **, const unsigned __int16 *, const WCHAR *, const unsigned __int16 *, _DWORD, _DWORD *))CSwitchController::_PrepareAppForActivation)(
                                            this - 11,
                                            a2,
                                            v6,
                                            a4,
                                            *((_DWORD *)v13 + 3),
                                            v19);
      if ( MonitorForAppSwitchWithPreference >= 0 )
      {
        MonitorForAppSwitchWithPreference = CSwitchController::_SwitchToApp(
                                              (CSwitchController *)(this - 11),
                                              (struct CSwitchController::ActivationData *)v19);
        if ( MonitorForAppSwitchWithPreference >= 0 )
          MonitorForAppSwitchWithPreference = CSwitchController::_LaunchApp(
                                                v17,
                                                (struct CSwitchController::ActivationData *)v19);
      }
    }
    CSwitchController::ActivationData::~ActivationData((CSwitchController::ActivationData *)v19);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    if ( !v6 )
      v6 = &LocaleName;
    McTemplateU0zzzq_EventWriteTransfer(
      v11,
      v10,
      (_DWORD)a2,
      (_DWORD)v6,
      (__int64)a4,
      MonitorForAppSwitchWithPreference);
  }
  CSwitchController::CDetectSwitchReentrancy::~CDetectSwitchReentrancy((CSwitchController::CDetectSwitchReentrancy *)&v24);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
