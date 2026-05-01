/*
 * XREFs of _wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewVisibilityChangedEventArgs____WindowManagerBridge___const_&_long_(__cdecl_WindowManagerBridge::_)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs__)_noexcept__::_1_::dtor$0 @ 0x1802210DB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18022A3F4 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::AppViewVisibilityChangedEventArgs____WindowManagerBridge___const___long____cdecl_WindowManagerBridge::___Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs____noexcept__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
