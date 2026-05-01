/*
 * XREFs of ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18059CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800E1C0C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??1ActivationData@CSwitchController@@QEAA@XZ @ 0x1802E5C22 (--1ActivationData@CSwitchController@@QEAA@XZ.c)
 *     ?BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z @ 0x1802E5C64 (-BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1802E5C96 (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x18059C900 (--1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x18059D4B8 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_18059D4B8.c)
 *     ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x18059D854 (-_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivatio.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x18059D9B0 (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     McTemplateU0zzz_EventWriteTransfer @ 0x18059DC8C (McTemplateU0zzz_EventWriteTransfer.c)
 *     McTemplateU0zzzq_EventWriteTransfer @ 0x18059DD9C (McTemplateU0zzzq_EventWriteTransfer.c)
 *     ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x18073BA38 (-FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
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
  const struct SWITCH_TO_APP_OPTIONS *v13; // r14
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v15; // r9
  __int64 *v16; // rax
  CSwitchController *v17; // rcx
  int v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+38h] [rbp-38h] BYREF
  __int128 v21; // [rsp+48h] [rbp-28h] BYREF
  char v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
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
    v19 = *((_DWORD *)a5 + 6);
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
      MonitorForAppSwitchWithPreference = ((__int64 (__fastcall *)(CallerIdentity **, const unsigned __int16 *, const WCHAR *, const unsigned __int16 *, _DWORD, int *))CSwitchController::_PrepareAppForActivation)(
                                            this - 11,
                                            a2,
                                            v6,
                                            a4,
                                            *((_DWORD *)v13 + 3),
                                            &v19);
      if ( MonitorForAppSwitchWithPreference >= 0 )
      {
        MonitorForAppSwitchWithPreference = CSwitchController::_SwitchToApp(
                                              (CSwitchController *)(this - 11),
                                              (struct CSwitchController::ActivationData *)&v19);
        if ( MonitorForAppSwitchWithPreference >= 0 )
          MonitorForAppSwitchWithPreference = CSwitchController::_LaunchApp(
                                                v17,
                                                (struct CSwitchController::ActivationData *)&v19);
      }
    }
    CSwitchController::ActivationData::~ActivationData((CSwitchController::ActivationData *)&v19);
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
