/*
 * XREFs of ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z @ 0x1804E5294
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1804E55D0 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1804E55D0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z @ 0x1805E70D4 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitch(
        CallerIdentity **this,
        struct IImmersiveMonitor *a2,
        struct IUnknown *a3,
        struct IImmersiveMonitor **a4)
{
  struct IObjectArray **v8; // r9
  HRESULT v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  void *v16; // rbx
  __int64 (__fastcall *v17)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rdi
  struct IImmersiveMonitor *v18; // rax
  struct IImmersiveMonitor *v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 v22[4]; // [rsp+40h] [rbp-10h] BYREF
  void *ppvOut; // [rsp+80h] [rbp+30h] BYREF
  int v24; // [rsp+98h] [rbp+48h] BYREF

  *a4 = 0LL;
  v20 = 0LL;
  *(_QWORD *)v22 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v22);
  if ( (int)CallerIdentity::FindAllApplicationsByAppID(this[2], a3, v22, v8) >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)v22 + 24LL))(*(_QWORD *)v22, &ppvOut);
    v10 = 0;
    if ( v9 >= 0 )
    {
      while ( v10 < (unsigned int)ppvOut )
      {
        v21 = 0LL;
        v11 = *(_QWORD *)v22;
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v22 + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        v9 = v12(v11, v10, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v21);
        if ( v9 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 64LL))(v21, &v24);
          if ( v9 >= 0 )
          {
            if ( v24 )
            {
              v13 = v21;
              v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 232LL);
              AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v20);
              v9 = v14(v13, AddressOf);
              if ( v9 >= 0 )
              {
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
                break;
              }
            }
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        ++v10;
        if ( v9 < 0 )
          goto LABEL_12;
      }
      if ( v20 )
        goto LABEL_17;
    }
  }
LABEL_12:
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((__int64 *)&v20, (__int64)a2);
    v9 = 0;
LABEL_17:
    v18 = v20;
    v20 = 0LL;
    *a4 = v18;
    goto LABEL_18;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v9 = IUnknown_QueryService(
         (IUnknown *)this[2],
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &ppvOut);
  if ( v9 >= 0 )
  {
    v16 = ppvOut;
    v17 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)ppvOut
                                                                                                + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
    v9 = v17(v16, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v20);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  if ( v9 >= 0 )
    goto LABEL_17;
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v22);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v9;
}
