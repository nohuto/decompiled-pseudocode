/*
 * XREFs of ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1802F0FF8
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180103B30 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::_EnsureMonitorManager(CClassicWindowManager *this)
{
  unsigned int Service; // ebx
  void **v3; // rsi
  void (__fastcall *v4)(char *, GUID *, IUnknown **); // rbx
  IUnknown *punk; // [rsp+38h] [rbp+10h] BYREF

  Service = 0;
  v3 = (void **)((char *)this + 272);
  if ( !*((_QWORD *)this + 34) )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 34);
    punk = 0LL;
    v4 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 4) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v4((char *)this + 32, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    Service = IUnknown_QueryService(
                punk,
                (const GUID *const)&SID_IImmersiveMonitorService,
                &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  }
  return Service;
}
