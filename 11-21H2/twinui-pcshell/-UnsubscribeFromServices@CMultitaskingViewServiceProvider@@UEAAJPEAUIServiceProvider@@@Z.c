/*
 * XREFs of ?UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x180113790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x18011383C (-_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::UnsubscribeFromServices(
        CMultitaskingViewServiceProvider *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  CMultitaskingViewServiceProvider::_ShutdownChildServices((CMultitaskingViewServiceProvider *)((char *)this - 24));
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 17);
  }
  v4 = (void *)*((_QWORD *)this + 27);
  if ( v4 )
    SetEvent(v4);
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  return 0LL;
}
