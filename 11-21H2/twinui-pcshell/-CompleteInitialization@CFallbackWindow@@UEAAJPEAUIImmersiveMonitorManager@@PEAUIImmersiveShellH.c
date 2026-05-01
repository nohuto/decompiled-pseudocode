/*
 * XREFs of ?CompleteInitialization@CFallbackWindow@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveShellHookService@@@Z @ 0x1800D5380
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1800D55DC (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFallbackWindow::CompleteInitialization(
        struct IImmersiveMonitor **this,
        struct IImmersiveMonitorManager *a2,
        struct IImmersiveShellHookService *a3)
{
  __int64 (__fastcall *v6)(struct IImmersiveMonitorManager *, __int64); // rbx
  __int64 AddressOf; // rax
  int v8; // ebx
  __int64 (__fastcall *v9)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(__int64 (__fastcall **)(struct IImmersiveMonitorManager *, __int64))(*(_QWORD *)a2 + 64LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(this + 6);
  v8 = v6(a2, AddressOf);
  if ( v8 >= 0 )
  {
    v11 = 0LL;
    v9 = **(__int64 (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v8 = v9(a2, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, &v11);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v11 + 24LL))(
             v11,
             (unsigned __int64)(this + 1) & -(__int64)(this != (struct IImmersiveMonitor **)72),
             (char *)this + 40);
      if ( v8 >= 0 )
      {
        CFallbackWindow::_SizeWindow((CFallbackWindow *)(this - 9), this[6]);
        (*((void (__fastcall **)(char *, struct IImmersiveShellHookService *))*(this - 6) + 4))((char *)this - 48, a3);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  }
  return (unsigned int)v8;
}
