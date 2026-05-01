/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@UIDashboardManager@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805BD7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::IDashboardManager,void>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 40;
  if ( !a1 )
    v2 = 56LL;
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName(
           v2,
           a2);
}
