/*
 * XREFs of _Microsoft::WRL::Details::Make_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const_&_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType__::_1_::dtor$0 @ 0x1803E8E65
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1803DED10 (--1-$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_UwpWindowWrapper_UwpWindowEventDispatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext___HSTRING_____enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_const___Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId___Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId___unsigned_short_const___enum_WindowCreatedType__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return Microsoft::WRL::ComPtr<UwpWindowWrapper>::~ComPtr<UwpWindowWrapper>(*(__int64 **)(a2 + 160));
  }
  return result;
}
