/*
 * XREFs of ?OnBackgroundActivated@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@UEAAHPEAX@Z @ 0x1804F5FF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?OnBackgroundActivated@?$IApplicationOverrides2T@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@Xaml@UI@Windows@winrt@@QEBA@AEBUBackgroundActivatedEventArgs@Activation@ApplicationModel@45@@Z @ 0x1804F5F3C (-OnBackgroundActivated@-$IApplicationOverrides2T@UXamlApplication@implementation@XamlExplorerHos.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::IApplicationOverrides2>::OnBackgroundActivated(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v3 = a2;
    winrt::Windows::UI::Xaml::IApplicationOverrides2T<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication>::OnBackgroundActivated(
      (a1 - 48) & -(__int64)(a1 != 0),
      &v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
