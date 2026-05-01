/*
 * XREFs of ??1UwpWindowWrapperBase@@QEAA@XZ @ 0x180404000
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180403F94 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@U.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1804053FC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowW_ea_1804053FC.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18014D6A4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowWrapperBase::~UwpWindowWrapperBase(UwpWindowWrapperBase *this, __int64 a2)
{
  HSTRING v3; // rcx
  std::_Ref_count_base *v4; // rcx
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  _QWORD *v8; // rcx
  unsigned __int64 i; // rdi
  __int64 v10; // rdx

  v3 = (HSTRING)*((_QWORD *)this + 69);
  if ( v3 )
    WindowsDeleteString(v3);
  std::_Func_class<void,bool>::_Tidy((__int64)this + 392, a2);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 42);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (HSTRING)*((_QWORD *)this + 39);
  if ( v5 )
    WindowsDeleteString(v5);
  v6 = (HSTRING)*((_QWORD *)this + 38);
  if ( v6 )
    WindowsDeleteString(v6);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 35);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 34);
  v7 = (HSTRING)*((_QWORD *)this + 33);
  if ( v7 )
    WindowsDeleteString(v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
  v8 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v8 )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 25); ++i )
    {
      v8 = (_QWORD *)*((_QWORD *)this + 24);
      v10 = v8[i];
      if ( v10 )
      {
        v8[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v8 = (_QWORD *)*((_QWORD *)this + 24);
      }
    }
    CoTaskMemFree(v8);
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease((volatile signed __int32 **)this + 18);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)this + 17);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 15);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
}
