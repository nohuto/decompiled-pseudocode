/*
 * XREFs of ?UnsubscribeFromServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BB3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerManager::UnsubscribeFromServices(
        ShellPositionerManager *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rsi

  v2 = (__int64 *)((char *)this + 136);
  if ( *((_DWORD *)this + 40) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 104LL))(*v2);
    *((_DWORD *)this + 40) = 0;
  }
  if ( *((_DWORD *)this + 41) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 80LL))(*((_QWORD *)this + 18));
    *((_DWORD *)this + 41) = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  return 0LL;
}
