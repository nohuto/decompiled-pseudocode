/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UIFocusSessionComponent@3456@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180391B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::Windows::Internal::Shell::IFocusSessionComponent,void>::GetRuntimeClassName(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 - 56;
  if ( !a1 )
    v1 = 32LL;
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName(v1);
}
