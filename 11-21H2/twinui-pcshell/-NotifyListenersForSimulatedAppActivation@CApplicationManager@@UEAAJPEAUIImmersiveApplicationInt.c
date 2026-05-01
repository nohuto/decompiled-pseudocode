/*
 * XREFs of ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E6060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005731C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18005897C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802E954C (-_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIIm.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  int MonitorForNotifyApp; // esi
  __int64 *AddressOf; // rax
  struct ISyncIAMEventHandler *v7; // rbx
  void (__fastcall *v8)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, __int64, int, int, int); // rdi
  int v9; // eax
  struct IImmersiveMonitor *v11[2]; // [rsp+40h] [rbp-10h] BYREF
  struct ISyncIAMEventHandler *v12; // [rsp+98h] [rbp+48h] BYREF
  struct IObjectArray *v13; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+58h] BYREF

  v14 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  MonitorForNotifyApp = v4((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v14);
  if ( MonitorForNotifyApp >= 0 )
  {
    v11[0] = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)v11);
    MonitorForNotifyApp = CApplicationManager::_GetMonitorForNotifyApp(
                            (CApplicationManager *)((char *)this - 240),
                            (struct IImmersiveApplicationInternal *)a2,
                            (struct IImmersiveMonitor **)AddressOf);
    if ( MonitorForNotifyApp >= 0 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
      MonitorForNotifyApp = CApplicationManager::_GetSingleMonitorObjectArray(
                              (CApplicationManager *)((char *)this - 240),
                              v11[0],
                              &v13);
      if ( MonitorForNotifyApp >= 0 )
      {
        v12 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
        MonitorForNotifyApp = CApplicationManager::_GetGlobalSyncEventHandler(
                                (CApplicationManager *)((char *)this - 240),
                                &v12);
        if ( MonitorForNotifyApp >= 0 )
        {
          v7 = v12;
          v8 = *(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, __int64, int, int, int))(*(_QWORD *)v12 + 24LL);
          v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *)))(*a2)[17])(a2);
          v8(v7, v13, ((unsigned __int64)this + 8) & -(__int64)(this != (CApplicationManager *)240), v14, v9, 7, 0xFFFF);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v11);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return (unsigned int)MonitorForNotifyApp;
}
