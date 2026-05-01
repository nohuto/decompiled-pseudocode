/*
 * XREFs of ?_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x18011383C
 * Callers:
 *     ?UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x180113790 (-UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewServiceProvider::_ShutdownChildServices(CMultitaskingViewServiceProvider *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rbx

  v1 = (__int64 *)((char *)this + 184);
  IUnknown_SetSite(*((IUnknown **)this + 23), 0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v1 + 24LL))(*v1, 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24), 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VsUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VsUpdates>::GetImpl'::`2'::impl,
    v3);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 29) + 24LL))(*((_QWORD *)this + 29), 0LL);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 29);
  v4 = (_QWORD *)((char *)this + 176);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 72LL))(*((_QWORD *)this + 22), 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 24LL))(*v4, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 32LL))(*v4, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 40LL))(*v4, 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), 0LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
}
