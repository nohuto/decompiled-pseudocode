/*
 * XREFs of _wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId__UwpWindowManagerBridge___long_(__cdecl_UwpWindowManagerBridge::_)(Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId)_noexcept__::_1_::dtor$0 @ 0x1802C4DE6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBCC (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId__UwpWindowManagerBridge___long____cdecl_UwpWindowManagerBridge::___Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher___Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId__noexcept__::_1_::dtor_0(
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
