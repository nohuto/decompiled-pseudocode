/*
 * XREFs of ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1804E50C0
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1804E54F8 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitch(
        IUnknown **this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveApplication *a3,
        struct IImmersiveMonitor **a4)
{
  HRESULT v8; // edi
  int (__fastcall *v9)(struct IImmersiveApplication *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  void *v11; // rbx
  __int64 (__fastcall *v12)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rdi
  struct IImmersiveMonitor *v13; // rax
  struct IImmersiveMonitor *v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h] BYREF
  int v17; // [rsp+80h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  v15 = 0LL;
  v8 = -2147023728;
  (*(void (__fastcall **)(struct IImmersiveApplication *, int *))(*(_QWORD *)a3 + 64LL))(a3, &v17);
  if ( !v17 && a2 )
    goto LABEL_9;
  v16 = 0LL;
  v9 = *(int (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)a3 + 232LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v16);
  if ( v9(a3, AddressOf) >= 0
    && (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 48LL))(v16, &ppvOut) >= 0
    && (_DWORD)ppvOut )
  {
    Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)&v15, &v16);
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  if ( v8 >= 0 )
    goto LABEL_13;
  if ( a2 )
  {
LABEL_9:
    Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((__int64 *)&v15, (__int64)a2);
    v8 = 0;
LABEL_13:
    v13 = v15;
    v15 = 0LL;
    *a4 = v13;
    goto LABEL_14;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         this[2],
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &ppvOut);
  if ( v8 >= 0 )
  {
    v11 = ppvOut;
    v12 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)ppvOut
                                                                                                + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    v8 = v12(v11, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v15);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  if ( v8 >= 0 )
    goto LABEL_13;
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v8;
}
