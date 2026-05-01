/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UIDiscoverabilityManager@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180696C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,winrt::Windows::Internal::Shell::IDiscoverabilityManager,void>::GetRuntimeClassName(
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
