/*
 * XREFs of ??1?$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1803EA6B0
 * Callers:
 *     _Microsoft::WRL::Details::Make_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&__::_1_::dtor$0 @ 0x1803E8A09 (_Microsoft--WRL--Details--Make_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows--Intern.c)
 *     _Microsoft::WRL::Details::Make_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType__::_1_::dtor$0 @ 0x1803E8B7D (_Microsoft--WRL--Details--Make_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Wi_ea_1803E8B7D.c)
 *     _wil::MakeOrThrow_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&__::_1_::dtor$0 @ 0x1803E93C3 (_wil--MakeOrThrow_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows--Internal--Shell--Uw.c)
 *     _wil::MakeOrThrow_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType__::_1_::dtor$0 @ 0x1803E9480 (_wil--MakeOrThrow_LegacyUwpWindowWrapper_UwpWindowEventDispatcher___Windows--Intern_ea_1803E9480.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803F0C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpW_ea_1803F0C60.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LegacyUwpWindowWrapper>::~ComPtr<LegacyUwpWindowWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::Release(result);
  }
  return result;
}
