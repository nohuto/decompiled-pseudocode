/*
 * XREFs of ?TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x180533F60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1805325DC (-IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 */

void __fastcall CDragVisual::TargetMonitorChanged(CDragVisual *this, IUnknown *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rcx
  __int64 *v6; // rbx
  int v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  v4 = *((_QWORD *)this + 5);
  if ( !v4 || (*(int (__fastcall **)(__int64, IUnknown *, int *))(*(_QWORD *)v4 + 96LL))(v4, a2, &v7) >= 0 && !v7 )
  {
    if ( *v2 )
    {
      *((_DWORD *)this + 30) = -1;
      *((_BYTE *)this + 250) = 1;
    }
    Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=(v2, (__int64)a2);
    v8 = 0LL;
    v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v8, &v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v6);
    if ( IUnknown_QueryService(
           a2,
           (const GUID *const)&SID_ImmersiveLayout,
           &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
           (void **)v6) < 0
      || (*(int (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v8 + 56LL))(v8, 10LL, (char *)this + 168) < 0 )
    {
      ((void (__fastcall *)(IUnknown *, char *))a2->lpVtbl[3].QueryInterface)(a2, (char *)this + 168);
    }
    IUnknown_GetScaleFactor(a2, (enum DEVICE_SCALE_FACTOR *)this + 80);
    SetWindowPos(*((HWND *)this + 16), 0LL, 0, 0, 0, 0, 0x13u);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  }
}
