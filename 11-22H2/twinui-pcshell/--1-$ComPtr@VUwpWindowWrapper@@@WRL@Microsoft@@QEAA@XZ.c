/*
 * XREFs of ??1?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1804CEF6C
 * Callers:
 *     _wil::MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType_unsigned___int64_&__::_1_::dtor$0 @ 0x1802B82E2 (_wil--MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows--Internal--Shell--UwpWindo.c)
 *     _Microsoft::WRL::Details::Make_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType_unsigned___int64_&__::_1_::dtor$0 @ 0x1802B8312 (_Microsoft--WRL--Details--Make_UwpWindowWrapper_UwpWindowEventDispatcher___Windows--Internal--Sh.c)
 *     _wil::MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&_int__::_1_::dtor$0 @ 0x1802C0E5D (_wil--MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows--Internal--Sh_ea_1802C0E5D.c)
 *     _Microsoft::WRL::Details::Make_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&_int__::_1_::dtor$0 @ 0x1802C0E8D (_Microsoft--WRL--Details--Make_UwpWindowWrapper_UwpWindowEventDispatcher___Windows-_ea_1802C0E8D.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIUwpWindowWrapperUniversalInternal@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180149CD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperB.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<UwpWindowWrapper>::~ComPtr<UwpWindowWrapper>(__int64 *a1, volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(
             result,
             a2);
  }
  return result;
}
