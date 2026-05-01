/*
 * XREFs of ?GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAPEAU2@@Z @ 0x18043410C
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1804347A0 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::GetImmersiveMonitorForNavigate(
        XamlAllUpViewHost *this,
        struct IImmersiveMonitor *a2,
        int a3,
        struct IImmersiveMonitor **a4)
{
  struct IImmersiveMonitor **v8; // rbx
  __int64 v9; // r14
  int (__fastcall *v10)(__int64, bool, struct IImmersiveMonitor *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IImmersiveMonitor *v13; // [rsp+50h] [rbp+8h] BYREF

  v8 = (struct IImmersiveMonitor **)((char *)this + 240);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 30);
  *a4 = *v8;
  v9 = *((_QWORD *)this + 29);
  if ( v9 && (unsigned __int64)((__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 3) > 1 )
  {
    v13 = 0LL;
    v10 = *(int (__fastcall **)(__int64, bool, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v9 + 104LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v13);
    if ( v10(v9, a3 == 5, a2, AddressOf) >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      *a4 = v13;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  }
  return 0LL;
}
