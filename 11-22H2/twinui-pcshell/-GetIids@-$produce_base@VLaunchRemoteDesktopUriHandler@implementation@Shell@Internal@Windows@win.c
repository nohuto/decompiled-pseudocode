/*
 * XREFs of ?GetIids@?$produce_base@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1806961B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,void>::GetIids(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 16LL;
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>::NonDelegatingGetIids(v1);
}
