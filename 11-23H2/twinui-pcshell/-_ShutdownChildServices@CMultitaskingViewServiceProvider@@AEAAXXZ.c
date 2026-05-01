/*
 * XREFs of ?_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x1801ABDDC
 * Callers:
 *     ?UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801ABD30 (-UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewServiceProvider::_ShutdownChildServices(CMultitaskingViewServiceProvider *this)
{
  __int64 *v1; // rbx
  _QWORD *v3; // rbx

  v1 = (__int64 *)((char *)this + 184);
  IUnknown_SetSite(*((IUnknown **)this + 23), 0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v1 + 24LL))(*v1, 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24), 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 29) + 24LL))(*((_QWORD *)this + 29), 0LL);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 29);
  v3 = (_QWORD *)((char *)this + 176);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 72LL))(*((_QWORD *)this + 22), 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 24LL))(*v3, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 32LL))(*v3, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 40LL))(*v3, 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
}
