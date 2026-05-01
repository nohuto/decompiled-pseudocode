/*
 * XREFs of ?HandleDestruction@CImmersiveWindowManager@@UEAA?AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveApplicationInternal@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180154DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800EBACC (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800EBB08 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180154EF0 (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::HandleDestruction(
        __int64 a1,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *),
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // r8
  void (__fastcall ***v14)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *); // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v16[96]; // [rsp+30h] [rbp-98h] BYREF

  *a4 = 0LL;
  v8 = ((__int64 (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *)))(*a2)[35])(a2) & 2;
  ((void (__fastcall *)(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, CImmersiveAppFinderByApplication *), _BYTE *))(*a2)[43])(
    a2,
    v16);
  v9 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *))(*a2)[10])(a2, a3, a4);
  v10 = v9;
  if ( v9 == 2 || v9 == 4 )
  {
    *(_BYTE *)(a1 + 88) = 0;
  }
  else if ( v9 == 5 )
  {
    v15 = 0LL;
    v11 = (unsigned int)CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                          (CImmersiveAppFinderByApplication *)&v14,
                          a2);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
      a1 + 48,
      v11,
      v12,
      (int)&v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    v14 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
      a1 + 48,
      &v14,
      v15);
    if ( (_DWORD)v8 )
      *(_BYTE *)(a1 + 88) = 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  }
  return v10;
}
