/*
 * XREFs of _wil::MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const_(&)[53]_enum_WindowCreatedType_&_int__::_1_::dtor$0 @ 0x1802C0E5D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1804CEF6C (--1-$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind___Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId___Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId___unsigned_short_const_____53__enum_WindowCreatedType___int__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    return Microsoft::WRL::ComPtr<UwpWindowWrapper>::~ComPtr<UwpWindowWrapper>(*(_QWORD *)(a2 + 128));
  }
  return result;
}
