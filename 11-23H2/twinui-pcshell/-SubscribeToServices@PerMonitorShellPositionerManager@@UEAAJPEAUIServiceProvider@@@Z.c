/*
 * XREFs of ?SubscribeToServices@PerMonitorShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800EFB20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PerMonitorShellPositionerManager::SubscribeToServices(
        PerMonitorShellPositionerManager *this,
        struct IServiceProvider *a2)
{
  GUID *v3; // rsi
  __int64 *v4; // rdi
  __int64 v5; // rbp
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx

  v3 = &c_positionersSIDs;
  v4 = (__int64 *)((char *)this + 80);
  v5 = 10LL;
  do
  {
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
    ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
      a2,
      v3++,
      &GUID_ee010e17_919a_4068_868b_675acf787303,
      v4++);
    --v5;
  }
  while ( v5 );
  return 0LL;
}
