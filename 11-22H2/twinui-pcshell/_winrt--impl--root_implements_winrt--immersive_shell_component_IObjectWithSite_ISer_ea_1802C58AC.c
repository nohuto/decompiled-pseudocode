/*
 * XREFs of _winrt::impl::root_implements_winrt::immersive_shell_component_IObjectWithSite_IServiceProvider_IImmersiveShellComponent_winrt::Windows::Foundation::IInspectable_::get_weak_winrt::Windows::Internal::Shell::implementation::DashboardManager__::_1_::dtor$1 @ 0x1802C58AC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800DAED0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::root_implements_winrt::immersive_shell_component_IObjectWithSite_IServiceProvider_IImmersiveShellComponent_winrt::Windows::Foundation::IInspectable_::get_weak_winrt::Windows::Internal::Shell::implementation::DashboardManager__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 88));
  }
  return result;
}
